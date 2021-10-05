/*add(int,int), add(float, float), both of these methods are in two different namespaces First and Second respectively.
Task1: Access these methods using scope resolution operator [::](SRO) from main method?*/
#include <iostream>
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
 std::cout<<"add of integer number is: "<<first::add(3,4)<<std::endl;
 std::cout<<"Add of float number is : "<<second::add(4.2,5.3)<<std::endl;
 }
