// #include<iostream>
// using namespace std;
// class A{
//     int a;
//     public:
//     A(int x=0)
//     {
//        a=x;
//     }
//     void operator==(A &ob3)
//     {
//         a=a+2;
//     }
//     void show()
//     {
//         cout<<a;
//     }
// };
// int main()
// {
//     A ob(5),ob1;
//     ob==ob1;
//     ob.show();
// }

// #include<iostream>
// using namespace std;
// class A{
//     int a;
//     public:
//     A(int x=0)
//     {
//        a=x;
//     }
//     int operator==(A &ob3)
//     {
//         if(a>=4&&a<=10)
//         {
//             cout<<a;
//         }
//         else cout<<"Chutiya"<<endl;
//     }
// };
// int main()
// {
//     A ob(11),ob1;
//     ob==ob1;
// }

// #include<iostream>
// using namespace std;
// class A{
//     int a;
//     public:
//     A(int x=0)
//     {
//        a=x;
//     }
//     int operator&&(A &ob3)
//     {
//         if(a>=4&&a<=10)
//         {
//             cout<<a;
//         }
//         else cout<<"Chutiya"<<endl;
//     }
// };
// int main()
// {
//     A ob(11),ob1;
//     ob&&ob1;
// }

#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(int x=0)
    {
       a=x;
    }
    void operator&(A &ob3)
    {
        cout<<(a&4);
    }
};
int main()
{
    A ob(11),ob1;
    ob&ob1;
}