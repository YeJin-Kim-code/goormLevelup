#include <bits/stdc++.h>
using namespace std;

const int MAXM = 10'000;

int T, N, M;
int A[MAXM], B[MAXM];

void solve(){
    cin >> N >> M;
    for (int i = 0; i < M; i++) cin >> A[i] >> B[i];

    cout << N - 1 << '\n'; 
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    while (T--) solve();
}
