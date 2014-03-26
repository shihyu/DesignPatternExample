using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace 商場管理軟體
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        //宣告一個double變數total來計算總計
        double total = 0.0d;
        private void btnOk_Click(object sender, EventArgs e)
        {
            //宣告一個double變數totalPrices來計算每個商品的單價（txtPrice）*數量(txtNum)後的合計
            double totalPrices=Convert.ToDouble(txtPrice.Text) * Convert.ToDouble(txtNum.Text);
            //將每個商品合計計入總計
            total = total + totalPrices;
            //在列表框中顯示資訊
            lbxList.Items.Add("單價："+txtPrice.Text+" 數量："+txtNum.Text+" 合計："+totalPrices.ToString());
            //在lblResult標籤上顯示總計數
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
