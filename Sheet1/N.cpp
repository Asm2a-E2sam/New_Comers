
#include <iostream>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char X;
	cin >> X;
    if(int(X)>64&& int(X)<91)   	  
	        cout <<char(X+32);
	else                           
	        cout <<char(X-32);
	return 0;
}
