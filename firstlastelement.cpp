#include <algorithm>
#include <bits/stdc++.h>
using namespace std;





vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1,-1};
        int left  = 0;
        int right = (int) nums.size() - 1;
        int middle =  0 ;
        
        while(left <= right) {
            middle = left + (right - left) / 2;
            if(nums[middle] == target) {
                 break;
            }
            else if(nums[middle] < target) {
                left = middle + 1;
            }
            else if(nums[middle] > target) {
                right = middle - 1;
            }
        }
        if(nums[middle] == target) {
        int decr = middle;
        while(nums[decr] == target) {
            
            decr --;
        }
        result[0] = decr + 1;
        
        int incr = middle;
        while(nums[incr] == target) {
            incr ++;
        }
        result[1] = incr - 1;
        
    }
    return result;
}


    int main() {


        vector<int> nums = {1};
        vector<int>  res = searchRange(nums,1);
        cout << res[0] << " " << res[1] << endl;
    }