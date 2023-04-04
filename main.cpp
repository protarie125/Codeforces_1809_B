#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;

constexpr auto maxRange = ll{ 1'000'000'000LL };

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		ll n;
		cin >> n;

		auto l = ll{ 0 };
		auto r = maxRange;
		auto m = (l + r) / 2;
		do {
			const auto& m2 = m * m;

			if (m2 < n) {
				l = m;
			}
			else {
				r = m;
			}

			const auto& next = (l + r) / 2;
			if (m == next) {
				break;
			}

			m = next;
		} while (true);

		cout << m << '\n';
	}

	return 0;
}