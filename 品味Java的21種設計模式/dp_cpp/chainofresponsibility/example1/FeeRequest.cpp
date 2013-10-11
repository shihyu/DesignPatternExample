#include "FeeRequest.h"
#include <iostream>
#include<sstream>



namespace cn {
    namespace javass {
        namespace dp {
            namespace chainofresponsibility {
                namespace example1 {
                    template <class T>
                    std::string ConvertToString(T);

                    std::string FeeRequest::requestToProjectManager(std::string user, double fee) {
                        std::string str = "";

                        if (fee < 500) {
                            //项目经理的权限比较小，只能在500以内
                            str = this->projectHandle(user, fee);
                        } else if (fee < 1000) {
                            //部门经理的权限只能在1000以内
                            str = this->depManagerHandle(user, fee);
                        } else if (fee >= 1000) {
                            //总经理的权限很大，只要请求到了这里，他都可以处理
                            str = this->generalManagerHandle(user, fee);
                        }

                        return str;
                    }

                    std::string FeeRequest::projectHandle(std::string user, double fee) {
                        std::string str = "";
                        std::string s;

                        //为了测试，简单点，只同意小李的
                        if ((new std::string("小李"))->compare(user)) {
                            s = ConvertToString(fee);
                            str = std::string("项目经理同意") + user + std::string("聚餐费用") + s + std::string("元的请求");
                        } else {
                            //其他人一律不同意
                            s = ConvertToString(fee);
                            str = "项目经理不同意" + user + "聚餐费用" + s + "元的请求";
                        }

                        return str;
                    }

                    std::string FeeRequest::depManagerHandle(std::string user, double fee) {
                        std::string str = "";
                        std::string s;

                        //为了测试，简单点，只同意小李申请的
                        if ((new std::string("小李"))->compare(user)) {
                            s = ConvertToString(fee);
                            str = "部门经理同意" + user + "聚餐费用" + s + "元的请求";
                        } else {
                            //其他人一律不同意
                            s = ConvertToString(fee);
                            str = "部门经理不同意" + user + "聚餐费用" + s + "元的请求";
                        }

                        return str;
                    }

                    std::string FeeRequest::generalManagerHandle(std::string user, double fee) {
                        std::string str = "";
                        std::string s;

                        //为了测试，简单点，只同意小李的
                        if ((new std::string("小李"))->compare(user)) {
                            s = ConvertToString(fee);
                            str = "总经理同意" + user + "聚餐费用" + s + "元的请求";
                        } else {
                            //其他人一律不同意
                            s = ConvertToString(fee);
                            str = "总经理不同意" + user + "聚餐费用" + s + "元的请求";
                        }

                        return str;
                    }
                    template <class T>
                    std::string ConvertToString(T value) {
                        std::stringstream ss;
                        ss << value;
                        return ss.str();
                    }
                }
            }
        }
    }
}
