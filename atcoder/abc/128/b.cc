# include <iostream>
# include <vector>

using namespace std;
typedef pair<int, pair<string, int>> vp;


bool compare_with_restaurant_name(vp left, vp right) {
    return left.second.first < right.second.first;
}

bool compare_with_score(vp left, vp right) {
    return left.second.second > right.second.second;
}


int main() {
    int n; cin >> n;
    string s; int p;

    vector<pair<string, int>> restaurants(n);
    vector<vp> restaurants_with_idxs(n);

    for (int i=0; i<n; ++i) {
        cin >> s >> p;
        restaurants[i] = make_pair(s, p);
        restaurants_with_idxs[i] = make_pair(i+1, restaurants[i]);
    }

	// first of all, we sort restaurants using by their name
    sort(restaurants_with_idxs.begin(), restaurants_with_idxs.end(), compare_with_restaurant_name);


	// collect segments of restaurants whose names are the same
    vector<pair<int, int>> partisions;
    int left  = 0;
    int right = 0;
    string prev_city_name = restaurants_with_idxs[0].second.first;

    for (int i=1; i<n; ++i) {
        if (restaurants_with_idxs[i].second.first == prev_city_name) {
            right++;
        }
        else {
            partisions.push_back(make_pair(left, right));
            left  = i+1;
            right = i+1;
        }
        
        prev_city_name = restaurants_with_idxs[i].second.first;
    }

    if (left != right) {
        partisions.push_back(make_pair(left, right));
    }


	// sort restaurants whose names are the same by their points
    int left_part, right_part;
    int cursor = 0;
    int partision_length = partisions.size();

    for (pair<int, int> partision: partisions) {
        left_part  = partision.first;
        right_part = partision.second;

        if (cursor == 0) right_part++;
        if (cursor != 0)  left_part--;

        sort(restaurants_with_idxs.begin()+left_part,
             restaurants_with_idxs.begin()+right_part,
             compare_with_score);

        cursor++;
    }


    for (vp restaurants_with_idx: restaurants_with_idxs) {
        cout << restaurants_with_idx.first << endl;
    }
    return 0;
}

