#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



     int guessNumber(int n) {
        int left = 1;
        int right = n;
        int result = 0;
        while(left <= right) {
            
            int middle = left + (right - left) / 2;
            
            if(guess(middle) == -1) {
                right = middle - 1;
            }
            else if(guess(middle) == 1) {
                left = middle + 1;
            }
            else {
                result = middle;
                break;
            }
        }
        return result;
    }

    int main() {

        cout << arrangeCoins(8) << endl;

    }