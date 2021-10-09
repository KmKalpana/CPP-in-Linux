//
#include<iostream>  
#include <string>
using namespace std;  
int main()  
{  
   string str1="C++ plus plus";  
   string str2="program";  
    int k= str1.compare(str2);  
    if(k==0)  
         cout<<"Both the strings are equal";  
     else if(k>0)
     {
     cout<<"difference is :"<<k<<endl;
       cout<<"str2 is greater than str1";  
  }
  else
  { cout<<"difference is :"<<k<<endl;
     cout<<"Str1 is lesser than str2";
   } 
}  
