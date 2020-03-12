/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 3_1                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <map>
#include "sum_reverse_sort.h"

using namespace std;

/********************
 * Input:  (main)   *
 ********************/

int main(int argv, char* argc[]) {
    int a = 5, b = 6;
    cout << Sum(a, b) << '\n';

    string s = "Hello world!";
    cout << Reverse(s) << '\n';

    vector<int> n = {1, 5, 13, 7, 2, 3};
    Sort(n);
    for (const auto& i : n) {
        cout << i << ' ';
    }
    cout << '\n';

    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *   11             *
 *   !dlrow olleH   *
 *   1 2 3 5 7 13   *
 ********************/
