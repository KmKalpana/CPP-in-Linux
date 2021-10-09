//Task3: Make a reverse of a string using reverse method and reverse_iterator of string class? 
#include <iostream>
#include <string>
using namespace std;

int main()
{
  	string Str1;
  
   int	i = 0;
 	
  	printf("\n Please Enter the String :  ");
  	getline(cin,Str1);
        reverse(Str1);
      cout<<"Reverse String is: "<<Str1<<endl;
  	
  	return 0;
}