using System;
using System.Collections.Generic;
using System.Text;

namespace 動物練習
{
    class Sheep:Animal
    {
        public Sheep()
            : base()
        {
        }

        public Sheep(string name)
            : base(name)
        {
        }
        
        protected override string getShoutSound()
        {
            return "咩";
        }
        
    }
}
