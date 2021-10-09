 //Task4: String Compare: Check if the strings are equal or not? 
#include <iostream>
#include <string>
using namespace std;

int main()
{
  	string Str1, Str2;
  
   int	i = 0;
 	
  	printf("\n Please Enter the First String :  ");
  	getline(cin,Str1);
  	
  	printf("\n Please Enter the Second String :  ");
  	getline(cin,Str2);
  	  
  	for(int j=0; Str1[j]!='\0'; j++)
      {
          if(Str1[j]==Str2[j])
          {
              ++i;
          }
        
      }
  	if(i==Str1.length() && i==Str2.size())
   	{ 
   	  cout<<"String are Equal"<<endl;	
	}
	else{
        cout<<"String are not equal"<<endl;
    }
  	
  	return 0;
}