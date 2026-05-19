#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int findPages(vector<int>& arr, int k) {

        if(arr.size() < k) {
            return -1;
        }

        int start = 0;
        int end = 0;
        int ans;

        for(int i = 0; i < arr.size(); i++) {
            start = max(start, arr[i]);
            end += arr[i];
        }

        while(start <= end) {

            int mid = start + (end - start) / 2;

            int pages = 0;
            int count = 1;

            for(int i = 0; i < arr.size(); i++) {

                pages += arr[i];

                if(pages > mid) {
                    count++;
                    pages = arr[i];
                }
            }

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

    vector<int> arr = {12, 34, 67, 90};

    int k = 2;

    cout << "Minimum Pages = "
         << obj.findPages(arr, k);

    return 0;
}