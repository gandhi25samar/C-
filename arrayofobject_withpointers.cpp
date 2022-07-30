#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    int marks;
    void display()
    {
        cout<<"Hello World";
    }
};
int main()
{
    student *ob=new student[6];
    for(int i=0;i<6;i++)
    {
        // cin>>ob[i].marks;
        cin>>(ob+i)->marks;
        cin>>(ob+i)->roll;
        // cin>>ob[i].roll;
    }
    for(int i=0;i<6;i++)
    {
        cout<<ob[i].marks<<" ";
        cout<<ob[i].roll<<endl;
    }
    ob[1].display();
    }
//one object in program;

// #include<iostream>
// using namespace std;
// class student{
//     public:
//     int roll;
//     int marks;
//     void display()
//     {
//         cout<<"Hello World";
//     }
// };
// int main()
// {
//     student *ob,ob1;ob=&ob1;
//     ob->roll=90;
//     cout<<ob->roll;  //output is 90
// }