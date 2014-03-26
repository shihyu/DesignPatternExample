using System;
using System.Collections.Generic;
using System.Text;

namespace 動物練習
{
    class MachineCat:Cat,IChange
    {
        public MachineCat()
            : base()
        {
        }

        public MachineCat(string name)
            : base(name)
        {
        }

        public string ChangeThing(string thing)
        {
            return base.Shout() + " 我可變出：" + thing;
        }
    }
}
