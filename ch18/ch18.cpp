#include "std_lib_facilities.h"


void f(int a[], int n){

	int la[10];
	for (int i = 0; i < n; ++i){
		la[i] = a[i];
	}
	
	for (int i = 0; i < n; ++i){
		cout << la[i] << " ";
	} 
	cout << endl;
	
	int* p = new int[n];
	for (int i = 0; i < n; ++i){
		p[i] = a[i];
	}
	
	for (int i = 0; i < n; ++i){
		cout << p[i] << " ";
	} 
	cout << endl;
	
	delete[] p;

}


 int main(){
 	int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
 	int aa[10];
 	f(ga,10);
 	int factorial=1;
 	for (int i=1;i<11;++i){
 		factorial *= i;
 		aa[i-1]=factorial;
 	}
 	f(aa,10);
 	return 0;
 }