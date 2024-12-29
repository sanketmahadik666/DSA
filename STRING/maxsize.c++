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

int find_max_size(string &str){
    int low = 0;
    int high = 0;
    int maxlen = 0;

    unordered_set<char> charset;

    for(int i = 0 ; i<str.size() ; i++){

        while(charset.find(str[i]) != charset.end()){
            charset.erase(str[low]);
            low++;
        }
        charset.emplace(str[i]);
        maxlen = max(maxlen, i - low + 1);
        }
        return maxlen;
    }
    
int main(){

    cout<<"enter  the input string : ";

    string str;
    cin >> str;

   // fing_max_size(str);
    int result = find_max_size(str);
    cout << "The maximum size is: " << result << endl;




    return 0;
    
}