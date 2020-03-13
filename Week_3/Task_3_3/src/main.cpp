/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 3_3                *
 ****************************/
#include "Rectangle.h"
#include <iostream>

using std::cout;

int main(int argv, char* argc[]) {
    Rectangle r (5, 10);
    cout << r.GetPerimeter() << '\n';
    
    return EXIT_SUCCESS;
}
