#include<iostream>
using namespace std;
struct student{
    char name[100];
    int roll;
    float marks;
    void setStudentData()
    {
          cout<<"Enter name"<<endl;
          cin>>name;
          cout<<"Enter roll no."<<endl;
          cin>>roll;
          cout<<"Enter marks"<<endl;
          cin>>marks; 
    };
    void getStudentData()
    {
          cout<<"Name:"<<name<<endl;          
          cout<<"Roll no.:"<<roll<<endl;
          cout<<"Marks:"<<marks<<endl;     
    };
};
int main()
{
student s[3];
for(int i=0;i<3;i++)
{
    s[i].setStudentData();
}
for(int i=0;i<3;i++)
{
    s[i].getStudentData();
}
student temp;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(s[j].marks>s[j+1].marks)
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
for(int i=0;i<3;i++)
{
    cout<<"Name:"<<s[i].name<<endl;
    cout<<"Roll No.:"<<s[i].roll<<endl;
    cout<<"Marks:"<<s[i].marks<<endl;
}
}
