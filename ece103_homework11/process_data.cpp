#include "process_data.h"

#include <cstdint>
#include <iostream>
using namespace std;

void print(const char names[][30]) {
    for (size_t i = 0; names[i][0] != 0; ++i)
        cout << names[i] << endl;
}
