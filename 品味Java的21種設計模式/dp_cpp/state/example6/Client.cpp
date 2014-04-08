#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example6 {

void Client::main(std::string args[]) {
    TestDB::map->put("a", "11");
    puts(TestDB::map->size());

    try {
        delay(100000L);
    } catch (InterruptedException *e) {
        // TODO Auto-generated catch block
        e->printStackTrace();
    }

    puts("over");
}
}
}
}
}
}
