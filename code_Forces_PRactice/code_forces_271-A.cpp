#pragma comment(linker, "/stack:16000000")
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <map>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <set>
#include <utility>

using namespace std;

typedef long long ll;
typedef long double ld;

const double eps = 1e-10;

ll sqr(ll a) {
	return a * a;
}

struct pupil {
	ll f, x;
};

bool beautiful(int year) {
	int f1 = year % 10;
	year /= 10;
	int f2 = year % 10;
	year /= 10;
	int f3 = year % 10;
	year /= 10;
	int f4 = year;
	if ((f1 != f2) && (f1 != f3) && (f1 != f4) && (f2 != f3) && (f2 != f4) && (f3 != f4)) {
		return true;
	} else {
		return false;
	}
}

int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	int x;
	cin >> x;
	++x;
	while (!(beautiful(x))) {
		++x;
	}
	cout << x << endl;
	return 0;
}