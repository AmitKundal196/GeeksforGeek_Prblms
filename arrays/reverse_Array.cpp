#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int> &arr) {
        int start = 0;
        int end = arr.size() - 1;

        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    Solution obj;
    obj.reverseArray(arr);

    cout << "Reversed Array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}