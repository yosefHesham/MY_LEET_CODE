
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
    

    vector<int> sorted_squres(vector<int>& nums) {

     vector<int> result(nums.size());

      int left = 0;
      int right = nums.size() - 1;

      for(int i = nums.size() - 1; i >= 0; i --) {
        if(abs(nums[left]) > nums[right]) {
            cout << "WTF" << endl;
            result[i] = nums[left] * nums[left];
            left ++;
        }
        else {
            result[i] = nums[right] * nums[right];
            right --;
        }

      }
      return result;

    }

    int main() {

        vector<int> nums = {-4,-1,0,3,10};

        vector<int> result = sorted_squres(nums);
        for(int i = 0; i < result.size(); i ++) {
            cout << result[i] << endl;
        }

    	
    }

    