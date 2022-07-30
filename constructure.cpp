#include<iostream>
using namespace std;
class A{
    int a,b;
public:
A(){
cout<<"Contructor Input values of a andf b"<<endl;
cin>>a>>b;
}//constructor with no arguments is called default or empty constructor
void display()
{
    cout<<"Values of a and b "<<a<<" "<<b<<endl;
}
};
int main()
{
A ob,ob1;
ob.display();ob1.display();
}