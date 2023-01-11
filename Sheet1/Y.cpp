#include <iostream>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	long long A , B , C , D ,X;
	cin >> A >> B >> C >> D;
	X=((A%100)*(B%100)*(C%100)*(D%100))%100;
	if(X>9)                cout << X;
	else if(X<9&&X>0)      cout << "0" << X;
	else                   cout << "00" ;
    return 0;
}
