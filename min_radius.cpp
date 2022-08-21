#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

 bool isValid (vector<long long> houses,vector<long long>& heaters, long long radius) {

    int house = 0;
    int covered = 0;

    for(long long i = 0; i < heaters.size(); i ++) {

        while(house < houses.size()) {

            if(heaters[i] + radius >= houses[house]) {
                covered ++;
                house ++;
            }
            else {
                break;
            }
        }
    }
    if(covered == houses.size()) {
        return true;
    }
    return false;
    
       
    }
    int findRadius(vector<long long>& houses, vector<long long>& heaters) {
      
        long long left = 0;
        long long right = 1e9;
        int min_days = 1;
        
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        while(left <= right) {
            long long middle = left + (right - left) / 2;
            if(isValid(houses,heaters,middle)) {

                min_days = middle;
                right = middle - 1;
            }
            else {
                left = middle + 1;
            }
        }
        return min_days;
        
    }
int main() {


  vector<long long> houses =   {1,2,3};
  vector<long long> heaters = {2};

  

  cout << findRadius(houses,heaters) << endl;

}