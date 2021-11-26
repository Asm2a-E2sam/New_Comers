#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int A, B , C ;
	cin >> A>> B >> C;
	if(A>B && A>C){
		if(B>C) cout << C <<" "<< A ;
		else cout << B <<" "<< A ;
	}  
	else if(B>C) {
		if(C> A)  cout << A <<" "<< B ;
		else   cout << C <<" "<< B ;
	} 
	else 
	    if(B>A) cout << A <<" "<< C;
	    else cout << B <<" "<< C;
	
	return 0;
}
