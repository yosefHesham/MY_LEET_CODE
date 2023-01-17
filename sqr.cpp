#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

 
 double calcSquare(double divisor) {

    return (divisor * divisor);


 }

 double mySqrt(int x) {
    double EPS = 1e-9;

    double left = 1;
    double right = x;

    while(right - left > EPS) {

        double mid = left + (right - left) / 2;

        if(calcSquare(mid) - x < 0) {
            left = mid;
        }
        else {
            right = mid;
        }
    }
    return (int) (left + EPS);


 }
   
int main() {
  

  cout << mySqrt(20) << endl;

}