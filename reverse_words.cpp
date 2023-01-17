#include <iostream>
using namespace std;

int main() {



	string s = "God Ding";
	string x = "x ";

	int left = 0;

	for(int i = 0; i < s.size(); i ++) {

		if(s[i] == x[1] || i == s.size() - 1) {
			int right = i == s.size() - 1 ? i : i - 1;
			while(left < right) {
				swap(s[left],s[right]);
				left ++;
				right --;
			}
			left = i + 1;


		}
		else {
			continue;
		}
	}

	cout <<  s << endl;

	return 0;
}