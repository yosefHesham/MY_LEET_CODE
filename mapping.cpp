// https://www.spoj.com/problems/PIE/

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <bits/stdc++.h>
#include<iomanip>
using namespace std;




int main() {

	map<string, int>::iterator it;
unordered_map<int, int> ints = {{3,0}, {3,1}};
for (auto const& x : ints)
{
    std::cout << x.first  // string (key)
              << ':' 
              << x.second // string's value 
              << std::endl;
}
	return 0;
}