#include <bits/stdc++.h>
using namespace std;

const int N = 200100;

//Class that helps to construct double hash string values
struct Hash {
    uint64_t p, mod, ppow[N], ppow2[N], p2, mod2;
    pair<uint64_t, uint64_t> h[N];

    Hash() : p(33), mod(1000000007), p2(73), mod2(1000000009) {
        ppow[0] = 1;
        ppow2[0] = 1;
        for (int i = 1; i < N; i++) {
            ppow[i] = (ppow[i-1] * p) % mod;
            ppow2[i] = (ppow2[i-1] * p2) % mod2;
        }
    }

    void init(string &s) {
        h[0] = {5389ULL, 5389ULL};
        for (size_t i = 0; i < s.size(); i++) {
            int code = s[i];
            h[i+1].first = (h[i].first * p + code) % mod;
            h[i+1].second = (h[i].second * p2 + code) % mod2;
        }
    }

    pair<uint64_t, uint64_t> get_hash(int i, int j) {
        pair<uint64_t, uint64_t> r;
        r.first = (h[j+1].first - (h[i].first * ppow[j-i+1]) % mod + mod) % mod;
        r.second = (h[j+1].second - (h[i].second * ppow2[j-i+1]) % mod2 + mod2) % mod2;
        return r;
    }
};

template<typename T>
ostream& operator<<(ostream& os, pair<T, T> p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

Hash h1, h2;
string s1, s2;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    s1 = "abghABCDE";
    s2 = "CD";
    h1.init(s1);
    h2.init(s2);

    cout << s1.substr(6, 2) << " == " << s2.substr(0, 2) << endl;
    cout << h1.get_hash(6, 7) << " == " << h2.get_hash(0, 1) << endl;

    return 0;
}