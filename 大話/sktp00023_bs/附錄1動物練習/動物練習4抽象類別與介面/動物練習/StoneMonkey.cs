using System;
using System.Collections.Generic;
using System.Text;

namespace 動物練習
{
    class StoneMonkey:Monkey,IChange
    {
        public StoneMonkey()
            : base()
        { }
        public StoneMonkey(string name)
            : base(name)
        {
        }

        public string ChangeThing(string thing)
        {
            return base.Shout() + " 我會七十二變，可變出" + thing;
        }
    }
}
