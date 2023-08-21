#include <iostream>
using namespace std;

int main () {
	
	int * p = new int;
//	cout << &p << endl;
	delete p;     // single element deletion  
	// here one more this .. p is not deleting 
//	cout << &p ;
		
	p = new int[100];
	delete [] p;  // array deletion..
	
//	while (true){
//		int i = 8;
//		cout << i << endl;
//	}
  
//	while (true) {
//		int * p = new int;
//		delete p;// for dynamically delted
//	}
}