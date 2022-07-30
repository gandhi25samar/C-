#include<iostream>
using namespace std;
class multiply
{ 
int a[2][2];int b[2][2];int c[2][2];
public:
multiply()
{
    cout<<"Enter the first array"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the second array"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>b[i][j];
        }
    }
}
void product()
{ for(int i=0;i<2;i++)
  { 
    for(int j=0;j<2;j++)
     { c[i][j]=0;
          for(int k=0;k<2;k++)
          {
              c[i][j]+=a[i][k]*b[k][j];
          }
     }
  }

}
void output()
{
cout<<"Product of the arrays is"<<endl;
for(int i=0;i<2;i++)
 {
     for(int j=0;j<2;j++)
     {
        cout<<c[i][j]<<" "; 
     }
     cout<<"\n";
 }
}
};
int main()
{
 multiply ob;
 ob.product();ob.output();
}