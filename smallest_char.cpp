
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

   

  
    char nextGreatestLetter(vector<char>& letters, char target) {
        int position = -1;


            int left = 0;
            int right = (int) letters.size() - 1;

            while(left <= right) {

                int middle = left + (right - left) / 2;

                if(letters[middle] > target){
                    position = middle;
                    right = middle - 1;
                }
                else {
                    left = middle + 1;
                }
            }

       return position != -1 ? letters[position] : letters[0]; 
        
    }
int main() {

    char target = 'z';
    vector<char> letters = { 'c','f','j'};

    cout << nextGreatestLetter(letters,target) << endl;



}