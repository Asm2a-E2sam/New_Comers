#include <iostream>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char X;
	cin >> X;
	
	if(int(X)>47&&int(X)<58)  	cout <<"IS DIGIT";
  	else  
	  if(int(X)>64&& int(X)<91)   	  cout <<"ALPHA\nIS CAPITAL";
	  else                            cout <<"ALPHA\nIS SMALL";
	return 0;
}
