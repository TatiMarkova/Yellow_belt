/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 3_2                *
 ****************************/
#include "phone_number.h"

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argv, char* argc[]) {

    PhoneNumber pn("+7-495-111-22-33");
    cout << pn.GetInternationalNumber() << '\n';

    //PhoneNumber pn1("1-2-333");
    //cout << pn1.GetInternationalNumber() << '\n';

    //PhoneNumber pn2("+7-1233");
    //cout << pn2.GetInternationalNumber() << '\n';

    return EXIT_SUCCESS;
}
