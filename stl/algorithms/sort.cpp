#include <iostream>
#include <vector>
#include <algorithm>

#include "utils/printUtils.h"

using std::cout;
using std::endl;

using std::sort;
using std::vector;

void generateRandomNumbers(vector<int> &storage, int size, int lowerBoundIncl, int upperBoundIncl) {
    srand((unsigned) time(0));

    while (size) {
        int newValue = lowerBoundIncl + (rand() % (upperBoundIncl - lowerBoundIncl));
        storage.push_back(newValue);
        size--;
    }
}

int main(void) {

    vector<int> randomNumbers;
    generateRandomNumbers(randomNumbers, 10, 5, 100);

    cout << "Before sort:\n";
    printVector("Randomised Vector", randomNumbers);

    sort(randomNumbers.begin(), randomNumbers.end(),
                [] (int x, int y) { return x < y; });

    cout << "After sort:\n";
    printVector("Sorted Vector", randomNumbers);

    return 0;
}