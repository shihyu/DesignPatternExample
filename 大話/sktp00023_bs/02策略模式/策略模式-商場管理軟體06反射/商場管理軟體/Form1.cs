using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System.Reflection;

namespace 商場管理軟體
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        DataSet ds;//用於存放配置檔資訊
        double total = 0.0d;//用於總計

        private void Form1_Load(object sender, EventArgs e)
        {
            //讀設定檔
            ds = new DataSet();
            ds.ReadXml(Application.StartupPath + "\\CashAcceptType.xml");
            //將讀取到的記錄放到下拉清單框中
            foreach (DataRowView dr in ds.Tables[0].DefaultView)
            {
                cbxType.Items.Add(dr["name"].ToString());
            }
            cbxType.SelectedIndex = 0;
        }

        private void btnOk_Click(object sender, EventArgs e)
        {
            CashContext cc = new CashContext();
            //根據用戶的選項，查詢用戶選擇項的相關行
            DataRow dr = ((DataRow[])ds.Tables[0].Select("name='" + cbxType.SelectedItem.ToString()+"'"))[0];
            //聲明一個參數的物件陣列
            object[] args =null;
            //若有參數，則將其分割成字串陣列，用於實體化時所用的參數
            if (dr["para"].ToString() != "")
                args = dr["para"].ToString().Split(',');
            //透過反射實例化出相應的演算法物件
            cc.setBehavior((CashSuper)Assembly.Load("商場管理軟體").CreateInstance("商場管理軟體." + dr["class"].ToString(), false, BindingFlags.Default, null, args, null, null));
            
            double totalPrices = 0d;
            totalPrices = cc.GetResult(Convert.ToDouble(txtPrice.Text) * Convert.ToDouble(txtNum.Text));
            total = total + totalPrices;
            lbxList.Items.Add("單價：" + txtPrice.Text + " 數量：" + txtNum.Text + " "+cbxType.SelectedItem+ " 合計：" + totalPrices.ToString());
            lblResult.Text = total.ToString();
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            total = 0d;
            txtPrice.Text = "0.00";
            txtNum.Text = "1";
            lbxList.Items.Clear();
            lblResult.Text = "0.00";
        }

        
    }
}
