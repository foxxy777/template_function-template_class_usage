#pragma once
#include <iostream>
using namespace std;

template <typename T> //typename 意思上完全等于 class,以后统一用tpyename来表示被设为模板的class
void print(T a)
{
    cout << sizeof(a) << endl;
}


template <typename T > 
class A
{
private:
    T a;
public:
    A(T a_in) { a = a_in;}
    void printa() { cout << sizeof(a) << endl; }
    void print(T a1) { cout << a1 << endl; }
    template<typename TYPE >
    void printb(TYPE type) { cout << sizeof(type) << endl; }

};

//template <typename T , string s> //奇妙，string类型不能作为非类型模板类
template <typename T1 ,  typename T2 = string>
class templ_with_stringtype
{
    //ps:不声明权限就是private类型
    T1 t1;
    T2 t2;
public:
    templ_with_stringtype(T1 t1,T2 t2) {
        this->t1 = t1;
        this->t2 = t2;
    };
    void print_templ() { cout<<sizeof(t1)<<t2<<endl; }

};



