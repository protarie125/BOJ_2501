#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	auto dCount = 0;
	auto d = 1;
	while (dCount < k) {
		if (0 == n % d) {
			dCount += 1;
			if (dCount == k) {
				break;
			}
		}

		d += 1;

		if (n < d) {
			cout << 0;
			return 0;
		}
	}

	cout << d;

	return 0;
}