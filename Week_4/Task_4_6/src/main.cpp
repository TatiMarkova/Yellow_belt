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

using namespace std;

/********************
 * Input:  (main)   *
 ********************/
enum class Gender {
  FEMALE,
  MALE
};

struct Person {
  int age;
  Gender gender;
  bool is_employed;
};

template <typename InputIt>
int ComputeMedianAge(InputIt range_begin, InputIt range_end) {
  if (range_begin == range_end) {
    return 0;
  }
  vector<typename InputIt::value_type> range_copy(range_begin, range_end);
  auto middle = begin(range_copy) + range_copy.size() / 2;
  nth_element(
      begin(range_copy), middle, end(range_copy),
      [](const Person& lhs, const Person& rhs) {
        return lhs.age < rhs.age;
      }
  );
  return middle->age;
}

void PrintStats(vector<Person> persons) {
    int age_all = ComputeMedianAge(begin(persons), end(persons));
    cout << "Median age = " << age_all << '\n'; 

    auto it_fem = partition(begin(persons), end(persons),
            [] (const Person& person) {
                return person.gender == Gender::FEMALE;
    });

    auto it_fem_impl = partition(begin(persons), it_fem,
            [] (const Person& person) {
                return person.is_employed;
    });

    auto it_male_impl = partition(it_fem, end(persons),
            [] (const Person& person) {
                return person.is_employed;
    });
    cout << "Median age for females = " 
         << ComputeMedianAge(begin(persons), it_fem)        << '\n';
    cout << "Median age for males = " 
         << ComputeMedianAge(it_fem, end(persons))          << '\n';


    cout << "Median age for employed females = " 
         << ComputeMedianAge(begin(persons), it_fem_impl)   << '\n';
    cout << "Median age for unemployed females = " 
         << ComputeMedianAge(it_fem_impl, it_fem)           << '\n';

    
    cout << "Median age for employed males = " 
         << ComputeMedianAge(it_fem, it_male_impl)          << '\n';
    cout << "Median age for unemployed males = " 
         << ComputeMedianAge(it_male_impl, end(persons))    << '\n';     
}

int main(int argv, char* argc[]) {
    vector<Person> persons = {
        {31, Gender::MALE, false},
        {40, Gender::FEMALE, true},
        {24, Gender::MALE, true},
        {20, Gender::FEMALE, true},
        {80, Gender::FEMALE, false},
        {78, Gender::MALE, false},
        {10, Gender::FEMALE, false},
        {55, Gender::MALE, true},
    };
    PrintStats(persons);

    return EXIT_SUCCESS;
}

/************************************************
 * Output:                                      *
 *   Median age = 40                            *
 *   Median age for females = 40                *
 *   Median age for males = 55                  *
 *   Median age for employed females = 40       *
 *   Median age for unemployed females = 80     *
 *   Median age for employed males = 55         *
 *   Median age for unemployed males = 78       *
 ************************************************/
