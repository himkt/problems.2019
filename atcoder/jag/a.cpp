# include <iostream>

using namespace std;

int main() {

  int N;
  int num_A = 0;

  cin >> N;

  string res[N];

  for (int i = 0; i < N; i++) {
    cin >> res[i];

    if (res[i] == 'A') {
      num_A++;
    }
  }

  cout << res;

  if (res[0] == 'A' && res[N-1] != 'A' && num_A == N / 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
