#include <iostream>
#include <vector>

int iterativeBinarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        // Use this formula to prevent potential integer overflow
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;      // Target found
        if (arr[mid] < target) left = mid + 1;   // Search right half
        else right = mid - 1;                    // Search left half
    }
    return -1; // Target not found
}
