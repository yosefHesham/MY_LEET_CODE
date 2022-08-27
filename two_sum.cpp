#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

 
 
  vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> indices;
        for(int i = 0; i < nums.size(); i ++) {
            indices.insert({nums[i],i});
        }
        
        for(int i = 0; i < nums.size(); i++) {
        
        int search = target - nums[i];
               if( indices.find(search) != indices.end() && i != indices[search]  )
                return {i,indices[search]};
        }
        
        return {};
        
    }
   
int main() {
  


}