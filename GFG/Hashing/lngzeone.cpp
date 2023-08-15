#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findMaxLength(vector<int>& nums) {
    int count = 0;
    int max_length = 0;
    unordered_map<int, int> hash_map;
    hash_map[0] = -1;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            count--;
        }
        else {
            count++;
        }

        if (hash_map.find(count) != hash_map.end()) {
            max_length = max(max_length, i - hash_map[count]);
        }
        else {
            hash_map[count] = i;
        }
    }

    return max_length;
}

int main() {
    vector<int> nums = {0, 1, 0, 1, 1, 0, 0};
    int result = findMaxLength(nums);
    cout << "Longest subarray length: " << result << endl;

    return 0;
}
