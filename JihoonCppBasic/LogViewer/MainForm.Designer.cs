namespace LogViewer
{
    partial class MainForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.LogContents = new System.Windows.Forms.TextBox();
            this.MainMenu = new System.Windows.Forms.MenuStrip();
            this.MainMenu_File = new System.Windows.Forms.ToolStripMenuItem();
            this.MainMenu_File_Open = new System.Windows.Forms.ToolStripMenuItem();
            this.MainMenu.SuspendLayout();
            this.SuspendLayout();
            // 
            // LogContents
            // 
            this.LogContents.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.LogContents.Location = new System.Drawing.Point(12, 24);
            this.LogContents.MaxLength = 9999999;
            this.LogContents.Multiline = true;
            this.LogContents.Name = "LogContents";
            this.LogContents.ReadOnly = true;
            this.LogContents.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.LogContents.Size = new System.Drawing.Size(776, 414);
            this.LogContents.TabIndex = 0;
            // 
            // MainMenu
            // 
            this.MainMenu.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.MainMenu_File});
            this.MainMenu.Location = new System.Drawing.Point(0, 0);
            this.MainMenu.Name = "MainMenu";
            this.MainMenu.Size = new System.Drawing.Size(800, 24);
            this.MainMenu.TabIndex = 2;
            this.MainMenu.Text = "menuStrip2";
            // 
            // 파일ToolStripMenuItem
            // 
            this.MainMenu_File.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.MainMenu_File_Open});
            this.MainMenu_File.Name = "파일ToolStripMenuItem";
            this.MainMenu_File.Size = new System.Drawing.Size(43, 20);
            this.MainMenu_File.Text = "파일";
            // 
            // 열기ToolStripMenuItem
            // 
            this.MainMenu_File_Open.Name = "열기ToolStripMenuItem";
            this.MainMenu_File_Open.Size = new System.Drawing.Size(180, 22);
            this.MainMenu_File_Open.Text = "열기";
            this.MainMenu_File_Open.Click += new System.EventHandler(this.OnOpen);
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.LogContents);
            this.Controls.Add(this.MainMenu);
            this.Name = "MainForm";
            this.Text = "Log Viewer";
            this.Load += new System.EventHandler(this.MainFormLoaded);
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.MainFormDestroy);
            this.MainMenu.ResumeLayout(false);
            this.MainMenu.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox LogContents;
        private System.Windows.Forms.MenuStrip MainMenu;
        private System.Windows.Forms.ToolStripMenuItem MainMenu_File;
        private System.Windows.Forms.ToolStripMenuItem MainMenu_File_Open;
    }
}

