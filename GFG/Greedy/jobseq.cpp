#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Job {
    char id;
    int deadline;
    int profit;

    Job(char i, int d, int p) : id(i), deadline(d), profit(p) {}
};

bool sortByProfit(Job j1, Job j2) {
    return (j1.profit > j2.profit);
}

void jobSequencing(vector<Job>& jobs) {
    int n = jobs.size();
    vector<char> result(n, '-'); // stores the final job sequence
    vector<bool> slot(n, false); // keeps track of available time slots

    sort(jobs.begin(), jobs.end(), sortByProfit); // sort jobs by profit in descending order

    for (int i = 0; i < n; i++) {
        for (int j = min(n, jobs[i].deadline) - 1; j >= 0; j--) {
            if (!slot[j]) {
                result[j] = jobs[i].id;
                slot[j] = true;
                break;
            }
        }
    }

    // Print the job sequence
    for (int i = 0; i < n; i++) {
        if (result[i] != '-')
            cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<Job> jobs = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},{'d', 1, 25}, {'e', 3, 15} };

    jobSequencing(jobs);

    return 0;
}
