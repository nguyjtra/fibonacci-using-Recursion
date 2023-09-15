#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
ll ans(ll n) {
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else return ans(n - 1) + ans(n - 2);
}

int main() {
    ll n; cin >> n;
    cout << ans(n);
    return 0;
}
