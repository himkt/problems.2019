//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

vector<string> extract(string s) {
  vector<string> ss;
  string substring;
  bool in_bracket = false;

  rep (i, s.size()) {
    if (s[i] == '"' && !in_bracket) {
      in_bracket = true;
      continue;
    }

    if (s[i] == '"' && in_bracket) {
      if (substring != "") ss.push_back(substring);
      substring = "";
      in_bracket = false;
    }
    if (in_bracket) substring += s[i];
  }
  return ss;
}

string conv(string s, vector<string> &ss) {
  rep (i, ss.size()) {
    string query = '"' + ss[i] + '"';
    string::size_type pos = s.find(query);
    if (pos == string::npos) continue;
    s.replace(pos+1, query.size()-2, "");
  }
  return s;
}

int main() {
  string s1, s2;

  while (cin >> s1, s1 != ".") {
    cin >> s2;

    vector<string> ss1 = extract(s1);
    vector<string> ss2 = extract(s2);

    s1 = conv(s1, ss1);
    s2 = conv(s2, ss2);

    int num_diff = 0;
    if (ss1.size() == ss2.size()) {
      rep (i, ss1.size()) if (ss1[i] != ss2[i]) num_diff++;
    }
    else if (abs((int)ss1.size()-(int)ss2.size()) == 1) {
      num_diff = 1;
    }

    if (s1 == s2) {
      if (num_diff == 0) cout << "IDENTICAL" << endl;
      else if (num_diff == 1) cout << "CLOSE" << endl;
      else cout << "DIFFERENT" << endl;
    }
    else {
      cout << "DIFFERENT" << endl;
    }

  }
  return 0;
}
