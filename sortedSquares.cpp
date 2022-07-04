
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

    /* 

    Implementation:
    sales -> clients -> sign contract (tru mob, truweb ,tru market) -> go to implementaion team (set the product up for the client)




    3 levels of solving a problem
    1- support engineers (solve internally in support team).
    2- Solve it in implementation team.
    3-Developers team.
    */


    /*

    ## True Mobile:
    (Connects consumers with brokers)
    : Apply for insurance online
    : Pin Card, (ro5sa)
     */
