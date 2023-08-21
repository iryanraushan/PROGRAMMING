#include <iostream>
using namespace std;


//very bad practise dont do it ..... 
int& fun (){
	int i = 7;
	return i;
}
int* fun2(){
	int c=9;
	return &c;
}
int main (){
	int & p = fun();
	cout << p << endl;
	
	int * q = fun2();
	cout << q << endl;
}