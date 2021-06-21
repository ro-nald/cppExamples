#include "printUtils.h"

#include <iostream>

using std::cout;
using std::endl;


void printVector(std::string vectorName, std::vector<int> &vector) {
    cout << vectorName << " = {";
    for (int i : vector) {
        cout << " " << i << ",";
    }
    cout << "\b }\n";
}