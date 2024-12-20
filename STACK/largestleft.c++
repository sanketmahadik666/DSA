#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> findLargestLeft(const vector<int>& arr) {
    vector<int> result(arr.size(), -1);
    stack<int> s;

    for (int i = 0; i < arr.size(); ++i) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        if (!s.empty()) {
            result[i] = s.top();
        }
        s.push(arr[i]);
    }

    return result;
}

int main() {
    vector<int> arr = {4, 5, 2, 10, 8};
    vector<int> result = findLargestLeft(arr);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}