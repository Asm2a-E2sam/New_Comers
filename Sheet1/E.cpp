#include <iostream>
#include<iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout << fixed << setprecision(9);
	double R,area;
	cin >> R;
	area= 3.141592653 * R * R;
	cout << area;
	return 0;
}
