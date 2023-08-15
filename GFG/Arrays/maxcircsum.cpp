#include<iostream>
#include<vector>
using namespace std;

int kadane_algorithm(vector<int>& arr) {
    int current_sum = arr[0];
    int max_sum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int max_circular_subarray_sum(vector<int>& arr) {
    int n = arr.size();

    // Case 1: Maximum subarray sum using standard Kadane's algorithm
    int max_normal_sum = kadane_algorithm(arr);

    // Case 2: Maximum subarray sum with wrapping (circular) elements
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
        arr[i] = -arr[i];
    }

    int max_circular_sum = total_sum + kadane_algorithm(arr);
    
    // Return the maximum of the two cases
    return max(max_normal_sum, max_circular_sum);
}

int main() {
    vector<int> arr = {5, -2, 3, 4};
    int max_sum = max_circular_subarray_sum(arr);
    cout << "Maximum circular subarray sum: " << max_sum << endl;
    return 0;
}
