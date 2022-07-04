#include <iostream>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



void selection_sort(vector<int>& data) {

	
	for(int i = 0; i < data.size() - 1; i ++) {
		int  min = i; 
		for(int j = i + 1;  j < data.size(); j ++) {
			if(data[j] > data[min]) {

				min = j;
			}
		}
			swap(data[i],data[min]);

	}

}
int main()  {

	vector<int> data = {10,9,8,7,6,5,4,3,2,1,2,2,2,3,3,3};
	selection_sort(data);

	for(int i = 0; i < data.size(); i ++) {
		cout << data[i] << endl;
	}


}