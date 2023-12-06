#pragma once

#include <map>

const std::map<std::string, unsigned long long> convert_ed = {
    {"b", 1ULL},
    {"kb", 1024ULL},
    {"mb", 1024ULL * 1024ULL},
    {"gb", 1024ULL * 1024ULL * 1024ULL},
    {"tb", 1024ULL * 1024ULL * 1024ULL * 1024ULL},
    {"pb", 1024ULL * 1024ULL * 1024ULL * 1024ULL * 1024ULL},
    {"eb", 1024ULL * 1024ULL * 1024ULL * 1024ULL * 1024ULL * 1024ULL}
};
