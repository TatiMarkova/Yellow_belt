/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 1_5                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>

using namespace std;

/********************
 * Input:  (main)   *
 ********************/

template<typename T>
T Sqr(const T& value) {
    return value * value;
}

template<typename T>
vector<T> Sqr(const vector<T>& v) {
    vector<T> result;
    for(const T& i : v) {
        result.push_back(Sqr(i));
    }
    return result;
}

template<typename T1, typename T2>
pair<T1, T2> Sqr(const pair<T1, T2>& p) {
    return {Sqr(p.first), Sqr(p.second)};
}

template<typename T1, typename T2>
map<T1, T2> Sqr(const map<T1, T2>& m) {
    map<T1, T2> result;
    for (const auto& i : m) {
        result[i.first] = Sqr(i.second);
    }
    return result;
}

int main(int argv, char* argc[]) {
    vector<int> v = {1, 2, 3};
    cout << "vector:";
    for (int x : Sqr(v)) {
      cout << ' ' << x;
    }
    cout << endl;

    map<int, pair<int, int>> map_of_pairs = {
      {4, {2, 2}},
      {7, {4, 3}}
    };
    cout << "map of pairs:" << endl;
    for (const auto& x : Sqr(map_of_pairs)) {
      cout << x.first << ' ' << x.second.first << ' ' << x.second.second << endl;
    }

    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *   vector: 1 4 9  *
 *   map of pairs:  *
 *   4 4 4          *
 *   7 16 9         *
 ********************/
