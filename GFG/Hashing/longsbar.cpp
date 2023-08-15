#include <iostream>
#include <unordered_map>
using namespace std;

int longestSubarrayWithSum(int arr[], int n, int targetSum) {
    unordered_map<int, int> sumMap;
    int maxLength = 0;
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        if (currentSum == targetSum) {
            maxLength = i + 1;
        }

        if (sumMap.find(currentSum - targetSum) != sumMap.end()) {
            maxLength = max(maxLength, i - sumMap[currentSum - targetSum]);
        }

        if (sumMap.find(currentSum) == sumMap.end()) {
            sumMap[currentSum] = i;
        }
    }

    return maxLength;
}

int main() {
    int arr[] = {3, 1, 2, -2, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 4;
    int result = longestSubarrayWithSum(arr, n, targetSum);
    cout << "Longest subarray length: " << result << endl;
    return 0;
}
