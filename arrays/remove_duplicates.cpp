#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        if(n == 0) return arr;

        int i = 0;

        for(int j = 1; j < n; j++){
            if(arr[j] != arr[i]){
                i++;
                arr[i] = arr[j];
            }
        }

        arr.resize(i + 1);
        return arr;
    }
};

int main(){
    vector<int> arr = {1, 2, 2, 2, 3};

    Solution obj;
    vector<int> result = obj.removeDuplicates(arr);

   
    for(int val : result){
        cout << val << " ";
    }

    return 0;
}