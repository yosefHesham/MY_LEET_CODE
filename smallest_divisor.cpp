#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

 bool isValid (vector<int> &nums, int threshold, int divisor) {
        
        long long sum = 0;
        for(int i = 0; i < nums.size(); i ++) {
            sum+= (nums[i] / divisor) + (nums[i] % divisor != 0);
        }

        if(sum <= threshold) {
            return true;
        }
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        long left = 0;
        long  right = 1e6;
        long result = 0;
        
        while(left <= right) {
        
            int middle = left + (right - left) / 2;
            if(isValid(nums,threshold,middle)) {
                right = middle - 1;
                result = middle;
            }
            else {

            left = middle + 1;
        }
        }
        return result;
    }
int main() {



    vector<int> nums =   {44,22,33,11,1};
    cout << isValid(nums,5,44) << endl;;
    cout << smallestDivisor(nums,5) << endl;

}