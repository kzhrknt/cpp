#include <iostream>
using namespace std;

void jHello() {
	cout << "Hello!" << endl;
}

int main() {
	jHello();
	int x;
	string name;
	cout << "Input your age:";
	cin >> x;
	cout << "input Your name:";
	cin >> name;
	cout << name << "'s age is " << x << ",right?" << endl;
}

