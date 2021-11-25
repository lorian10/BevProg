#include "std_lib_facilities.h"

class Date {
	int y, m, d;
public:
	Date(int yy, int mm, int dd);   
    	void add_day(int n);            
    	int month() const {return m;}
    	int day() const {return d;}
    	int year() const {return y;}
};

Date::Date(int yy, int mm, int dd) 
{
	if (dd < 1 || dd > 31) error("Invalid day");
	if (mm < 1 || mm > 12) error("Invalid month");

	y = yy;       
	m = mm;
	d = dd;
}

void Date::add_day(int n){
	
     	d += n;
     	while( d < 1  || d > 31 ){
	if (d > 31){
		 ++m; d -= 31; }     
	if (d < 1){
		 --m; d += 31; }     
		 }
	while ( m < 1 || m > 12){	 
	if (m > 12){
	 	++y; m -= 12; }      
	if (m < 1){
		 --y; m += 12; }      
 }
}
int main(){
	try{
	
    	Date today(1978, 12, 31);

	Date tomorrow(today);
    	tomorrow.add_day(-70);
    	
    	cout << "Today: " << today.year() <<"." << today.month() << "."<<today.day()<< endl;
	cout << "Tomorrow: " << tomorrow.year()<<"." << tomorrow.month() << "."<<tomorrow.day()<< endl;

    	return 0;
    	
	}
	
	catch(exception& e)
	{
    		cerr << e.what() << '\n';
    		return 1;
	}
	
	catch(...)
	{
    		cerr << "Unknown exception!\n";
    		return 2;
	}
}
