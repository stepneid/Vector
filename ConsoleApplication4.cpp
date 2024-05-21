#include <iostream>
#include <vector> 
#include <cmath>
using namespace std;
int main()
{
	vector<int> v{ 1, 2, 3, 4 };
	v += 10;
	for (const int ele : v) {
		cout << ele << " ";
		cout << "\n";
	}
	v /= 2;
	for (const int ele : v) {
		cout << ele << " ";
	}
	return 0;
}
