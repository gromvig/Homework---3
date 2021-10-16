#include<iostream>
using namespace std;
void procedure(int N, int M, int* sum) {
	if (N / 10 > 0) {
		procedure(N / 10, ++M, sum);
		M--;
	}
	*sum += N % 10 * pow(2, M);
}
int main() {
	setlocale(LC_ALL, "Rus");
	cout << " Введите двоичное число:";
	int N;
	int sum = 0;
	cin >> N;
	procedure(N, 0, &sum);
	cout << sum;
	return(0);
}