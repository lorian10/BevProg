#include "std_lib_facilities.h"

void swap_v(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
/*void swap_cr(const int& a, const int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}*/

int main(){

	int x = 7;
	int y = 9;
	//swap_v(x, y);  Lefordítja de nem cserél
	swap_r(x, y);
	cout << "value of x: " << x << " value of y: " << y << endl;
	//swap_cr(x, y);
	
	//swap_v(7, 9);
	//swap_r(x, 9); Nem fordítható le
	//swap_cr(7, 9);
	
	
	
	const int cx = 7;
    	const int cy = 9;
    	
    	//swap_v(cx, cy);
    	//swap_r(cx, cy);
    	//swap_cr(cx, cy);
    
	
   
	//swap_v(7.7, 9.9);   
	//swap_r(7.7, 9.9);   
	//swap_cr(7.7, 9.9);
       
	cout << "value of cx: " << cx << " value of cy: " << cy << endl;
	
	double dx = 7.7;
    	double dy = 9.9;
    	
    	//swap_v(dx, dy);
    	//swap_r(dx, dy);
    	//swap_cr(dx, dy);
    	
	//swap_v(7.7, 9.9);   
	//swap_r(7.7, 9.9);   
	//swap_cr(7.7, 9.9);
    	
    	cout << "value of dx: " << dx << " value of dy: " << dy << endl;

	return 0;

}
