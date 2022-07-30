#include<iostream>
using namespace std;
int main()
{
    // int *p,r=5;
    // p=&r;
    // p=new int(6);
    // cout<<*p<<endl;//output 6
    // delete p;//free the memory
    // cout<<*p;//value can't be predicted
    
    // int p[5]={1,2,3,4,5};
    // cout<<*(p+1)<<endl;//output 2
    
    int *p;
    p=new int[6];
    for(int i=0;i<6;i++)
    cin>>p[i];
    cout<<"Nos. before delete operator"<<endl;
    for(int i=0;i<6;i++)
    cout<<p[i]<<endl;
    delete []p;
    cout<<"Nos. after delete operator"<<endl;
    for(int i=0;i<6;i++)
    cout<<p[i]<<endl;
}