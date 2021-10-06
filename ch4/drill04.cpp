#include "std_lib_facilities.h"
int main(){

    double number;
    double sum;
    string unit="";
    vector <double> values;
    constexpr double cm_to_m=100;
    constexpr double inch_to_cm=2.54;
    constexpr double ft_to_inch=12;

    
    while ( cout << "Enter a number and a unit (cm ,m , in, ft , if you want to leave enter |)\n" && cin >> number >> unit){

        if (unit == "m"){
                values.push_back(number);
        }
        else if(unit == "cm"){
                number =number/cm_to_m;
                values.push_back(number);
                } 
        else if(unit == "in"){
                number =number*inch_to_cm/cm_to_m;
                values.push_back(number);
                }
        else if(unit == "ft"){
                number = number*ft_to_inch*inch_to_cm/cm_to_m;
                values.push_back(number);
                }
            else
                cout << "Unsupported unit\n";
    }
    for(double num:values){
        sum+=num; 
        }
    sort(values);
    cout << "The smallest so far : " << values[0] << " m" << endl;
    cout << "The largest so far : " << values[values.size()-1] << " m"  << endl;
    cout << "The sum of values :" << sum << " m" << endl;
    cout << "The number of values :" << values.size() << endl;
    cout << "The values:\n";
    for(double num:values)
        cout << num << endl;



    return 0;
}