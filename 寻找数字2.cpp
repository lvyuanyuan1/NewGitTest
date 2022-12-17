#include <iostream>
using namespace std;
typedef long long LL;
int n;
LL ans = 1e18,res;
bool check (LL x) {
    int cnt4 = 0,cnt7 = 0;
    while (x) {
        if (x % 10 == 4) cnt4++;
        else if (x % 10 == 7) cnt7++;
        x /= 10;
    }
    return cnt4 == cnt7;
}
void dfs (int u) {
    if (res >= n && check (res)) ans = min (ans,res);
    if (u > 15) return ;
    res = res * 10 + 4;
    dfs (u + 1);
    res /= 10;
    res = res * 10 + 7;
    dfs (u + 1);
    res /= 10;
}
int main () {
    cin >> n;
    cout<<res;
    //dfs (1);
    //cout << ans << endl;
    return 0;
}

