#include "convert.hpp"
#include "func.hpp"

using namespace std;

void test_ProcessInput() {
    string numbers, input_ed;
    const string input = "123abc456def";

    ProcessInput(numbers, input_ed, input);

    assert(numbers == "123456");

    assert(input_ed == "abcdef");
}

void test_ValidateInput() {
    string numbers = "123";
    string input_ed = "kb";
    string target = "mb";

    assert(ValidateInput(numbers, input_ed, target));

}
void test_ValidateInput_input_ed_empty() {
    string numbers = "123";
    string target = "mb";

    assert(!ValidateInput(numbers, "", target));
}

void test_ValidateInput_input_ed_bred() {
    string numbers = "123";
    string target = "mb";

    assert(!ValidateInput(numbers, "ghi", target));
}
void test_ValidateInput_target_bred() {
    string numbers = "123";
    string input_ed = "kb";

    assert(!ValidateInput(numbers, input_ed, "jkl"));
}

void test_isUnitInMap_correct() {
    assert(isUnitInMap("kb"));
}

void test_isUnitInMap_non_correct() {
    
    assert(!isUnitInMap("xyz"));
}

int main() {
    test_ProcessInput();
    cout << "Тест test_ProcessInput пройден!" << endl;
    test_ValidateInput();
    cout << "Тест test_ValidateInput пройден!" << endl;
    test_ValidateInput_input_ed_bred();
    cout << "Тест test_ValidateInput_input_ed_bred пройден!" << endl;
    test_ValidateInput_input_ed_empty();
    cout << "Тест test_ValidateInput_input_ed_empty пройден!" << endl;
    test_ValidateInput_target_bred();
    cout << "Тест test_ValidateInput_target_bred пройден!" << endl;
    test_isUnitInMap_correct();
    cout << "Тест test_isUnitInMap_correct пройден!" << endl;
    test_isUnitInMap_non_correct();
    cout << "Тест test_isUnitInMap_non_correct пройден!" << endl;

    return 0;
}