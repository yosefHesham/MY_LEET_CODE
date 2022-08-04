#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//     int countTriangles (vector<int> &nums) {

//         sort(nums.begin(),nums.end());
//         int counter = 0;
      
//         for(int i = 0; i < nums.size(); i ++) {
//             int left = i;
//             int right = nums.size() - 1;
//             int middle = 0;


//             while(right - left >= 2) {
//              middle = left + (right - left) /2;
//             if( (right - left) % 2) {
//                 if(nums[left] + nums[middle + 1] > nums[right]) {
//                     counter ++;
//                 }
//             }
            

//                 if(nums[left] + nums[middle] > nums[right]) {
//                         counter ++;
//                         right --;

//                 }
//                 else if(nums[left] + nums[middle] <= nums[right]) {
//                   right --;
                
            
//         }


//     }
// }
//     return counter;
// }

int findIndex(vector<int> &nums, int left, int target) {

        int position = nums.size();
        int right = (int) nums.size() - 1; 

        while(left <= right) {

            int middle = left + (right - left) / 2;
            if(nums[middle] < target) {

                left = middle + 1;
            } 
            else {

                right = middle - 1;
                position = middle;
            }


        }


        return position;

} 
 int countTriangles (vector<int> &nums) {

        sort(nums.begin(),nums.end());
        int counter = 0;
      
        for(int i = 0; i < nums.size() - 2; i ++) {
         for(int j = i + 1; j < nums.size() - 1 && nums[i] != 0; j ++) {

            int targetIndex = findIndex(nums,j + 1,nums[i] + nums[j]);
             counter += targetIndex - j - 1;

         }  


    }

    return counter;
}


    int main() {

        vector<int> nums = {4,2,3,4};

        int res = countTriangles(nums);
        cout << res << endl;


    }