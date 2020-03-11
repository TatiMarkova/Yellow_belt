/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 1_2                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>

/********************
 * Input:           *
 *   2 14           *
 *   1 2 3          *
 *   30 40 50       *
 ********************/

int main(int argv, char* argc[]) {
    int blocks_count, density;
    std::cin >> blocks_count >> density;
    uint64_t w, h, d; //sm
    uint64_t volume = 0;
    for (int i = 0; i < blocks_count; ++i) {
        std::cin >> w >> h >> d;
        volume += w * h * d;
    }
    uint64_t mass = volume * density;
    std::cout << mass << '\n';

    return EXIT_SUCCESS;
}

/********************
 * Output:          *
 *   840084         *
 ********************/
