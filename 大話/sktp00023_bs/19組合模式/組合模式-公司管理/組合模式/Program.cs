using System;
using System.Collections.Generic;
using System.Text;

namespace 組合模式
{
    class Program
    {
        static void Main(string[] args)
        {
            ConcreteCompany root = new ConcreteCompany("北京總公司");
            root.Add(new HRDepartment("總公司人力資源部"));
            root.Add(new FinanceDepartment("總公司財務部"));

            ConcreteCompany comp = new ConcreteCompany("上海華東分公司");
            comp.Add(new HRDepartment("華東分公司人力資源部"));
            comp.Add(new FinanceDepartment("華東分公司財務部"));
            root.Add(comp);

            ConcreteCompany comp1 = new ConcreteCompany("南京辦事處");
            comp1.Add(new HRDepartment("南京辦事處人力資源部"));
            comp1.Add(new FinanceDepartment("南京辦事處財務部"));
            comp.Add(comp1);

            ConcreteCompany comp2 = new ConcreteCompany("杭州辦事處");
            comp2.Add(new HRDepartment("杭州辦事處人力資源部"));
            comp2.Add(new FinanceDepartment("杭州辦事處財務部"));
            comp.Add(comp2);


            Console.WriteLine("\n結構圖：");

            root.Display(1);

            Console.WriteLine("\n職責：");

            root.LineOfDuty();


            Console.Read();
        }
    }

    abstract class Company
    {
        protected string name;

        public Company(string name)
        {
            this.name = name;
        }

        public abstract void Add(Company c);//增加
        public abstract void Remove(Company c);//移除
        public abstract void Display(int depth);//顯示
        public abstract void LineOfDuty();//履行職責

    }

    class ConcreteCompany : Company
    {
        private List<Company> children = new List<Company>();

        public ConcreteCompany(string name)
            : base(name)
        { }

        public override void Add(Company c)
        {
            children.Add(c);
        }

        public override void Remove(Company c)
        {
            children.Remove(c);
        }

        public override void Display(int depth)
        {
            Console.WriteLine(new String('-', depth) + name);

            foreach (Company component in children)
            {
                component.Display(depth + 2);
            }
        }

        //履行職責
        public override void LineOfDuty()
        {
            foreach (Company component in children)
            {
                component.LineOfDuty();
            }
        }

    }

    //人力資源部
    class HRDepartment : Company
    {
        public HRDepartment(string name)
            : base(name)
        { }

        public override void Add(Company c)
        {
        }

        public override void Remove(Company c)
        {
        }

        public override void Display(int depth)
        {
            Console.WriteLine(new String('-', depth) + name);
        }


        public override void LineOfDuty()
        {
            Console.WriteLine("{0} 員工招聘培訓管理", name);
        }
    }

    //財務部
    class FinanceDepartment : Company
    {
        public FinanceDepartment(string name)
            : base(name)
        { }

        public override void Add(Company c)
        {
        }

        public override void Remove(Company c)
        {
        }

        public override void Display(int depth)
        {
            Console.WriteLine(new String('-', depth) + name);
        }

        public override void LineOfDuty()
        {
            Console.WriteLine("{0} 公司財務收支管理", name);
        }

    }
}
