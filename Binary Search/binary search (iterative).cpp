#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int binary_search(int a[], int l, int r, int m)
{
	while (l <= r)
	{
		int mid = l + (r - l) / 2;
		if (a[mid] == m)
			return mid;
		else if (a[mid] > m)
			r = mid - 1;
		else l = mid + 1;
	}
	return -1;
}

int main()
{
  FAST
	int n;
	cin >> n;
	int a[n];
	rep(i, n) cin >> a[i];
	int m;
	cin >> m;
	cout << binary_search(a, 0, n - 1, m);
}
