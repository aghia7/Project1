#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}

	return true;
}

int main() {
	int x = 7, y = 10;
	bool flag = x > 5 && (y < 9 || y == 10);

	double sum = 21231231.15647984956151849;
	cout << setprecision(16) << sum << endl;
	return 0;
}