#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> coord;
typedef pair<coord, int> island;

int N;
vector<island> islands;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0, x, y; i < N; i++){
        cin >> x >> y;
        islands.push_back({{x, y}, i});
    }

    sort(islands.begin(), islands.end());

    int res[N];

    for (int i = 0; i < N; i++){
        auto [_, idx] = islands[i];
        res[idx] = N - i - 1;
    }

    for (int i = 0; i < N; i++) cout << res[i] << '\n';
}
