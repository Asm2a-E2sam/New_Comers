#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	long long N,M;
	cin >> N >> M;
	cout << (N%10)+(M%10); 
	return 0;
}
