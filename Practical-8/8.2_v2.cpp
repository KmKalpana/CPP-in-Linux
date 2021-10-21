/*
   Task 2 : V2
*/



#include<iostream>
using namespace std;
int main()
{
   int arr[]={10,20,30};
   int *p;
   p=&arr;
   cout<<*p<<endl;
   p++;
   cout<<*p;
   return 0;
}
/*  Output gives ERROR!!    Since 'arr' is in itself holding base address of the array. That is , 'arr' acts as a constant pointer pointing to the first element of the array.Thus, when we write p=&arr, we assign the 			   address of 'arr' to 'p', in place of assigning the address of first element of array to 'p'.
                           So, to avoid this replace line 7 as ==>          p = arr;
*/