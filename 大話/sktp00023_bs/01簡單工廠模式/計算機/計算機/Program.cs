using System;
using System.Collections.Generic;
using System.Windows.Forms;

namespace 計算機
{
    static class Program
    {
        /// <summary>
        /// 應用程式的主入口點。
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Form1());
        }
    }
}
