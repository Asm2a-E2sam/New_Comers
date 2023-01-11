#include <iostream>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop "Origem" */
using namespace std;
int main(int argc, char** argv) {
	int N;
	cin >> N;
    cout << N/365 << " years\n" << (N%365)/30 << " months\n" << (N%365)%30 << " days";
 
   return 0;
}
