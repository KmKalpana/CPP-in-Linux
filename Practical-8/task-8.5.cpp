//8.5 Task: Find factorial of a number using recurssion.
#include <iostream>
using namespace std;
int factorial(int n)
{
if(n==1)
{
return 1;
}
else
{
return n*factorial(n-1);
}
}
int main()
{
int n; 
cout<<"Enter the number which do you want to find factorial"<<endl;
cin>>n; 
cout<<"Factorial is " <<factorial(n)<<endl;
}