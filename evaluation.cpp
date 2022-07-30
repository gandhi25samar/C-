#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("Samarjeet.txt");//making the file
    {
        fout<<"My Name is Samarjeet Singh Gandhi of Thapar Institute of Engineering and Technology";
        fout.close();
    }
    ifstream fin("Samarjeet.txt");//reading the file
    {
        int count=0;char ch;
        while(!fin.eof())
       {   
          fin.get(ch);
          if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')//checking the vowel
          count++;//increasing the count if vowel found
       }
        cout<<count;//displaying the number of vowels
        fin.close();
    }
    return 0;
}