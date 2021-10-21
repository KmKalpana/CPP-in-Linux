
/*
       Task 3 : Changing value of variable by using double pointer 
  
*/


#include<iostream>
using namespace std;
int main()
{
int a=10;
int *p=&a;
int **q=&p;
cout<<"a = "<<a<<endl;
cout<<"Changing value of 'a' by double pointer..\n";  
**q=20;
cout<<"a = "<<**q<<endl;
return 0;
}