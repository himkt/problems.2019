# include <vector>
# include <iostream>


using namespace std;


pair<int, int> add(pair<int, int> v1, pair<int, int> v2) {
    return make_pair(v1.first+v2.first, v1.second+v2.second);
}


pair<int, int> frac(pair<int, int> v1, pair<int, int> v2) {
    return make_pair(v1.first-v2.first, v1.second-v2.second);
}


int main() {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    pair<int, int> va, vb, vc;

    va = make_pair(x2-x1, y2-y1);

    pair<int, int> c = add(make_pair(x2, y2), make_pair(-va.second, va.first));
    pair<int, int> d = frac(c, va);

    cout << c.first << " " << c.second << " " << d.first << " " << d.second << endl;
    return 0;
}

