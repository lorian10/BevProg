#include "std_lib_facilities.h"


enum class Month{

	jan = 1,
	feb,
	mar,
	apr,
	may,
	jun,
	jul,
	aug,
	sep,
	oct,
	nov,
	dec
};

Month operator++(Month& m)
{
	m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}
Month operator--(Month& m) 
{ 
	m = (m==Month::jan) ? Month::dec : Month(int(m)-1);
	return m;
}


class Year {
	static const int min = 1800;
	static const int max = 2200;

public:

	class Invalid { };
	Year(int x):y{x} 
	{
		if (x<min || max<=x) throw Invalid{}; 
	}
	int year() { return y; }
	void increment() { y++; }
	void decrease() {y--;}
		
private:

	int y;

	};


Year operator++(Year& year)
{
	year.increment();
}
Year operator--(Year& year){
	year.decrease();
}

class Date{
public:
	class Invalid{};
	Date(Year y, Month m, int d): y(y), m (m), d(d){

		if (d < 1 || d > 31) throw Invalid{};
	};
	

	int month(){
		return int(m);
	}
	 
	int day(){
		return d;
	}

	int year(){
		return y.year();
	}
	void add_day(int n);

private:
	int d;
	Year y;
	Month m;
};
void Date::add_day(int n){
	
     	d += n;
     	while( d < 1  || d > 31 ){
	if (d > 31){
		 ++m; d -= 31;
		 if (m == Month::jan)
	    	 {
	    		++y;
	    	 }
		  }     
	if (d < 1){
		 --m; d += 31;
		 if (m == Month::dec)
		        --y;
		  }     
		 }     


}
int main(){
try{
	Date today(Year{1978},Month::dec,31);
	cout << "Today: " << today.year() << "." << today.month() << "." << today.day() << "." << endl;

	Date tomorrow = today;
	tomorrow.add_day(1);
	cout << "Tomorrow: " << tomorrow.year() << "." << tomorrow.month() << "." << tomorrow.day() << "." << endl;	

	return 0;
}
catch(Date::Invalid){
	error("Invalid date!");
}

}
