//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;


long long max(vector<long long> &numbers) {
  long long ret;
  for (long long number : numbers) {
    ret = max(ret, number);
  }
  return ret;
}


long long gcm(long long a, long long b) {
	long long result = a;
	long long k = 0;
	long long n = b;
	do {
		k = result % n;
		result = n;
		n = k;
	} while(k != 0);
	return result;
}

long long lcm(long long a, long long b) {
	long long g;
	g = gcm(a, b);
	return a*b/g;
}

long long lcm_n(vector<long long> &numbers) {
	long long l;
	l = max(numbers);
	for (long long i = 1; i < numbers.size(); i++) {
    cout << "number: " << numbers[i] << endl;
		l = lcm(l, numbers[i]);
    cout << "lcm: " << l << endl;
	}
	return l;
}


int main() {
  long long n;
  cin >> n;

  vector<long long> t(n);
  rep (i, n) cin >> t[i];

  cout << lcm_n(t) << endl;

  return 0;
}
