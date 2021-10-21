
// 8.4 Task: Find factorial of a number using function but not recurssion
#include <iostream>
using namespace std;
int factorial(int n)
{
int f=1;
for(int i=1; i<=n; i++)
{
f*=i;
}
return f;
}
int main()
{
int n; 
cout<<"Enter the number which do you want to find factorial"<<endl;
cin>>n; 
cout<<"Factorial is " <<factorial(n)<<endl;
}