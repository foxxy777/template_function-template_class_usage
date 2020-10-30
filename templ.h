#pragma once
#include <iostream>
using namespace std;

template <typename T> //typename ��˼����ȫ���� class,�Ժ�ͳһ��tpyename����ʾ����Ϊģ���class
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

//template <typename T , string s> //���string���Ͳ�����Ϊ������ģ����
template <typename T1 ,  typename T2 = string>
class templ_with_stringtype
{
    //ps:������Ȩ�޾���private����
    T1 t1;
    T2 t2;
public:
    templ_with_stringtype(T1 t1,T2 t2) {
        this->t1 = t1;
        this->t2 = t2;
    };
    void print_templ() { cout<<sizeof(t1)<<t2<<endl; }

};



