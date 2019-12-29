using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LogViewer
{
    public partial class MainForm : Form
    {
        LogManager manager;
        string SelectedPath;
        Thread Updater;

        public MainForm()
        {
            SelectedPath = "C:\\";
            manager = new LogManager();
            Updater = new Thread(new ThreadStart(UpdateThread));

            InitializeComponent();
        }
        ~MainForm()
        {
        }

        private void MainFormLoaded(object sender, EventArgs e)
        {
            Updater.Start();
        }

        private void MainFormDestroy(object sender, EventArgs e)
        {
            Updater.Abort(0);
        }

        void ShowText()
        {
            bool bAutoScroll = LogContents.SelectionStart == LogContents.Text.Length;

            LogContents.Lines = manager.Logs[SelectedPath].ToArray<string>();
            
            //if(bAutoScroll)
            //{
            //    LogContents.SelectionStart = LogContents.Text.Length;
            //    LogContents.ScrollToCaret();
            //    LogContents.Refresh();
            //}
        }

        private void OnOpen(object sender, EventArgs e)
        {
            OpenFileDialog dlg = new OpenFileDialog();
            dlg.InitialDirectory = System.IO.Path.GetDirectoryName(SelectedPath);
            dlg.ShowDialog();

            if(manager.Open(dlg.FileName) == true)
            {
                SelectedPath = dlg.FileName;
            }
            else
            {
                manager.Update(SelectedPath);
            }

            ShowText();
        }

        private void UpdateThread()
        {
            while (true)
            {
                try
                {
                    if (manager.Update(SelectedPath))
                        Invoke(new MethodInvoker(delegate () { ShowText(); }));
                }
                catch { };

                Thread.Sleep(200);
            }
        }
    }
}
