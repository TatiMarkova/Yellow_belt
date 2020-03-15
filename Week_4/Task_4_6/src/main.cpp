/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 4_6                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

/********************
 * Input:  (main)   *
 *   3              *
 ********************/

int main(int argv, char* argc[]) {
    int count;
    cin >> count;
    vector<int> nums(count);
    iota(rbegin(nums), rend(nums), 1);
    do {
        for (auto& num : nums) {
            cout << num << ' ';
        }
        cout << '\n';
    } while (prev_permutation(begin(nums), end(nums)));
    cout << '\n';

    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *   3 2 1          *
 *   3 1 2          *
 *   2 3 1          *
 *   2 1 3          *
 *   1 3 2          *
 *   1 2 3          *
 ********************/
