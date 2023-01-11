
#include <iostream>
#include <cmath>
#include<iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout << fixed << setprecision(3);
	float N ;
	cin >> N;
	if(ceil(N)==N && floor(N)==N)     cout << "int " << int(N);
	else                              cout << "float " << int(N) <<" "<< N-(int(N));   
		
	return 0;
}
