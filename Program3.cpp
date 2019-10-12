// Increment content of a variable using pointers

#include<iostream>

using namespace std;
int main(){
	int a = 10;
	int* p = &a;
	cout << ++p << endl; 
	return 0;
}

