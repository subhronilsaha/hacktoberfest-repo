#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pb push_back
#define pob pop_back
class Stack {
private:
	vector<int> v;
public:
	void push(int data) {
		v.pb(data);
	}
	bool empty() {
		return v.size() == 0;
	}
	void pop() {
		if (!empty())
			v.pob();
	}
	int top() {
		return v[v.size() - 1];
	}
};

int main() {

	Stack s;
	for (int i = 1; i <= 5; i++) {
		s.push(i * i * i);
	}
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}
