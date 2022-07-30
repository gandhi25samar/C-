#include<iostream>
using namespace std;
class A
{    public:
    int a;
    void change(int x)
    {
        a=x;
    }
    void show(){cout<<a;}
};
class B{
    int a;
    public:
    B()
    {a=15;}
 void display(){cout<<a;}
};
class C:public B{
 int a;
 public:
 C()
 {
     a=20;
 }
 void output(){cout<<a;}
};
int main()
{
    C ob1;
    ob1.change(10);
    ob1.output();
    ob1.display();
    ob1.show();
}