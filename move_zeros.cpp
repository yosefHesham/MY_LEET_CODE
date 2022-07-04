
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
    

   void moveZeroes(vector<int>& nums) {
        
    int insert_index = 0;
        int zeros = 0;
        for(int i = 0; i < nums.size(); i ++) {
            if(!nums[i]) {
                zeros ++;
                continue;
            }
            nums[insert_index] = nums[i];
            insert_index ++;
        }
        int end = nums.size() - 1;
    
    while(zeros--) {
        
        nums[end] = 0;
        end --;
    }
    }
    
    

    int main() {

        vector<int> nums = {0,1,0,3,12};

        vector<int> result = move_zeros(nums);
        for(int i = 0; i < result.size(); i ++) {
            // cout << result[i] << endl;
        }

    	
    }

 