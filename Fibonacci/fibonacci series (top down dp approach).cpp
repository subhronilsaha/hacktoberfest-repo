#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int fib(int n, int dp[])
{
	//Base case
	if (n == 0 or n == 1)
		return n;

	//Recursive case
	if (dp[n] != 0)
		return dp[n];

	int ans;
	ans = fib(n - 1, dp) + fib(n - 2, dp);
	return dp[n] = ans;
}

int main()
{
	FAST

	int n;
  	cin >> n;
	int dp[101] = {}; // For first 100 numbers in fibonacci sequence.
	
	cout << fib(n, dp);
}
