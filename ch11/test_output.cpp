#include "std_lib_facilities.h"


int main()
{
	int birth_year=2002;
	cout << birth_year << "\t(decimal)\n"
	<< hex << birth_year << "\t(hexadecimal)\n"
	<< oct << birth_year << "\t(octal)\n";


	cout<<dec<<showbase<<19<<"\t(decimal)\n"
	<<hex<<19<<"\t(hexadecimal)\n"
	<<oct<<19<<"\t(octal)\n";

	int a,b,c,d;

	cin >> a >>oct >> b >>hex>> c >> d;
	cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;

	cout<< noshowbase<<dec;

	cout << defaultfloat << 123.456789 <<"\t(defaultfloat)\n"
	<< fixed << 1234567.89 <<"\t(fixed)\n"
	<< scientific << 1234567.89 <<"\t(scientific)\n";

	cout<<"Last name\t"<<"First name\t"<<"Tel.num\t\t"<<setw(12)<<"E-mail address\t \n";
	cout<<"Péter\t"<< setw(20) <<"Horváth\t"<<setw(12)<<"06301234567\t"<< setw(12) <<"h@gmail.com\t \n";
	cout<<"Péter\t"<< setw(20) <<"Forgács\t"<<setw(12)<<"06309876554\t"<<setw(12) <<"f@gmail.com\t \n";
	cout<<"Botond\t"<< setw(20) <<"Székely\t"<<setw(12)<<"06301221344\t"<<setw(12) <<"sz@gmail.com\t \n";
	cout<<"Dominik\t"<< setw(20) <<"Fábián\t"<<setw(12)<<"06304572425\t"<<setw(12) <<"fa@gmail.com\t \n";
	cout<<"István\t"<< setw(20) <<"Borók\t"<<setw(12)<<"063034512367\t"<<setw(12) <<"b@gmail.com\t \n";

	return 0;
}	
