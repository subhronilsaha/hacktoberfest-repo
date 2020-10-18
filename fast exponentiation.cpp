#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;
#define ll long long
#define pb push_back

ll exp(ll a, ll n)
{
    if (n == 0)
        return 1;
    if (n & 1)
        return a * exp(a, n - 1);
    else
    {
        ll ans = exp(a, n / 2);
        ans *= ans;
        return ans;
    }
}

int main() {

    ll a, n;
    cin >> a >> n;
    cout << exp(a, n);
}
