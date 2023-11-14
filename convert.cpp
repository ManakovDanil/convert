#include <iostream>
#include <string>
#include <map>
#include <cctype>
#include <iomanip>

using namespace std;

map<string, unsigned long long> convert_ed = {
    {"b", 1ULL},
    {"kb", 1024ULL},
    {"mb", 1024ULL * 1024ULL},
    {"gb", 1024ULL * 1024ULL * 1024ULL},
    {"tb", 1024ULL * 1024ULL * 1024ULL * 1024ULL},
    {"pb", 1024ULL * 1024ULL * 1024ULL * 1024ULL * 1024ULL},
    {"eb", 1024ULL * 1024ULL * 1024ULL * 1024ULL * 1024ULL * 1024ULL}
};

bool ProverkaValid(const string& unit) {
    return convert_ed.find(unit) != convert_ed.end();
}

int main(int argc, char* argv[]) {

    string input = argv[1];
    string target = argv[2];

    string numbers;
    string input_ed;

    for (char c : input) {
        if (isdigit(c)) {
            numbers += c;
        } else {
            input_ed += c;
        }
    }

    if (numbers.empty() || input_ed.empty() || !ProverkaValid(input_ed) || !ProverkaValid(target)) {
        cerr << "Введены некорректные данные или единицы измерения." << endl;
        return 1;
    }
    //setprecision(0)
    unsigned long long value = stoull(numbers);
    unsigned long long bytes = value * convert_ed[input_ed];
    cout << fixed << setprecision(0) << bytes / static_cast<double>(convert_ed[target]) << endl;

    return 0;
}
