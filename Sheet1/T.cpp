#include <iostream>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int A, B , C ;
	cin >> A>> B >> C;
	if(A>B && A>C){
		if(B>C) cout << C <<"\n"<< B <<"\n"<< A <<"\n"<< "\n"<<  A <<"\n"<< B <<"\n"<< C;
		else    cout << B <<"\n"<< C <<"\n"<< A <<"\n"<< "\n"<<  A <<"\n"<< B <<"\n"<< C;
	}  
	else if(B>C) {
		if(C> A)  cout << A <<"\n"<< C <<"\n"<< B <<"\n"<< "\n"<<  A <<"\n"<< B <<"\n"<< C;
		else      cout << C <<"\n"<< A <<"\n"<< B <<"\n"<< "\n"<<  A <<"\n"<< B <<"\n"<< C;
	} 
	else 
	    if(B>A) cout << A <<"\n"<<B<<"\n"<< C <<"\n"<<"\n"<<  A <<"\n"<< B <<"\n"<< C;
	    else    cout << B <<"\n"<<A<<"\n"<< C <<"\n"<<"\n"<<  A <<"\n"<< B <<"\n"<< C;
	
	return 0;
}
