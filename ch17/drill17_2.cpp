#include "std_lib_facilities.h"


 int main(){
 	int a = 7;
 	int* p1 = &a;
 	cout << "p1: " << p1 << endl;
 	cout << "p1: " << *p1 << endl;
 	
 	int* p2 = new int[7] {1, 2, 4, 8, 16, 32, 64};
 	cout << "p2:" <<endl;
	for(int i=0;i<7;++i){
	cout << p2[i] << ",";	 		
 	}
 	cout << endl;
 	int* p3 =p2;
 	p1=p2;
 	p3=p2;
 	cout << "p1: " << p1 << " *p1: " << *p1 << endl;
 	cout << "p2: " << p2 << " *p2: " << *p2 << endl;
 	
 	delete[] p2;
 	p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

	p2 = new int[10];
	
	for (int i = 0; i<10; ++i)
        	p2[i] = p1[i];
        
       
        vector<int> v1 = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
        vector<int> v2;
        for (int i = 0; i < v1.size(); ++i)
        	v2.push_back(v1[i]);
 	cout << v2[2] << endl;
 	
 	return 0;
 }
