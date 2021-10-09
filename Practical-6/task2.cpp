#include <iostream>
using namespace std;
#include <string>
 bool isPalindrome(string s) 
    {
        int count=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==s[s.length()-1-i])
            {
                ++count;
            }
        }
        if(count==s.length())
        {
            return true;
        }
        else 
            return false;
    }
int main()
{
    string st="aba";
    if(isPalindrome(st)==1)
    {
  cout<<"Given String is palindrome."<<endl;
    }
    else
    {
        cout<<"Given string is not Palindrome."<<endl;
    }

}
