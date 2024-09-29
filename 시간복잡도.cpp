#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int N;

	cin >> N;

	// N!을 소인수분해했을 때의 5의 개수를 세어줘야 한다.
	int ct = 0;
	while (N) ct += N /= 5;

	cout << ct;

	return 0;
}
