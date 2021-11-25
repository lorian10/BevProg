#include "std_lib_facilities.h"

struct Date{

	int y;
	int m;
	int d;
	
};

void init_day(Date& today, int y, int m, int d){

	if (m < 1 || m > 12)
	{
		error ("Invalid month!");
	}

	if (d < 1 || d > 31)
	{
		error ("Invalid day!");
	}

	today.y = y;
	today.m = m;
	today.d = d;
}


void add_day(Date& dd,int n){

	dd.d = dd.d + n;

	if (dd.d > 31)
	{
		dd.m = dd.m + 1;
		dd.d = 1;
	}

	if (dd.m > 12)
	{
		dd.y = dd.y + 1;
		dd.m = 1;
	}
}




int main(){

Date today;
init_day(today, 1978, 13, 31);
Date tomorrow(today);
add_day(tomorrow,1);



cout << "Today: " << today.y << "." << today.m << "." << today.d << "." << endl;
cout << "Tomorrow: " << tomorrow.y << "." << tomorrow.m << "." << tomorrow.d << "." << endl;



	return 0;
}
