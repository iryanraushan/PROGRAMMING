#include <iostream>
#include <math.h>
using namespace std;

int main () {
	int ax1, ay1, ax2, ay2;
	int bx1, by1, bx2, by2;
	
	cin >> ax1 >> ay1 >> ax2 >> ay2;
	cin >> bx1 >> by1 >> bx2 >> by2;
	
	int area1 = (ax2 - ax1) * (ay1 - ay2);
	int area2 = (bx2 - bx1) * (by1 - by2);
	
	if (sqrt(pow((ax2 - by1, 2) + pow((by1 - ay2), 2)) >= 0 )
	{
		cout << area1 + area2;
	}
	else 
	{
		int area3 =	(bx2 - ax1)	* (by2 - ay2);
		cout << area3;
	}
}