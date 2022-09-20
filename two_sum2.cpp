
    #include <algorithm>
#include <bits/stdc++.h>
using namespace std;

   vector<int> twoSum(vector<int>& numbers, int target) {
        int n =(int) numbers.size();
        vector<int> result;
        
        for(int i = 0; i < n; i ++) {
            
            int left = i + 1;
            int right = n - 1;
            while(left <= right) {
             int middle = left +  (right - left) / 2;
                if(numbers[i] + numbers[middle] == target) {
                    result.push_back(i + 1);
                    result.push_back(middle + 1);
                    break;
                }
                else if(numbers[i] + numbers[middle] > target) {
                    right = middle - 1;
                }
                else {
                    left = middle + 1;
                }
                
            }
        }
        return result;
    }

    


       

    int main() {
        vector<int> nums = {2,3,4,7,11};
        int k = 5;
        cout << twoSum(nums,k) << endl;



    }