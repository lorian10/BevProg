#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a){

	for(int i=0;i<10;++i)
		os<< a[i] << " ";	
	os << endl;
}
void print_array(ostream& os, int* a, int n){
	for(int i=0;i<n;++i)
		os<< a[i] << " ";
	os << endl;		
}
void print_vector(ostream& os, vector<int> v, int n){
	for(int i = 0; i < n; ++i){
		os << v[i] << " "; }
	os << endl;
			
}


int main(){
	int* a=new int[10];
	
	for(int i=0;i<10;++i)
		cout << a[i] << " ";
		
	cout << endl;
 	
	delete[] a;
	int* b=new int[10];
	for(int i=0;i<10;++i)
		b[i]=100+i;
		
	print_array10(cout,b);
	delete[] b;
	int* c=new int[11];
	for(int i=0;i<11;++i){
		c[i]=100+i;
		cout << c[i] << " ";
	}
	cout << endl;	
	delete[]c;
	int* d=new int[20];
	for(int i=0;i<20;++i){
		d[i]=100+i;
	}
	print_array(cout ,d,20);
	delete[]d;
	
	
	vector<int> u;
	for(int i=0;i<10;++i)
		u.push_back(100+i);
	
	print_vector(cout,u,10);
	
	vector<int> u2;
	for(int i=0;i<11;++i)
		u2.push_back(100+i);
	
	print_vector(cout,u2,11);
	
	vector<int> u3;
	for(int i=0;i<20;++i)
		u3.push_back(100+i);
	
	print_vector(cout,u3,20);		
	
	return 0;
}

