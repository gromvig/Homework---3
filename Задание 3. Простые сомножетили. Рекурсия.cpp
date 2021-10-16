#include <iostream>
#include <string>
using namespace std;
string Function(int* N, int i) {
	string s = "";
	if (*N % i == 0) {
		*N = *N / i;
		s = Function(N, i);
		s +=  to_string(i) +" ";
	}
	return (s);
}
int main() {
	setlocale(LC_ALL, "Rus");
	int N;
	cout << "Введите число > 0:\n";
	cin >> N;
	if (N == 1) {
		cout << 1;
		return(0);
	}
	int a = N;
	for (int i = 2; i <= a; i++) {
		cout << Function(&N, i);
	}
	return(0);
}