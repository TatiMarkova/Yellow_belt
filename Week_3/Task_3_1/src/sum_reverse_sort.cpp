/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 3_1                *
 ****************************/

#include "sum_reverse_sort.h"

#include <algorithm>

using namespace std;

int Sum(int x, int y) {
    return x + y;
}

string Reverse(string s){
    reverse(s.begin(), s.end());
    return s;
}

void Sort(vector<int>& nums){
    sort(begin(nums), end(nums));
}
