 #include <algorithm>
#include <bits/stdc++.h>
using namespace std;

    int peakIndexInMountainArray(vector<int>& arr) {
        
    map<int,int> indices;
        
        for(int i = 0; i < arr.size(); i ++) {
            
          indices.insert(make_pair(arr[i], i));
        }
        
        sort(arr.begin(),arr.end());
        
        return indices[arr[arr.size() - 1]];
    }

    int main() {

        vector<int > nums = {0,1,0};
        cout << peakIndexInMountainArray(nums) << endl;

    }