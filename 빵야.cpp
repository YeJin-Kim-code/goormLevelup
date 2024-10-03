#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAXN = 100'000;

int N, H[MAXN];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) cin >> H[i];

	ll ans = 0; // 정답은 int 범위를 벗어날 수 있다.
	int ct = 0; // 권총이 발사된 횟수

	for (int i = 0; i < N; i++){

		// 권총이 주는 피해가 1이 될 때까지 그리고 적의 체력이 남아있는 동안 권총을 발사한다.
		while (ct && H[i] > 0){
			H[i] -= ct + 1;
			ct = (ct + 1) % 4;
			++ans;
		}

		// 적이 쓰러졌다면 넘어간다.
		if (H[i] <= 0) continue;

		// 1,2,3,4 총 네 번의 발사가 반복되는 것을 한 번에 계산한다.
		ans += (H[i] / 10) * 4;
		H[i] %= 10;

		// 적이 쓰러지지 않았다면 체력은 10 미만이므로, 적의 체력이 남아있는 동안 권총을 발사한다.
		while (H[i] > 0){
			H[i] -= ct + 1;
			ct = (ct + 1) % 4;
			++ans;
		}
	}

	cout << ans;
}
