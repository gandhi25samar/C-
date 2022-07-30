#include<iostream>
using namespace std;
template<class T>
T sum(T a,T b)
{
    return a+b;
}
int main()
{
    float d=sum(2.5,3.152);
    int r=sum(7,12);
    cout<<d<<endl<<r;
}