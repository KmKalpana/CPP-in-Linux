//Task-3: Take a char variable and use cin to take its value from the user, cout it and it will only return one character and loss rest of the data you have entered!
#include <iostream>
using namespace std;
int main() {
	char ch;
	cout << "Enter any character: ";
	cin >> ch;
	cout << "char is "<<ch<<endl;
	return 0;
}
