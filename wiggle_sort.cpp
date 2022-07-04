
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
    

    void wiggle_sort(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        for(int i = 1; i < nums.size(); i+=2) {
                swap(nums[i],nums[i + 1]);

        }

    }

    int main() {

        vector<int> nums = {6,5,4,3,2,1};

        wiggle_sort(nums);
        for(int i = 0; i < nums.size(); i ++) {
            cout << nums[i] << endl;
        }

    	
    }

   