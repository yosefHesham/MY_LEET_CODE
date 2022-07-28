#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



    
    int bsFind(vector<vector<int>>& indices, int target) {

        int left = 0;
        int right = indices.size() - 1;

        int position = -1;

        while(left <= right) {

            int middle = left + (right - left) / 2;
            if(indices[middle][0] < target ) {
                left = middle + 1;
            }
            else if(indices[middle][0] >= target) {

                right = middle - 1;
                 position = middle;
            }
        }

        return position;


    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {


        vector<int> rightIntervals(intervals.size(), -1);
        vector< vector<int >>indices;

        for(int i = 0; i < intervals.size(); i ++) {
            indices.push_back({intervals[i][0], i});

        }

        sort(indices.begin(),indices.end());


        for(int i = 0; i < intervals.size(); i ++) {

         int idx = bsFind(indices,intervals[i][1]);
         if(idx !=-1) {

            rightIntervals[i] = indices[idx][1];
         }

        }

        return rightIntervals;
        
    }


    int main() {

       vector< vector<int> >  intervals =  {{3,4},{2,3},{1,2}};

       vector<int> rightIntervals = findRightInterval(intervals);

       for(int i = 0; i < rightIntervals.size(); i ++) {

        cout << rightIntervals[i] << " ";
       }
       cout << "\n";


    }