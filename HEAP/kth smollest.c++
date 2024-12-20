#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

 using namespace std;

int kthSmallest(vector<int>& arr, int k) {
    priority_queue<int> maxHeap;
    for (int i = 0; i < arr.size(); ++i) {
        maxHeap.push(arr[i]);
        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }
    return maxHeap.top();
}

int main()
{
    cout << "Enter the number of elements in the vector: ";
    int n;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    int k;
    cin >> k;

    int result = kthSmallest(arr, k);
    cout << "The " << k << "th smallest element is " << result << endl;

    return 0;
}
