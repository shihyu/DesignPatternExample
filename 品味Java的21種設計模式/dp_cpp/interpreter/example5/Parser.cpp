#include "Parser.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example5
				{

					Parser::Parser()
					{
						//
					}

					ReadXmlExpression *Parser::parse(std::string expr)
					{
						//先初始化记录需解析的元素的名称的集会
						listEle = std::vector<std::string>();

						//第一步：分解表达式，得到需要解析的元素名称和该元素对应的解析模型
						Map<std::string, ParserModel*> *mapPath = parseMapPath(expr);

						//第二步：根据节点的属性转换成为相应的解释器对象
						std::vector<ReadXmlExpression*> list = mapPath2Interpreter(mapPath);

						//第三步：组合抽象语法树，一定要按照先后顺序来组合，
						//否则对象的包含关系就乱了
						ReadXmlExpression *returnRe = buildTree(list);

						return returnRe;
					}

					Map<std::string, ParserModel*> *Parser::parseMapPath(std::string expr)
					{
						//先按照/分割字符串
						StringTokenizer *tokenizer = new StringTokenizer(expr, BACKLASH);
						//初始化一个map用来存放分解出来的值
						Map<std::string, ParserModel*> *mapPath = std::map<std::string, ParserModel*>();
						while (tokenizer->hasMoreTokens())
						{
							std::string onePath = tokenizer->nextToken();
							if (tokenizer->hasMoreTokens())
							{
								//还有下一个值，说明这不是最后一个元素
								//按照现在的语法，属性必然在最后，因此也不是属性
								setParsePath(false,onePath,false,mapPath);
							}
							else
							{
								//说明到最后了
								int dotIndex = onePath.find(DOT);
								if (dotIndex > 0)
								{
									//说明是要获取属性的值，那就按照"."来分割，前面的就是元素名字，后面的是属性的名字
									std::string eleName = onePath.substr(0, dotIndex);
									std::string propName = onePath.substr(dotIndex + 1);
									//设置属性前面的那个元素，自然不是最后一个，也不是属性
									setParsePath(false,eleName,false,mapPath);
									//设置属性，按照现在的语法定义，属性只能是最后一个
									setParsePath(true,propName,true,mapPath);
								}
								else
								{
									//说明是取元素的值，而且是最后一个元素的值
									setParsePath(true,onePath,false,mapPath);
								}
								break;
							}
						}
						return mapPath;
					}

					void Parser::setParsePath(bool end, std::string ele, bool propertyValue, Map<std::string, ParserModel*> *mapPath)
					{
						ParserModel *pm = new ParserModel();
						pm->setEnd(end);
						//如果带有$符号就说明不是一个值
						pm->setSingleVlaue(!(ele.find(DOLLAR)>0));
						pm->setPropertyValue(propertyValue);
						//去掉$
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'replace' method:
						ele = ele.replace(DOLLAR, "");
						mapPath->put(ele,pm);
						listEle.push_back(ele);
					}

					std::vector<ReadXmlExpression*> Parser::mapPath2Interpreter(Map<std::string, ParserModel*> *mapPath)
					{
						std::vector<ReadXmlExpression*> list = std::vector<ReadXmlExpression*>();
						//一定要按照分解的先后顺序来转换成解释器对象
						for (std::vector<std::string>::const_iterator key = listEle.begin(); key != listEle.end(); ++key)
						{
							ParserModel *pm = mapPath->get(*key);
							ReadXmlExpression *obj = 0;
							if(!pm->isEnd())
							{
								if(pm->isSingleVlaue())
								{
									//不是最后一个，是一个值，转化为
									obj = new ElementExpression(*key);
								}
								else
								{
									//不是最后一个，是多个值，转化为
									obj = new ElementsExpression(*key);
								}
							}
							else
							{
								if(pm->isPropertyValue())
								{
									if(pm->isSingleVlaue())
									{
										//是最后一个，是一个值，取属性的值，转化为
										obj = new PropertyTerminalExpression(*key);
									}
									else
									{
										//是最后一个，是多个值，取属性的值，转化为
										obj = new PropertysTerminalExpression(*key);
									}
								}
								else
								{
									if(pm->isSingleVlaue())
									{
										//是最后一个，是一个值，取元素的值，转化为
										obj = new ElementTerminalExpression(*key);
									}
									else
									{
										//是最后一个，是多个值，取元素的值，转化为
										obj = new ElementsTerminalExpression(*key);
									}
								}
							}
							//把转换后的对象添加到集合中
							list.push_back(obj);
						}
						return list;
					}

					ReadXmlExpression *Parser::buildTree(std::vector<ReadXmlExpression*> &list)
					{
						//第一个对象，也是返回去的对象，就是抽象语法树的根
						ReadXmlExpression *returnRe = 0;
						//定义上一个对象
						ReadXmlExpression *preRe = 0;
						for (std::vector<ReadXmlExpression*>::const_iterator re = list.begin(); re != list.end(); ++re)
						{
							if(preRe==0)
							{
								//说明是第一个元素
								preRe = *re;
								returnRe = *re;
							}
							else
							{
								//把元素添加到上一个对象下面，同时把本对象设置成为oldRe，作为下一个对象的父结点
								if(dynamic_cast<ElementExpression*>(preRe) != 0)
								{
									ElementExpression *ele = static_cast<ElementExpression*>(preRe);
									ele->addEle(*re);
									preRe = *re;
								}
								else if(dynamic_cast<ElementsExpression*>(preRe) != 0)
								{
									ElementsExpression *eles = static_cast<ElementsExpression*>(preRe);
									eles->addEle(*re);
									preRe = *re;
								}
							}
						}
						return returnRe;
					}
				}
			}
		}
	}
}
