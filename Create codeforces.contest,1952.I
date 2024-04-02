#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	string s;
	cin >> a >> s >> b;
	cout << a + b + (a * a + b * b) + (a - b) + abs(a) * 2 * b - (a * b + 2);
	return 0;
}
