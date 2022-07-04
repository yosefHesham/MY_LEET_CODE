




#include<vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
    
void insertion_sort( vector<double>& dist) {

    for(int i = 1; i < dist.size(); i ++) {
        int j = i - 1;
        int key = i;
        while(j >= 0 && dist[j] > dist[key]) {
                j --;
        }
       swap(dist[key],dist[j + 1]);
    }

}

int main() {


    vector<int> dist = {5,4,3,3,3}, speed = {1,1,5,3,1};
    vector<double> times;
        for(int i = 0; i < dist.size(); i ++) {
            double time = (double) dist[i] / speed[i];
            times.push_back(time);
        }

    sort(times.begin(),times.end());
    for(int i = 0; i < times.size(); i ++) {
        cout << times[i] << endl;
    }
  
int cnt = 0;
  for(int i = 0; i < times.size(); i ++) {
    cout << "I : " << i << "times[i]: " << times[i] << endl; 
          if(i < times[i]) {
              cnt ++;
          }
      }

   
cout << cnt << endl;




}