#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int> &arr) {

    int start = 0;
    int end = arr.size() - 1;

    while(start < end) {

        int mid = start + (end - start) / 2;

        if(arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }

    return start;
}

int main() {

    vector<int> arr = {1, 3, 20, 4, 1};

    int ans = peakElement(arr);

    cout << "Peak Index = " << ans << endl;
    cout << "Peak Element = " << arr[ans];

    return 0;
}