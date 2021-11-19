#include "std_lib_facilities.h"

struct Date{

	int y;
	int m;
	int d;
	
};

void init_date(Date& today, int y, int m, int d){

	if (m < 1 || m > 12)
	{
		simple_error("Invalid month!");
	}

	if (d < 1 || d > 31)
	{
		simple_error("Invalid day!");
	}

	today.y = y;
	today.m = m;
	today.d = d;
}


void add_day(Date& today){

	today.d = today.d + 1;

	if (today.d > 31)
	{
		today.m = today.m + 1;
		today.d = 1;
	}

	if (today.m > 12)
	{
		today.y = today.y + 1;
		today.m = 1;
	}
}




int main(){

Date today;
init_date(today, 1978, 6, 25);

Date tomorrow(today);
add_day(tomorrow);



cout << "Today: " << today.y << "." << today.m << "." << today.d << "." << endl;
cout << "Tomorrow: " << tomorrow.y << "." << tomorrow.m << "." << tomorrow.d << "." << endl;



	return 0;
}
