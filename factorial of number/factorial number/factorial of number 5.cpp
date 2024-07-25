#include<iostream>
using namespace std;
int f(int x);
int main() {
	int x;
	cout << "Enter an integer number:\n";
	cin >> x;
	int fact = f(x);
	cout << "Factorial of " << x << " is " << fact<<endl;
	return 0;
}
int f(int x) {
	int p = 1;
	for (int i = 1; i <= x; i++) {
		p *= i;
	}
	return p;
}