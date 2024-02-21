#include <iostream>
using namespace std;

void change(int number){
	number *= 2;
}

int main() {
	int num = 15;

	cout << "Before";
	change(num);

	cout << num << endl;
	cout << "After";

	cout << num << endl;

	return 0;
}