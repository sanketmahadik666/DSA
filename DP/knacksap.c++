#include <iostream>
#include <string>
#include<vector>
#include <unordered_map>
#include<unordered_set>
#include <algorithm>
#include<stack>
#include<queue>
#include<set>


using namespace std;
vector<vector<int>> t(weight.size() + 1, vector<int>(size + 1, 0));

void snackpsap(vector<int> &weight, vector<int> &price, int size, int n){


for(int i = 0 ; i < n+1 ; i++){
    for(int j = )
}

}



int main(){

    cout<<"enter the value of the knapasack weights"<<endl;
    vector<int> weight;
    vector<int> price;

    for(int i =0 ; i < 5 ; i++){

        int x;
        cin>>x;
        weight.push_back(x);
    }
cout<<"enter the elements in prices for the knapsack"<<endl;
for(int i = 0 ;i < 5 ; i++)
{
    int x ;
    cin>> x;
    price.push_back(x);
}

cout<<"entert the capacity of the knapsack : ";
int size;
cin>>size;



 snackpsap(weight,price,size,weight.size());


return 0;

}