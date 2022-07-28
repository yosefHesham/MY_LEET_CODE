#include <algorithm>
#include <bits/stdc++.h>
using namespace std;





int findFirst(vector<int> &nums, int target) {

        int first = 0;
        int last = nums.size() - 1;

        while(first < last) {
            int middle = first + (last - first) / 2;
            if(nums[middle] < target) {

                first = middle + 1;
            }
            else if(nums[middle] > target) {
                last = middle - 1;
            }
            else {
                last = middle;
            }
        }

        if(first < 0 || last >= nums.size()) {
            return -1;
        }
        return nums[first] == target? first: -1;

}

int findLast(vector<int>&nums, int target) {


        int first = 0;
        int last = nums.size() - 1;

        while(first < last) {

            int middle = first + ((last - first) / 2 ) + 1;

            if(nums[middle] < target) {
                first = middle + 1;
            }
            else if(nums[middle] > target) {
                last = middle - 1;
            }
            else {

                first = middle;
            }
        }
        if(first < 0 || first >= nums.size()) {
            return - 1;
        }

        return nums[first] == target? first: - 1;



}



vector<int> searchRange(vector<int>& nums, int target) {

    return {findFirst(nums,target),findLast(nums,target)};
     
}   


    int main() {


        vector<int> nums = {1};
        vector<int>  res = searchRange(nums,1);
        cout << res[0] << " " << res[1] << endl;
    }