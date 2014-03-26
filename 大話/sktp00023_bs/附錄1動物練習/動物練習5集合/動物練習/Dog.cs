using System;
using System.Collections.Generic;
using System.Text;

namespace 動物練習
{
    class Dog : Animal
    {
        public Dog()
            : base()
        { }

        public Dog(string name):base(name)
        {
        }

        protected override string getShoutSound()
        {
            return "汪";
        }
    }
}
