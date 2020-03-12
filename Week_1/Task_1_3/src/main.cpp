/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 1_3                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>
#include <string>

using namespace std;
/********************
 * Input: (main)    *
 ********************/
enum class Lang {
    DE, FR, IT
};

struct Region {
    string std_name;
    string parent_std_name;
    map<Lang, string> names;
    int64_t population;
};

//first version
/*bool operator==(const Region& lhs, const Region& rhs) {
    return tie(lhs.std_name, lhs.parent_std_name, 
                lhs.names, lhs.population) ==
           tie(rhs.std_name, rhs.parent_std_name, 
                rhs.names, rhs.population);  
}

int FindMaxRepetitionCount(const vector<Region>& regions) {
    if (regions.empty()) {
        return 0;
    }
    int count = 1;
    int max = 1;
    for (int i = 0; i < static_cast<int>(regions.size() - 1); ++i) { 
        for (int k = i + 1; k < static_cast<int>(regions.size()); ++k) {
            if (regions[i] == regions[k]) {
                ++count;
            }
        }
        if (max < count) {
            max = count;
            count = 0;
        }
    }
    if (max == 1) return 1;
    return max;
}*/

//second version
bool operator<(const Region& lhs, const Region& rhs) {
    return tie(lhs.std_name, lhs.parent_std_name, 
                lhs.names, lhs.population) <
           tie(rhs.std_name, rhs.parent_std_name, 
                rhs.names, rhs.population);  
}

int FindMaxRepetitionCount(const vector<Region>& regions) {
    int result = 0;
    map<Region, int> max_count;
    for (const auto& region : regions) {
        result = max(result, ++max_count[region]);
    }
    return result;
}

int main(int argv, char* argc[]) {
    cout << FindMaxRepetitionCount({}) << '\n';
    
    cout << FindMaxRepetitionCount({
        {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          89
        },
    }) << endl;

    cout << FindMaxRepetitionCount({
        {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          89
        }, {
          "Russia",
          "Eurasia",
          {{Lang::DE, "Russland"}, {Lang::FR, "Russie"}, {Lang::IT, "Russia"}},
          89
        }, {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          89
        }, {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          89
        }, {
          "Russia",
          "Eurasia",
          {{Lang::DE, "Russland"}, {Lang::FR, "Russie"}, {Lang::IT, "Russia"}},
          89
        }, 
    }) << endl;

    cout << FindMaxRepetitionCount({
        {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          89
        }, {
          "Russia",
          "Eurasia",
          {{Lang::DE, "Russland"}, {Lang::FR, "Russie"}, {Lang::IT, "Russia"}},
          89
        }, {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou deux"}, {Lang::IT, "Mosca"}},
          89
        }, {
          "Moscow",
          "Toulouse",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          89
        }, {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          31
        },
    }) << endl;

    cout << FindMaxRepetitionCount({
        {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          89
        }, {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          89
        }, 
    }) << endl;

    return EXIT_SUCCESS;
}

/***************
 * Output:     *
 *   0         *
 *   1         *
 *   3         *
 *   1         *
 *   2         *
 ***************/
