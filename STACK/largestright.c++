// #include <iostream>
// #include <stack>
// #include <vector>

// using namespace std;

// stack<int>v1;

// void push(vector<int>&arr , int size,int n){

//     for(int i = size -1; i > n ; i--){

//         v1.push(arr[i]);
//     }

//     //return v1;
// }
// vector<int>ans;

// void find(vector<int>&arr , int size)
// {
//     int i;
// for( i = 0 ; i < size ; i++){
//    push(arr , size , i);

// for(int i = v1.top() ; i > v1.empty() ; i--){

//     if(v1.top() > arr[i])
//     {
//         ans.push_back(v1.top());
//     }
//     else if(v1.top() < arr[i]){
//         v1.pop();
//     }
//     else if(v1 .empty()){
//         ans.push_back(-1);
//     }
// }

// }

// }
// int main(){
//     int size;

//     cout<<"enter the size of te array: " ;
//     cin>>size;


//     cout<<"enter the input array for the problem"<<endl;
//     vector<int>arr(size);

//     for(int i = 0 ; i < size - 1; i++){

//         cin>>arr[i];
//     }

//     find(arr,size);


//     cout<<"for the problem the ans is the for problem is "<<endl;

//     for (int i =0 ; i < ans.size() ; i++){

//         cout<<ans[i]<<" ";
//     }

//     return 0;


// }


#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> findNextGreaterElements(vector<int>& arr, int size) {
    stack<int> st;
    vector<int> result(size, -1); // Initialize result array with -1

    for (int i = size - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop(); // Remove elements that are not greater
        }
        if (!st.empty()) {
            result[i] = st.top(); // Top of the stack is the next greater element
        }
        st.push(arr[i]); // Push current element onto the stack
    }

    return result;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array:" << endl;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> ans = findNextGreaterElements(arr, size);

    cout << "The next greater elements are:" << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
