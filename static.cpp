#include <iostream>
using namespace std;
class x{
static int a;
public:
void output()
{
    cout<<"A="<<a<<endl;
}
};
int x::a=50;
int main()
{
    x ob;
    ob.output();
}
