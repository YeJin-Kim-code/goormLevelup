#include <bits/stdc++.h>
using namespace std;

const int MAX = 200'000;

int N, M, A[MAX], B[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];
    cin >> M;
    for (int i = 0; i < M; i++) cin >> B[i];

    /* B의 각 원소가 A에 포함되는지 찾아야 하는 문제이다.
    순차적으로 탐색한다면 O(NM)인데, N과 M 둘 다 최대 200,000이라서 불가능하다.
    A를 정렬해서 Bi에 대해 Bi 이상의 값을 가지면서 가장 작은 Ai를 이분 탐색으로 구하고, 구한 Ai가 Bi와 같은지 확인하면 된다.
    이렇게 되면 O(N log N) + O(M log N) = O((N + M) log N)으로 해결할 수 있다. */

    // A를 정렬한다.
    sort(A, A + N);

    // Bi가 A에 포함되는지 이분 탐색으로 확인한다.
    for (int i = 0; i < M; i++){
        int j = lower_bound(A, A + N, B[i]) - A;
        if (j < N && A[j] == B[i]) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}
