#include <iostream>
#include<cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int A , B , C , D;
	cin >> A >> B >> C >> D;
    if (max(A, C) <= min(B, D))     cout << max(A, C) << " " << min(B, D) ;
    else                                cout << -1 ;
   return 0;
}
