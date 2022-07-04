
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


 int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        
        for(int i = 0; i < nums.size() - 1; i+= 2) {
            sum+= min(nums[i],nums[i + 1]);
        } 
        return sum;
    }

    int main() {

    	int n;
    	cin >> n;

    	int vector<int> nums;

    	for(int i = 0; i < n * 2; i ++) {
    		int x;
    		cin >> x;
    		nums.push_back(x);
    	}

    	cout << arrayPairSum(nums) << endl;
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
