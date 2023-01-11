#include <iostream>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop "Origem" */
using namespace std;
int main(int argc, char** argv) {
	double X;
	cin >> X;
    if(X>= 0 && X<=25)      cout << "Interval [0,25]";
	else if(X>25&& X<=50)   cout << "Interval (25,50]";
	else if(X>50&& X<=75)   cout << "Interval (50,75]";
	else if(X>75&& X<=100)  cout << "Interval (75,100]"; 
	else                    cout << "Out of Intervals"; 
   return 0;
}
