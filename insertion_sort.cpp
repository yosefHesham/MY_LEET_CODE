#include <iostream>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



void insertion_sort(vector<int>& data) {

	for(int i = 1; i < data.size(); i ++) {
		int j = i - 1;
		int key = data[i];
		while(j >= 0 && data[j] > key) {
			data[j + 1] = data[j];
			j --;
		}
		data[j + 1] = key;
	}


}
int main()  {

	vector<int> data = {4,1,2};
	// insertion_sort(data);
	sort(data.begin(),data.end());	
	int minAbs = abs(data[0] - data[1]);
	vector<vector<int>> result;
      result.push_back({data[0],data[1]});

            for(int i = 1; i < data.size(); i ++) {
                if(abs(data[i] - data[i + 1]) == minAbs) {
                    result.push_back({data[i], data[i + 1]});
                }
                else {
                	continue;
                }
            }
            cout << result.size()<< endl;

            for(int i = 0; i < result.size(); i ++) {
            		cout << "[ " << result[i][0] << ", " << result[i][1] << " ]" << endl; 
            	
            }

}