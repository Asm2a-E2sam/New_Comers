#include <iostream>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop "Origem" */
using namespace std;
int main(int argc, char** argv) {
	float X, Y;
	cin >> X >> Y;
    if(X>0&&Y>0)           cout << "Q1";
	else if(X<0&&Y>0)      cout << "Q2"; 
	else if(X<0&&Y<0)      cout << "Q3"; 
	else if(X>0&&Y<0)      cout << "Q4"; 
	else if(X==0&&Y==0)    cout << "Origem"; 
	else if(Y==0)          cout << "Eixo X"; 
	else                   cout << "Eixo Y"; 
 
   return 0;
}
