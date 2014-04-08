#include "TestDB.h"

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example6 {

TestDB::TestDB() {
    Thread *t = new Thread(new MemoryDB());
    t->start();
}

void MemoryDB::run() {
    while (true) {
        //一直运行着
        try {
            delay(1000L);
        } catch (InterruptedException *e) {
            // TODO Auto-generated catch block
            e->printStackTrace();
        }
    }
}
}
}
}
}
}
