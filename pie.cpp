// https://www.spoj.com/problems/PIE/

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
#include<iomanip>
using namespace std;

double circle_area(double r) {
	const double PI = acos(-1.0);
	return PI * r * r;
}


int countPeople(vector<double> &areas, double pie) {

	int ppl = 0;
	for(int i = 0; i < areas.size(); i ++) {

		ppl += (int) (areas[i]/pie);
	}
	return ppl;

}
double largest_area(vector<double> &pie_radius, int people) {
	double left = 0, right = 0;
	vector<double> areas (pie_radius.size());

	for(int i = 0; i <  pie_radius.size(); i ++) {

		areas[i] = circle_area(pie_radius[i]);
		right = max(right,areas[i]);
	}

	for(int i = 0; i <= 100; i ++) {
		double mid = (left + right )/ 2;
		if(countPeople(areas,mid) >= people) {
			left = mid;
		}
		else {
			right = mid;
		}

	}
	return left;
}

int main() {
	int cases, n, f;
	cin >> cases;

	while (cases--) {
		cin >> n >> f;
		vector<double> pie_radius(n);

		for (int i = 0; i < n; i++)
			cin >> pie_radius[i];

		double area = largest_area(pie_radius, f + 1);	// +1 for the host person

		cout << fixed;
		cout << setprecision(4) << area << "\n";
	}
	return 0;
}