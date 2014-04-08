#pragma once

#include "ReadXmlExpression.h"
#include "ParserModel.h"
#include "ElementExpression.h"
#include "ElementsExpression.h"
#include "PropertyTerminalExpression.h"
#include "PropertysTerminalExpression.h"
#include "ElementTerminalExpression.h"
#include "ElementsTerminalExpression.h"
#include <string>
#include <map>
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace interpreter {
namespace example5 {

///
/// <summary> * 根据语法来解析表达式，转换成为相应的抽象语法树 </summary>
///
class Parser {
    ///
    ///  <summary> * 私有化构造器，避免外部无谓的创建对象实例 </summary>
    ///
private:
    Parser();
    //定义几个常量，内部使用
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static const std::string BACKLASH = "/";
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static const std::string DOT = ".";
    //JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
    static const std::string DOLLAR = "$";
    ///
    ///  <summary> * 按照分解的先后记录需要解析的元素的名称 </summary>
    ///
    static std::vector<std::string> listEle;
    ///
    ///  <summary> * 传入一个字符串表达式，通过解析，组合成为一个抽象的语法树 </summary>
    ///  * <param name="expr"> 描述要取值的字符串表达式 </param>
    ///  * <returns> 对应的抽象语法树 </returns>
    ///
public:
    static ReadXmlExpression *parse(std::string expr);


    /*----------------------开始实现第一步-----------------------*/
    ///
    ///  <summary> * 按照从左到右顺序来分解表达式，得到需要解析的元素名称，
    ///  * 还有该元素对应的解析模型 </summary>
    ///  * <param name="expr"> 需要分解的表达式 </param>
    ///  * <returns> 得到需要解析的元素名称，还有该元素对应的解析模型 </returns>
    ///
private:
    static Map<std::string, ParserModel *> *parseMapPath(std::string expr);
    ///
    ///  <summary> * 按照分解出来的位置和名称来设置需要解析的元素名称，
    ///  * 还有该元素对应的解析模型 </summary>
    ///  * <param name="end"> 是否是最后一个 </param>
    ///  * <param name="ele"> 元素名称 </param>
    ///  * <param name="propertyValue"> 是否是取属性 </param>
    ///  * <param name="mapPath"> 设置需要解析的元素名称，还有该元素对应的解析模型的Map对象 </param>
    ///
    static void setParsePath(bool end, std::string ele, bool propertyValue, Map<std::string, ParserModel *> *mapPath);
    /*----------------------第一步实现结束-----------------------*/

    /*----------------------开始实现第二步-----------------------*/
    ///
    ///  <summary> * 把分解出来的元素名称，根据对应的解析模型转换成为相应的解释器对象 </summary>
    ///  * <param name="mapPath"> 分解出来的需要解析的元素名称，还有该元素对应的解析模型 </param>
    ///  * <returns> 把每个元素转换成为相应的解释器对象后的集合 </returns>
    ///
    static std::vector<ReadXmlExpression *> mapPath2Interpreter(Map<std::string, ParserModel *> *mapPath);
    /*----------------------第二步实现结束-----------------------*/

    /*----------------------开始实现第三步-----------------------*/
    static ReadXmlExpression *buildTree(std::vector<ReadXmlExpression *> &list);
    /*----------------------第三步实现结束-----------------------*/
};

}
}
}
}
}