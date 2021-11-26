#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	long long A,B,C,D,X;
	
	cin >> A >> B >> C >> D ;
	X=(A*B)-(C*D);
	cout << "Difference = " << X;
	return 0;
}
