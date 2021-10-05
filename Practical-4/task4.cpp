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
 cout<<"add of integer number is: "<<first::add(32,4.1)<<endl;
 cout<<"Add of float number is : "<<second::add(14,12.3)<<endl;
 }
