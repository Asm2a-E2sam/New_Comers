#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int A , B , C;
	char S , Q;
	cin >> A >> S >> B >> Q >> C;
    switch(S){
       case '+':
	       if(A+B==C) cout << "Yes";
	       else       cout << (A+B) ;  
		   break;	
       case '-':
	       if(A-B==C) cout << "Yes";
	       else       cout << (A-B) ;
	       break;
       case '*':
	       if(A*B==C) cout << "Yes";
	       else       cout << (A*B) ;	
	       break;
	   case '/':
	       if(A/B==C) cout << "Yes";
	       else       cout << (A/B) ; 
		   break;   
	}   	  
   return 0;
}
