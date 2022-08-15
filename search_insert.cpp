#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int searchInsert(vector<int>& nums, int target) {
        if(target <= nums[0]) {
            return 0;
        }

        else if(target > nums[nums.size() - 1]) {
            return nums.size();
        }
        int start = 0;
        int end = nums.size() - 1;
    
        int position = 0;
        while(start < end) {
            int middle = start + (end - start) / 2;
            
            if(target == nums[middle]) {
                return middle;
            }
            else if(nums[middle] > target) {
                position = middle - 1;
              end --;
            }
            else {
                position = middle + 1;
                start ++;
            }
          
        }
    
        return position;
        
    }

    int main() {

        vector<int > nums = {1,3,5,6};
        cout << searchInsert(nums,4) << endl;

    }