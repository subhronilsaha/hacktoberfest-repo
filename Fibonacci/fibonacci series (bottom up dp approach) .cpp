#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int fib(int n)  //Space complexity: O(N)
{
	int dp[101] = {};  // For first 100 Numbers of fibonacci sequence.
	dp[1] = 1;

	for (int i = 2; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2];

	return dp[n];
}

int optimisedSpace_fib(int n)  //Space complexity: O(1)
{
	if(n==0 || n==1)
		return n;
	
	int a=0,b=1,c;
	for(int i=2;i<=n;i++)
	{
		c=a+b;
		a=b,b=c;
	}
	return c;
}
	
int main()
{
	int n;
  cin >> n;

	cout << fib(n) << endl;
	cout << optimisedSpace_fib(n);
}
