#include "XmlUtil.h"

namespace cn {
namespace javass {
namespace dp {
namespace interpreter {
namespace example5 {
using javax::xml::parsers::DocumentBuilder;
using javax::xml::parsers::DocumentBuilderFactory;
using org::w3c::dom::Document;

Document *XmlUtil::getRoot(std::string filePathName) throw(Exception) {
    Document *doc = 0;
    //建立一个解析器工厂
    DocumentBuilderFactory *factory = DocumentBuilderFactory::newInstance();
    //获得一个DocumentBuilder对象，这个对象代表了具体的DOM解析器
    DocumentBuilder *builder = factory->newDocumentBuilder();
    //得到一个表示XML文档的Document对象
    doc = builder->parse(filePathName);
    //去掉XML文档中作为格式化内容的空白而映射在DOM树中的不必要的Text Node对象
    doc->normalize();
    return doc;
}
}
}
}
}
}
