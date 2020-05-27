# include <iostream>
# include <vector>
# include <string>


using namespace std;


int main() {
    char a, b; cin >> a >> b;

    int na = a - '0';
    int nb = b - '0';

    string sa = "";
    for (int i=0; i<nb; i++) sa += a;
    string sb = "";
    for (int i=0; i<na; i++) sb += b;

    vector<string> ss = {sa, sb};
    sort(ss.begin(), ss.end());

    cout << ss[0] << endl;
    return 0;
}

