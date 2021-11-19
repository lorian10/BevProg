#include "std_lib_facilities.h"


class Date{
private:
	int y, m, d;
public:
	Date(int yy, int mm, int dd){

		if (mm < 1 || mm > 12)
		{
			simple_error("Invalid month!");
		}

		if (dd < 1 || dd > 31)
		{
			simple_error("Invalid day!");
		}

		y = yy;
		m = mm;
		d = dd;
	};


	void add_day(int n)
	{
    d += n;
    
    while(d < 1 || d > 31){

	    if (d > 31){ 
	    	++m;
	    	d -= 31;
	    }

	    if (d < 1){
	    	--m;
	    	d += 31;
	    }
	}


    while(m < 1 || m > 12){
	    if (m > 12){
	    	++y;
	    	m -= 12;
	    }


	    if (m < 1){
	    --y;
	    m += 12;
		}
	}};



	int month(){
		return m;
	}

	int day(){
		return d;
	}

	int year(){
		return y;
	}
};


int main(){


	Date today(1978,6,25);
	cout << "Today: " << today.year() << "." << today.month() << "." << today.day() << "." << endl;

	Date tomorrow = today;
	tomorrow.add_day(1);
	cout << "Tomorrow: " << tomorrow.year() << "." << tomorrow.month() << "." << tomorrow.day() << "." << endl;	


	return 0;
}
