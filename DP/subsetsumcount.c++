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

vector<vector<int>> t;

int findcount(vector<int>& arr, int n, int sum) {
    t.resize(n + 1, vector<int>(sum + 1, 0));

for(int i =0; i < n+1 ; i++){
    for(int j =0 ; j < sum+1 ; j++){
        if(i == 0){
            t[i][j] = 0;

        }
        if(j == 0 ) {
            t[i][j] = 1;

        }
        if(arr[i-1] <= j){
            t[i][j]= t[i-1][j-arr[i-1]] + t[i-1][j];

        }
        else{
            t[i][j] = t[i][j];
        }

    }
}


return t[n][sum];
}

int main(){
    cout <<"Enter the number of elements in the vector:";
    int n;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the vector: ";
    for (int i =0; i< n;i++){
        cin >> arr[i];
    }
int sum;
cout<<"enter the sum you waht to findd the count of the subset sum: ";
cin>>sum;
  int count =  findcount(arr,n,sum);

  cout<<"the refelected count by given array is :"<<count<<endl;

  return 0;
}