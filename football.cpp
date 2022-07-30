#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d;
	for(int i=1;i<=t;i++)
	{
	    cin>>a>>b;
        cin>>c>>d;
	    if((c>=a)&&(d>=b))
	    {cout<<"possible"<<endl;}
	    else
	    {cout<<"impossible"<<endl;}
	}
	return 0;
}