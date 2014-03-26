using System;
using System.Collections.Generic;
using System.Text;

namespace 動物練習
{
    class Monkey:Animal
    {
        public Monkey()
            : base()
        { }

        public Monkey(string name)
            : base(name)
        {
        }

        protected override string getShoutSound()
        {
            return "吱";
        }
    }
}
