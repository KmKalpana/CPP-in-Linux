//Task-4:How to resolve the problem of task-3? [Hint: by using, getline(cin, line);]
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
