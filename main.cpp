#include "templ.h"

int main()
{
    //������ͨģ�庯��
    print<int>(3);
    //������ͨģ����
    double num = 3;
    A<double> a(num);
    a.printa();
    double num1 = 7;
    a.print(num1);
    //����ģ�������ģ�庯��
    a.printb<double>(num1);
    //��ν������ģ����̫�鷳�ˣ���������Ĭ�ϲ�����ģ�����������
    int num3  = 233;
    templ_with_stringtype<int> templ(num3,"abc");
    templ.print_templ();

    return 0;
}