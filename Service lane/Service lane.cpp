// Service lane.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int t;
	cin >> n >> t;
	vector<int> width(n);
	for (int width_i = 0; width_i < n; width_i++) {
		cin >> width[width_i];
	}
	for (int aZero = 0; aZero < t; aZero++) {
		int i;
		int j;
		cin >> i >> j;
		cout << *min_element(width.begin() + i, width.begin() + j + 1) << endl;
	}

    return 0;
}

