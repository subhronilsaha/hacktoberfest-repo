#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main() {
	stack<int>s;
	for (int i = 1; i <= 10; i++) {
		s.push(i * i);
	}
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	return 0;

}
