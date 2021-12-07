#include "std_lib_facilities.h"

void f(vector<int> a){
		
	vector<int> lv(a.size());
	lv = a;
	for (int i = 0; i < a.size(); ++i){
		cout << lv[i] << " ";
	} 
	cout << endl;
	
	vector<int> lv2 = a;
	for (int i = 0; i < a.size(); ++i){
		cout << lv2[i] << " ";
	} 
	cout << endl;

}

int main(){

	vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	f(gv);
	vector<int> vv;
	int factorial=1;
 	for (int i=1;i<11;++i){
 		factorial *= i;
 		vv.push_back(factorial);
 	}
	f(vv);

	return 0;

}
