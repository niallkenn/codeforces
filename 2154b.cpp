#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    vector<long long> vec(n);
    for (long long i=0;i<n;i++){
        cin >> vec[i];
    }
    int answer = 0;

    vec[1] = *max_element(vec.begin(), vec.begin() + 1 + 1);

    for (long long i=0;i<n;i++){
        if (i%2 == 0){
            if(i == 0){
            if (vec[0] >= vec[1]){
                answer += vec[0] - vec[1] + 1;
            }
            continue;
        } else {
            if(vec[i] >= vec[i - 1]){
                answer += vec[i] - vec[i - 1] + 1;
            }
        }
        }else{
            vec[i] = *max_element(vec.begin(), vec.begin() + i + 1);
        }
    }
    
    cout << answer << endl;
    return;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt; cin >> tt;
    while (tt--) solve();
    return 0;
}