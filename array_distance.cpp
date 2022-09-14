
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        sort(arr2.begin(),arr2.end());
        int count = 0;
        
        for(int i = 0; i < arr1.size(); i ++) {
            int left = 0;
            int right = arr2.size() - 1;
            bool isValid = true;
            while(left <= right){       
            int mid = left + (right - left)/2;
            if(abs(arr2[mid] - arr1[i]) <= d){
                isValid =  false;
                break;
            }
            else if(arr2[mid] < arr1[i]){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
            
        }
            if(isValid) {
                count ++;
            }
    }
        return count;
}

   
int main() {


}