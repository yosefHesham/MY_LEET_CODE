#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        
        for(int i = 1; i < arr.size(); i ++) {
            arr[i] += arr[i - 1];
        
        }
        for(int i = 0; i < arr.size(); i ++ ) {
            int left = i;
            int right = left + 2;
            while(right < arr.size()) {
                if(left) {
                    sum+= arr[right] - arr[left - 1];
                }
                else {
                    sum += arr[right];
                }
             right += 2;

            }
        }
        return sum + arr[arr.size() - 1];
        
    }
};

int main() {

    vector<int> arr = {1,4,2,5,3};
    Solution sol =  Solution();

    int sum = sol.sumOddLengthSubarrays(arr);

    cout << sum << endl;


}