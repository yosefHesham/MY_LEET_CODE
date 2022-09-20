#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

  int findMissing(int current,int expected) {
        
        return current - expected;
    }
    int findKthPositive(vector<int>& arr, int k) {
        if(k < arr[0]) {
            return k;
        }
        int missing = 0;
        
        int left = 0;
        int right = (int) arr.size() - 1;
        
        while(left <= right) {
            int middle = left +  (right - left) / 2;
            missing = findMissing(arr[middle], middle + 1);
            if( missing < k) {
                left = middle + 1;
            }
            else {
                right = middle - 1;
            }
            
        }
        return left + k;
        
      
    }
    


       

    int main() {
        vector<int> nums = {2,3,4,7,11};
        int k = 5;
        cout << findKthPositive(nums,k) << endl;



    }