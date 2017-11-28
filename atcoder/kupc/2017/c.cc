//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int a;
string s;

int C(const char &c) {
  map<char, int> cost;
  cost['a'] = 1;
  cost['b'] = 2;
  cost['c'] = 3;
  cost['d'] = 4;
  cost['e'] = 5;
  cost['f'] = 6;
  cost['g'] = 7;
  cost['h'] = 8;
  cost['i'] = 9;
  cost['j'] = 10;
  cost['k'] = 11;
  cost['l'] = 12;
  cost['m'] = 13;
  cost['n'] = 14;
  cost['o'] = 15;
  cost['p'] = 16;
  cost['q'] = 17;
  cost['r'] = 18;
  cost['s'] = 19;
  cost['t'] = 20;
  cost['u'] = 21;
  cost['v'] = 22;
  cost['w'] = 23;
  cost['x'] = 24;
  cost['y'] = 25;
  cost['z'] = 26;

  return cost[c];
}

int D(const int &d) {
  map<int, char> dict;
  // a
  dict[1] = 'a';
  dict[2] = 'b';
  dict[3] = 'c';
  dict[4] = 'd';
  dict[5] = 'e';
  dict[6] = 'f';
  dict[7] = 'g';
  dict[8] = 'h';
  dict[9] = 'i';
  dict[10] = 'j';
  dict[11] = 'k';
  dict[12] = 'l';
  dict[13] = 'm';
  dict[14] = 'n';
  dict[15] = 'o';
  dict[16] = 'p';
  dict[17] = 'q';
  dict[18] = 'r';
  dict[19] = 's';
  dict[20] = 't';
  dict[21] = 'u';
  dict[22] = 'v';
  dict[23] = 'w';
  dict[24] = 'x';
  dict[25] = 'y';
  dict[26] = 'z';

  return dict[d];
}

long long encode(const string &s) {
  long long hash_val = 0;
  for (int i = 0; i < s.size(); i++) {
    hash_val += pow(a, i + 1) * C(s[i]);
  }

  return hash_val;
}

string decode(long long hash_val) {
  string ans = "";
  int i = 1;

  while (hash_val > 1) {
    // cout << pow(2, i) << ", " << (long long)pow(2, i) << endl;
    long long k = min((long long)26, hash_val / (long long)pow(2, i));
    if (k == 0) break;

    cout << k << endl;
    hash_val -= k;

    ans += D(k);
    i++;
  }

  return ans;
}

int main() {
  cin >> a >> s;

  long long hash_val = encode(s);
  cout << hash_val << endl;
  string ans = decode(hash_val);

  cout << ans << endl;

  return 0;
}

