
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

   