#include <iostream>
using namespace std;
int main() {
	char ch[10];
	cout << "Enter any string: ";
//	getline(cin,ch);
      cin.getline(ch,10);
	cout<<ch<<endl;
	return 0;
}
