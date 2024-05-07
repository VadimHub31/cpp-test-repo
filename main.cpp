#include <iostream>
#include <set>
#include <vector>

using namespace std;

template <typename It>
void PrintRange(It range_begin, It range_end) {
    bool is_first = true;
    for (It i = range_begin; i != range_end; ++i) {
        if (is_first) {
            cout << *i;
            is_first = false;
        }
        else {
            cout << " "s << *i;
        }
    }
    cout << endl;
}

int main() {
    cout << "Test1"s << endl;
    set<int> test1 = {1, 1, 1, 2, 3, 4, 5, 5};
    PrintRange(test1.begin(), test1.end());
    cout << "Test2"s << endl;
    vector<int> test2 = {}; // пустой контейнер
    PrintRange(test2.begin(), test2.end());
    cout << "End of tests"s << endl;
}
