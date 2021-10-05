#include <iostream>
using namespace std;
namespace first
{
int add(int a, int b)
{
return a+b;
}
}
namespace second
{
float add(float a, float b)
{
return a+b;
}
}
int  main()
{
 cout<<"add of integer number is: "<<add(32,41)<<endl;
 cout<<"Add of float number is : "<<add(14.2,12.3)<<endl;
 }
