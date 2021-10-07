#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;

int is_prime[maxn];
void compute() {
    for (int i = 2; i < maxn; i++) {
        if (is_prime[i] == 0) {
            for (int j = 2 * i; j < maxn; j += i) {
                is_prime[j]++;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;

    bool ok = is_prime[n] == 0;
    if (!ok) {
        cout << "Nada";
        return;
    }

    while (n) {
        ok &= is_prime[n % 10] == 0;
        n /= 10;
    }

    cout << (ok ? "Super" : "Primo");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    compute();
    solve();

    return 0;
}