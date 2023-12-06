// #include "convert.hpp"
// using namespace std;

// bool validation(int argc, char* argv[], string& numbers, string& input_ed, string& target) {
//     if (argc != 3) {
//         cerr << "Некорректное количество аргументов." << endl;
//         return false;
//     }

//     string input = argv[1];
//     target = argv[2];

//     ProcessInput(numbers, input_ed, input);

//     if (!ValidateInput(numbers, input_ed, target)) {
//         cerr << "Введены некорректные данные или единицы измерения." << endl;
//         return false;
//     }

//     return true;
// }
// bool isUnitInMap(const string& unit) {
//     return convert_ed.find(unit) != convert_ed.end();
// }

// void ProcessInput(string& numbers, string& input_ed, const string& input) {
//     for (char c : input) {
//         if (isdigit(c)) {
//             numbers += c;
//         } else {
//             input_ed += c;
//         }
//     }
// }

// bool ValidateInput(const string& numbers, const string& input_ed, const string& target) {
//     return !numbers.empty() && !input_ed.empty() && isUnitInMap(input_ed) && isUnitInMap(target);
// }

// void ConvertAndPrintResult(const string& numbers, const string& input_ed, const string& target) {
//     unsigned long long value = stoull(numbers);
//     unsigned long long bytes = value * convert_ed.at(input_ed);
//     cout << fixed << setprecision(0) << bytes / static_cast<double>(convert_ed.at(target)) << endl;
// }
