
# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  int d = min(a, b);

  cout << (c / d) << endl;
}
