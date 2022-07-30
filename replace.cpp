#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("Samarjeet.txt");//making the file
    {
        fout<<"Curiosity is a cow of courage";
        fout.close();
    }
    fstream fin("Samarjeet.txt",ios::in|ios::out);//reading the file
    {
       char ch;
       fin.get(ch);      
        while(!fin.eof())
       {   
          if(ch=='c')
          cout<<'w';
          else if (ch=='C')
          cout<<'W';
          else
          cout<<ch;
          fin.get(ch);
       }
        fin.close();
    }
    return 0;
}