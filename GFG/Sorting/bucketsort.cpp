#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bucketSort(vector<float>& arr) {
    int n = arr.size();
    vector<vector<float>> buckets(n);

    for (int i = 0; i < n; i++) {
        int index = n * arr[i];
        buckets[index].push_back(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

int main() {
    vector<float> arr = {0.1, 0.7, 0.4, 0.3, 0.6, 0.9, 0.2, 0.5, 0.8};
    bucketSort(arr);

    cout << "Sorted array: ";
    for (float num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
