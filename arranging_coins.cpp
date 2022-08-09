#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



      long long calculateSum(int row) {

        return  ((1 + row) * row) / 2;

    }

     int arrangeCoins(int n) {
        
        int left = 1;
        int right = n;
        int position = 0;
        while(left <= right) {

               int middle = left + (right - left) / 2;
               if(calculateSum(middle) > n) {

                    right = middle - 1;
                    position = middle - 1;
               } 
               else if(calculateSum(middle) == n){
                position = middle;
                break;

               }
               else {
                left = middle + 1;
                position = middle;
               }



        }
        return position;
    }

  

    int main() {

        cout << arrangeCoins(8) << endl;

    }