#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

 bool isValid (vector<int> &bloomDay,int flowers, int target_bouqets, int days) {
    int adj_flowers = 0;
    int bouqets = 0;

    for(int i = 0; i < bloomDay.size(); i ++) {

        if(bloomDay[i] <= days) {
            adj_flowers ++;

            if(adj_flowers >= flowers) {
                    bouqets ++;
                    adj_flowers = 0;
            }
            if(bouqets == target_bouqets) {
                return true;

            }
        }
        else {

            adj_flowers = 0; 
          }

    }
     return false;   
       
    }
    int minDays(vector<int>& bloomDay, long long m, long long k) {
        if((long long ) bloomDay.size() < m * k) {
            return -1;
        }
        int left = 1;
        int right = *max_element(bloomDay.begin(),bloomDay.end());
        int min_days = 1;

        while(left <= right) {
            int middle = left + (right - left) / 2;
            if(isValid(bloomDay,k,m,middle)) {

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



    vector<int> bloomDay = {7,7,7,7,12,7,7};
    int m = 2;
    int k = 3;
    cout << minDays(bloomDay,m,k) << endl;; 

}