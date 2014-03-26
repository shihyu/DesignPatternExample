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

        //用戶端表單程式（主要部分）
        double total = 0.0d;
        private void btnOk_Click(object sender, EventArgs e)
        {
            //利用簡單工廠模式根據下拉選擇框，生成相應的物件
            CashContext csuper = new CashContext(cbxType.SelectedItem.ToString());
            double totalPrices = 0d;
            //透過多型，可以得到收取費用的結果
            totalPrices = csuper.GetResult(Convert.ToDouble(txtPrice.Text) * Convert.ToDouble(txtNum.Text));
            total = total + totalPrices;
            lbxList.Items.Add("單價：" + txtPrice.Text + " 數量：" + txtNum.Text + " "
                + cbxType.SelectedItem + " 合計：" + totalPrices.ToString());
            lblResult.Text = total.ToString();
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            total = 0d;
            txtPrice.Text = "0.00";
            txtNum.Text = "0";
            lbxList.Items.Clear();
            lblResult.Text = "0.00";
        }
    }
}
