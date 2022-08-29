#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

 bool isPerfectSquare(int num) {
        long long  left = 1;
        long long right = num;
        bool found = false;
        while(left <= right) {
            long long middle = left + (right - left ) /2;
            
            if(middle * middle == num ) {
                found = true;
                break;
            }
            else if(middle * middle > num) {
                
                right = middle - 1;
            }
            else {
                left = middle + 1;
            }
        }
        return found;
    }

   
int main() {
    cout << isPerfectSquare(16) << endl;


}