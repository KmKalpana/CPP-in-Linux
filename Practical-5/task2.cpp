#include <iostream>
using namespace std;
int main()
{
char a='b';
int b=4;
double c=4523;
float d=5.4;
short e=43;
long f=354454;
long double g=45465624;
bool h=true;
wchar_t i=L'A';
cout<<"sizeof char is : "<< sizeof(char )<<endl;
cout<<"sizeof a is: "<<sizeof(a)<<endl;
cout<<"sizeof int is : "<< sizeof(int)<<endl;
cout<<"sizeof b is: "<<sizeof(b)<<endl;
cout<<"sizeof double is : "<< sizeof(double)<<endl;
cout<<"sizeof c is: "<<sizeof(c)<<endl;
cout<<"sizeof float is : "<< sizeof(float)<<endl;
cout<<"sizeof d is: "<<sizeof(d)<<endl;
cout<<"sizeof short is : "<< sizeof(short)<<endl;
cout<<"sizeof e is: "<<sizeof(e)<<endl;
cout<<"sizeof long is : "<< sizeof(long)<<endl;
cout<<"sizeof f is: "<<sizeof(f)<<endl;
cout<<"sizeof long is : "<< sizeof(long)<<endl;
cout<<"sizeof g is: "<<sizeof(g)<<endl;
cout<<"sizeof long double is : "<< sizeof(long double)<<endl;
cout<<"sizeof bool is : "<< sizeof(bool)<<endl;
cout<<"sizeof h is : "<<sizeof(h)<<endl;


cout<<"sizeof wchar_t is : "<< sizeof(wchar_t)<<endl;
  
cout<<"sizeof i is: "<<sizeof(i)<<endl;
 }