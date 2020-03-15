/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 4_5                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

/********************
 * Input:  (main)   *
 *   6 4 7 0 1      *
 *   C++ C          *
 ********************/

template<typename T>
void RemoveDuplicates(vector<T>& elements) {
    sort(rbegin(elements), rend(elements));
    auto it = unique(begin(elements), end(elements));
    elements.erase(it, end(elements));
} 

int main(int argv, char* argc[]) {
    vector<int> v1 = {6, 4, 7, 6, 4, 4, 0, 1};
    RemoveDuplicates(v1);
    for (int x : v1) {
        cout << x << " ";
    }
    cout << endl;

    vector<string> v2 = {"C", "C++", "C++", "C", "C++"};
    RemoveDuplicates(v2);
    for (const string& s : v2) {
        cout << s << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *   7 4 6 1 0      *
 *   C++ C          *
 ********************/
