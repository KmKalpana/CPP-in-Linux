#include<iostream>
#include<ctime>
using namespace std;
int main()
{
int d,m,y;
char c;
cout<<"enter d for date"<<endl<<"enter m for month"<<endl<<"enter y for year"<<endl<<"enter z to quit"<<endl;
cin>>c;

time_t now = time(0);
tm *ltm = localtime(&now);
switch(c)
{

case 'd':
         
           cout << "Day: "<< ltm->tm_mday << endl;
             break;
             
 case 'm':
 
            cout << "Month: "<< 1 + ltm->tm_mon<< endl;
            break;
            
case 'y':
         
         cout << "Year:" << 1900 + ltm->tm_year<<endl;
         break;
         
 }
 }
