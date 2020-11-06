#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pb push_back
#define pob pop_back

template <typename T>
class Stack {
private:
	vector<T> v;
public:
	void push(T data) {
		v.pb(data);
	}
	bool empty() {
		return v.size() == 0;
	}
	void pop() {
		if (!empty())
			v.pob();
	}
	T top() {
		return v[v.size() - 1];
	}
};

int main() {

	Stack<char> s;
	for (int i = 80; i <= 85; i++) {
		s.push(i);
	}
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}
