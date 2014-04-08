#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example5 {

void Client::main(std::string args[]) throw(Exception) {
    //流式输出文件
    DataOutputStream *dout = new DataOutputStream(new EncryptOutputStream(new BufferedOutputStream(new FileOutputStream("MyEncrypt.txt"))));
    //然后就可以输出内容了
    dout->write((new std::string("abcdxyz"))->getBytes());
    dout->close();
}
}
}
}
}
}
