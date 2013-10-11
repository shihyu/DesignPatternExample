#include "BridgeMain.h"

namespace brige {

    void BridgeMain::main(std::string args[]) {
        Mobile* nokia = new NokiaMobile("Nokia");
        MobileSoft* game = new MobileGame();
        nokia->setSoft(game);
        nokia->run();
        Mobile* moto = new MotoMible("Moto");
        MobileSoft* mp3 = new MobileMp3();
        moto->setSoft(mp3);
        moto->run();
    }
}