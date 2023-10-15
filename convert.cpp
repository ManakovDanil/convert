#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

map<string, unsigned long long> convert_ed = {
    {"b", 1},
    {"kb", 1024},
    {"mb", 1024 * 1024},
    {"gb", 1024 * 1024 * 1024},
    {"tb", 1024ULL * 1024 * 1024 * 1024},
    {"pb", 1024ULL * 1024 * 1024 * 1024 * 1024},
    {"eb", 1024ULL * 1024 * 1024 * 1024 * 1024 * 1024}
};

string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    
    double value;
    string input_ed, target_ed;

    cout << "Введите значение с единицей измерения (например, 2 tb b): ";
    cin >> value >> input_ed >> target_ed;

    if (value < 0) {
        cerr << "Введены некоректные данные" << endl;
        return 1;
    }

    input_ed = toLower(input_ed);
    target_ed = toLower(target_ed);

    if (convert_ed.find(input_ed) != convert_ed.end() && convert_ed.find(target_ed) != convert_ed.end()) {
        unsigned long long bytes = static_cast<unsigned long long>(value * convert_ed[input_ed]);
        double result = static_cast<double>(bytes) / convert_ed[target_ed];
        cout << value << " " << input_ed << " = " << result << " " << target_ed << endl;
    } else {
        cerr << "Введены некорректные единицы измерения." << endl;
        return 1;
    }

    return 0;
}
