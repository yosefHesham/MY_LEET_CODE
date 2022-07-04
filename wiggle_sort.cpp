
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
