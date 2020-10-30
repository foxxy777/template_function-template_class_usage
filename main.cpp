#include "templ.h"

int main()
{
    //调用普通模板函数
    print<int>(3);
    //调用普通模板类
    double num = 3;
    A<double> a(num);
    a.printa();
    double num1 = 7;
    a.print(num1);
    //调用模板类里的模板函数
    a.printb<double>(num1);
    //所谓非类型模板类太麻烦了，就用设置默认参数的模板来来替代吧
    int num3  = 233;
    templ_with_stringtype<int> templ(num3,"abc");
    templ.print_templ();

    return 0;
}