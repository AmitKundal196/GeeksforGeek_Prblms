#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& arr, int x) {

    for(int i = 0; i < arr.size(); i++) {

        if(arr[i] == x) {
            return i;
        }
    }

    return -1;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};
    int x = 3;

    int ans = search(arr, x);

    cout << ans;

    return 0;
}