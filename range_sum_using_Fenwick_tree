#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <iomanip> //for setprecision()
using namespace std;
#define ll long long
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define w(x) int x; cin>>x; while(x--)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int a[1000];
int BIT[1000] = {0};

void update(int i, int inc, int n)
{
	while (i <= n)
	{
		BIT[i] += inc;
		i += (i & (-i));
	}
}

int query(int i)
{
	int ans = 0;
	while (i > 0)
	{
		ans += BIT[i];
		i -= (i & (-i));
	}
	return ans;
}

int main()
{

/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/

	FAST
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		update(i, a[i], n);
	}

	w(q)
	{
		int l, r;
		cin >> l >> r;
		cout << query(r) - query(l - 1) << endl;
	}
}
