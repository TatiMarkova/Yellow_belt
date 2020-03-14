/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 4_1                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

/********************
 * Input:  (main)   *
 ********************/

void PrintVectorPart(const vector<int>&);

void PrintVectorPart(const vector<int>& numbers) {
    auto it = find_if (
        begin(numbers), end(numbers), 
        [] (int number) {
            return number < 0;
        }
    );
    while (it != begin(numbers)) {
        cout << *(--it) << ' ';
    }
}

int main(int argv, char* argc[]) {
    PrintVectorPart({6, 1, 8, -5, 4});
    cout << endl;
    PrintVectorPart({-6, 1, 8, -5, 4});
    cout << endl;
    PrintVectorPart({6, 1, 8, 5, 4});
    cout << endl;
    PrintVectorPart({6, 1, 8, 5, -4});
    cout << endl;

    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *   8 1 6          *
 *                  *
 *   4 5 8 1 6      *
 *   5 8 1 6        *
 ********************/
