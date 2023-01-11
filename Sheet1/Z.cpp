#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double A , B , C , D;
	cin >> A >> B >> C >> D;
	if(B*(log(A)) > D*(log(C)))            cout << "YES";
    else                                   cout << "NO";
	
    return 0;
}
