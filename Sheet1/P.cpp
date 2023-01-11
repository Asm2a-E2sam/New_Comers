
#include <iostream>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int X, f;
	cin >> X;
    if((X-(X%1000))>0) {
        f=(X-(X%1000))/1000;
	    if(f%2==0)  cout << "EVEN";
	    else        cout << "ODD";  	
	}  
	else{
		f=(X-(X%100))/100;
		if(f%2==0)  cout << "EVEN";
		else        cout << "ODD"; 
	}
	        	  
   return 0;
}
