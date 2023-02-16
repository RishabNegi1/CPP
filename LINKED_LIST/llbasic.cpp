#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int *p=&a;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<&a<<endl;
    int **pp=&p;
    cout<<pp<<endl;
    cout<<**pp<<endl;
}