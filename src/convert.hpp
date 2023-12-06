#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cassert>
#include "convert_const.h"

using namespace std;

void ProcessInput(string& numbers, string& input_ed, const string& input);
bool ValidateInput(const string& numbers, const string& input_ed, const string& target);
bool validation(int argc, char* argv[], string& numbers, string& input_ed, string& target);
bool isUnitInMap(const string& unit);
void ConvertAndPrintResult(const string& numbers, const string& input_ed, const string& target);
