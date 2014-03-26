using System;
using System.Collections.Generic;
using System.Text;

namespace 動物練習
{
    class Cat : Animal
    {

        public Cat()
            : base()
        { }

        public Cat(string name):base(name)
        {
        }

        protected override string getShoutSound()
        {
            return "喵";
        }
    }
}
