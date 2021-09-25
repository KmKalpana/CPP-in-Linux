#include <iostream>
using namespace std;
void prime(int num)
{
int count=0;
for(int i=2; i<=num/2; i++)
{
 if(num%i==0)
 {
 count++;
 break;
 }
}
if(count==1)
{
cout<<"Given Number is not prime Number"<<endl;
}
else 
cout<<"Given Number is a prime Number"<<endl;
}
int main()
{
int num;
cin>>num;
prime(num);

}