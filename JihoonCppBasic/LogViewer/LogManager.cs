using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;

namespace LogViewer
{
    class LogManager
    {
        public Dictionary<string, List<string>> Logs;

        public LogManager()
        {
            Logs = new Dictionary<string, List<string>>();
        }

        ~LogManager()
        {
        }

        public bool Open(string path)
        {
            try
            {
                if (Logs.ContainsKey(path))
                    return false;

                List<string> TextLineList = new List<string>();
                TextLineList = (System.IO.File.ReadAllLines(path, Encoding.UTF32)).ToList();

                Logs.Add(path, TextLineList);

                return true;
            }
            catch
            {
                return false;
            }
        }

        public bool Update(string path)
        {
            if(Logs.ContainsKey(path) == false)
                return false;

            try
            {
                string[] UpdatedData = System.IO.File.ReadAllLines(path);

                if (UpdatedData.Length > Logs[path].Count)
                {
                    for (int nIndex = Logs[path].Count; nIndex < UpdatedData.Length; nIndex++)
                        Logs[path].Add(UpdatedData[nIndex]);

                    return true;
                }
            }
            catch {}

            return false;
        }

        public void Delete(string path)
        {
            Logs.Remove(path);
        }
    }
}
