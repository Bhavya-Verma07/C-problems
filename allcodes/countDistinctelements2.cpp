#include<bits/stdc++.h>
using namespace std;

int countDistinctElements(int arr[], int size) {
    int distinctCount = 0;

    for (int i = 0; i < size; i++) {
        bool isDistinct = true;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }

        if (isDistinct) {
            distinctCount++;
        }
    }

    return distinctCount;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int distinctCount = countDistinctElements(arr, size);

    std::cout << "Number of distinct elements: " << distinctCount << std::endl;

    return 0;
}
