/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 1_6                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <map>

using namespace std;

/********************
 * Input:  (main)   *
 ********************/
template<typename K,typename V>
V& GetRefStrict(map<K, V>& m, const K& k) {
    if (m.count(k) == 0) {
        throw runtime_error("no such key in dictionary");
    }
    return m[k];

}

int main(int argv, char* argc[]) {
    map<int, string> m = {{0, "value"}};
    string& item = GetRefStrict(m, 0);
    item = "newvalue";
    cout << m[0] << endl; 

    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *   newvalue       *
 ********************/
