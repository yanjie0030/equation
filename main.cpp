#include<iostream>
#include<math.h>
#include<cmath>
#include<stdio.h>
using namespace std;
int main() {
	double a, b, c, d, e, f, x, y;
	cout << "请按照ax + by = c   dx + ey = f格式输入" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	cout << "d=";
	cin >> d;
	cout << "e=";
	cin >> e;
	cout << "f=";
	cin >> f;
	x = (c * e - b * f) / (a * e - b * d);
	y = (c * d - a * f) / (b * d - a * e);
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
}
