#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found at index 'mid'
        }

        if (arr[mid] < target) {
            left = mid + 1; // Adjust the left boundary
        } else {
            right = mid - 1; // Adjust the right boundary
        }
    }

    return -1; // Target not found in the array
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 7;

    int result = binarySearch(arr, target);

    if (result != -1) {
        std::cout << "Target " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Target " << target << " not found in the array." << std::endl;
    }

    return 0;
}
