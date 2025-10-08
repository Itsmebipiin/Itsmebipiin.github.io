#include<iostream>
using namespace std;

vector<int> subarraySum(vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0;
    long long curr_sum = 0;

    for (int end = 0; end < n; end++) {
        curr_sum += arr[end];  // include current element

        // shrink the window until sum <= target
        while (curr_sum > target && start < end) {
            curr_sum -= arr[start];
            start++;
        }

        // check if subarray found
        if (curr_sum == target) {
            return {start + 1, end + 1};  // 1-based index
        }
    }

    return {-1};  // no subarray found
}

int main() {
    vector<int> arr1 = {1, 2, 3, 7, 5};
    int target1 = 12;
    auto res1 = subarraySum(arr1, target1);
    for (int x : res1) cout << x << " ";
    cout << endl;

    vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target2 = 15;
    auto res2 = subarraySum(arr2, target2);
    for (int x : res2) cout << x << " ";
    cout << endl;

    vector<int> arr3 = {5, 3, 4};
    int target3 = 2;
    auto res3 = subarraySum(arr3, target3);
    for (int x : res3) cout << x << " ";
    cout << endl;

    return 0;
}