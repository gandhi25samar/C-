#include<iostream>
using namespace std;
class Car
{char model_no[20];
char company_name[50];
int manufacturer_serial_no;
int manufacturing_year;
float cost;
static int price;
public:
Car(char a1[20],char b1[50],int d1,int e1,float f1)
{
a1=model_no;
b1=company_name;
d1=manufacturer_serial_no;
e1=manufacturing_year;
f1=cost;
}
Car(Car & c5){
    model_no=c5.model_no;
    company_name=c5.company_name;
    manufacturer_serial_no=c5.manufacturer_serial_no;
    manufacturing_year=c5.manufacturing_year;
    cost=c5.cost;
}
void setdata()
{
    
}
};