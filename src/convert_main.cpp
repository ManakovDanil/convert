#include "convert.hpp"
#include "convert_func.cpp"
int main(int argc, char* argv[]) {
    string numbers, input_ed, target;

    if (!validation(argc, argv, numbers, input_ed, target)) {
        return 1;
    }
    ConvertAndPrintResult(numbers, input_ed, target);

    
    return 0;
}
