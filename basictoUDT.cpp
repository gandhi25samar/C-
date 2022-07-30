#include<iostream>
using namespace std;
class A{
    float c;
    public :
    A(){c=0;}
    A(float f){c=(f-32)*5/9;}
    void show()
    {
        cout<<"Celsius: "<<c<<endl;
    }
};
int main()
{
    A value(50);
    float f;
    cout<<"Fahrenheit: ";cin>>f;
    value=f;//conversion
    value.show();
}