/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 4_3                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/********************
 * Input:  (main)   *
 ********************/


/*template <typename T>
vector<T> FindGreaterElements(
    const set<T>& elements, const T& border);

template <typename T>
vector<T> FindGreaterElements(
        const set<T>& elements, const T& border) {
    auto it = begin(elements);
    while (it != end(elements) && *it <= border) {
        ++it;
    }
    return {it, end(elements)};
}*/

vector<string> SplitIntoWords(const string& s);

vector<string> SplitIntoWords(const string& s) {
    // 1 variation
    vector<string> result;
    auto last_it = begin(s);
    for (auto it = begin(s); it <= end(s); ++it) {
        if (*it == ' ' || it == end(s)) {
            result.push_back({last_it, it});
            last_it = ++it;
        }
    }
    return result;
    
    // 2 variation
    /*vector<string> result;
    auto it = begin(s);
    auto last_it = begin(s);
    while (it <= end(s)) {
        it = find_if(it, end(s), 
        [] (const char& ch) {
            return ch == ' ';
        });
        result.push_back({last_it, it});
        last_it = ++it;
    }
    return result;*/

    // 3 variation
    /*vector<string> result;
    string word = "";
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            word += s[i];
            if (i == s.size() - 1) {
                result.push_back(word);
            }
        }
        else if (s[i] == ' ') {
            result.push_back(word);
            word = "";
        }
    }
    return result;*/

    // 4 variation
    /*vector<string> result;
    auto begin_word = begin(s);
    auto end_word = find(begin(s), end(s), ' ');
    while (end_word != end(s)) {
        string word(begin_word, end_word);
        result.push_back(word);
        begin_word = ++end_word;
        end_word = find(end_word, end(s), ' ');
    }
    result.push_back({begin_word, end_word});
    return result;*/

    // 5 variation
    /*vector<string> result;
    auto begin_word = begin(s);
    auto end_word = find(begin(s), end(s), ' ');
    auto it = begin(s);
    while (true) {
        if (end_word == end(s)) {
            result.push_back({begin_word, end_word});
            break;
        }
        if (*it == ' ') {
            result.push_back({begin_word, end_word});
            begin_word = ++it;
            end_word = find(it, end(s), ' ');
        }
        ++it;
    }
    return result;*/

    //6 variation
    /*vector<string> result;
    auto begin_word = begin(s);
    const auto end_word = end(s);
    while (true) {
        auto it = find (begin_word, end_word, ' ');
        result.push_back({begin_word, it});
        if (it == end_word) 
            break;
        begin_word = ++it;
    }
    return result;*/

}


int main(int argv, char* argc[]) {
    string s = "C Cpp Java Python";

    vector<string> words = SplitIntoWords(s);
    cout << words.size() << " ";
    for (auto it = begin(words); it != end(words); ++it) {
        if (it != begin(words)) {
            cout << "/";
        }
        cout << *it;
    }
    cout << endl;

    return EXIT_SUCCESS;
}

/****************************
 * Output:                  *
 *   4 С/Cpp/Java/Python    *
 ****************************/
