/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 4_2                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

/********************
 * Input:  (main)   *
 ********************/


template <typename T>
vector<T> FindGreaterElements(
    const set<T>& elements, const T& border);

template <typename T>
vector<T> FindGreaterElements(
        const set<T>& elements, const T& border) {
    auto it = begin(elements);
    while (it != end(elements) && *it <= border) {
        ++it;
    }
    return {it, end(elements)};
}


int main(int argv, char* argc[]) {
    for (int x : FindGreaterElements(set<int>{1, 5, 7, 8}, 5)) {
        cout << x << " ";
    }
    cout << '\n';

    string to_find = "Python";
    cout << FindGreaterElements(
        set<string>{"C", "C++"}, to_find).size() 
        << '\n';

    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *   7 8            *
 *   0              *
 ********************/
