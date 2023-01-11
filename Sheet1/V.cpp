#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int A , B ;
	char S;
	cin >> A >> S >> B ;
	switch(S){
		case '<':  
		    if(A<B)    cout <<"Right";
		    else       cout <<"Wrong";  
		    break;
		case '>':
			if(A>B)    cout <<"Right";
		    else       cout <<"Wrong";
		    break;
		case '=':
	        if(A==B)    cout <<"Right";
		    else       cout <<"Wrong";
			break;	
	}
	
    	return 0;
}
