// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     virtual void show()=0;
// };
// class B:public A
// {
//     public:
//     void show(){cout<<"hello\n";}
// };
// int main()
// {
//     A *ob=new B;
//     ob->show();//output is error   if we add virtual then output is hello
// }

#include<iostream>
using namespace std;
class A{
    public :
   virtual void show()=0;
};
void A::show()
{
    cout<<"Pure virtual fn\n";
}
class B:public A
{
    public:
    void show()
    {
        cout<<"hello\n";
    }
};
int main()
{
    A *ob=new B; 
    ob->A::show();//without A:: output is hello
}