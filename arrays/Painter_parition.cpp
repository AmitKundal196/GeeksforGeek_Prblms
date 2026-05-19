#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int minTime(vector<int>& arr, int k) {

        if(arr.size() < k) {
            return -1;
        }

        int start = 0;
        int end = 0;
        int ans;

        // Find max element and total sum
        for(int i = 0; i < arr.size(); i++) {
            start = max(start, arr[i]);
            end += arr[i];
        }

        // Binary Search
        while(start <= end) {

            int mid = start + (end - start) / 2;

            int time = 0;
            int count = 1;

            // Count painters needed
            for(int i = 0; i < arr.size(); i++) {

                time += arr[i];

                if(time > mid) {
                    count++;
                    time = arr[i];
                }
            }

            // Possible answer
            if(count <= k) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    vector<int> arr = {5, 10, 30, 20, 15};

    int k = 3;

    cout << "Minimum Time = "
         << obj.minTime(arr, k);

    return 0;
}