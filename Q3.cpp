#include<iostream>
    namespace a{
        int a1=9;
    }
     namespace b{
         int b1=10;
     }
int main()
{
  std::cout<<a::a1<<std::endl;
  std::cout<<b::b1;
}