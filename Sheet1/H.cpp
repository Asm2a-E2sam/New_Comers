#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float A , B ;
	cin >> A >> B ;
	cout <<"floor " << A <<" / "<< B <<" = "<<floor(A/B) <<"\nceil " << A <<" / "<< B <<" = "<<ceil(A/B)<<"\nround " << A <<" / "<< B <<" = "<<round(A/B);
	return 0;
}
