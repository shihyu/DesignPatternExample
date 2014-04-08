#include "ConfigManager.h"

namespace cn {
namespace javass {
namespace dp {
namespace facade {
namespace example1 {

ConfigManager::ConfigManager() {

}

ConfigManager *ConfigManager::getInstance() {
    if (manager == 0) {
        manager = new ConfigManager();
        cm = new ConfigModel();
        //读取配置文件，把值设置到ConfigModel中去
    }

    return manager;
}

ConfigModel *ConfigManager::getConfigData() {
    return cm;
}
}
}
}
}
}
