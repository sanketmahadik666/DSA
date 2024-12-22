#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <numeric>

using namespace std;

class Solution {
public:
    int find_max_add(vector<int> &arr, int window) {
        int max_sum = INT_MIN;
        for (int i = 0; i <= arr.size() - window; i++) {
            int current_sum = accumulate(arr.begin() + i, arr.begin() + i + window, 0);
            max_sum = max(max_sum, current_sum);
        }
        return max_sum;
    }
};

int main() {
    int n, window_size;
    cout << "Enter the size of the window: ";
    cin >> window_size;
    cout << "Enter the number of elements in the input queue: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the input queue: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    int max_sum = sol.find_max_add(arr, window_size);
    cout << "Maximum sum in any window: " << max_sum << endl;

    return 0;
}