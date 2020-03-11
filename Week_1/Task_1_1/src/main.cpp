/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 1_1                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>

/********************
 * Input:           *
 *   5              *
 *   0 -1 -2 -10 6  *
 ********************/

int main(int argv, char* argc[]) {
    int count_days;
    std::cin >> count_days;
    std::vector<int> temps(count_days); //-10^8 10^8 = 100'000'000
    int64_t sum = 0;
    for (auto& t : temps) {
        std::cin >> t;
        sum += t;
    }
    int average = sum / count_days;
    //std::cout << average << '\n';

    std::vector<int> indices;
    for (int i = 0; i < temps.size(); ++i) {
        if (temps[i] > average)
            indices.push_back(i);
    }
    std::cout << indices.size() << '\n';
    for (const auto& i : indices)  {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *   2              *
 *   0 4            *
 ********************/
