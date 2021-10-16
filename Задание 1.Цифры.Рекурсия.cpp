#include <iostream>
using namespace std;
void Function(int N) {
	if (N/10 > 0) {
		Function(N/10);
	}
	printf("%d ",  N % 10);
}
int main() {
	int N;
	cin >> N;
	Function(N);
	return(0);
}