#include <bits/stdc++.h>
using namespace std;

int A, B, C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B >> C;

    int t = A;
    bool res = true;
    while (true){
        if (t == C){
            res = false;
            break;
        }
        if (t == B) break;
        t = (t + 1) % 24;
    }

    if (res) cout << "Yes";
    else cout << "No";
}
