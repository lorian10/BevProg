#include "std_lib_facilities.h"
int main () {

    string first_name = "";
    cout << "Enter the name of the person you want to write to.\n";
    cin >> first_name;

    cout << "Dear " << first_name << "," << endl;

    cout << "How are you?\n";
    cout << "I'm fine. I miss you.\n";

    cout << "Enter another friend's name\n";
    string friend_name="";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";

    char friend_sex=0;
    cout << "Enter your friend's sex! ( m for male , f for female)\n";
    cin >> friend_sex;

    if (friend_sex == 'm')
        cout << "If you see "<< friend_name << " please ask him to call me.\n";
    if (friend_sex == 'f')
        cout << "If you see "<< friend_name << " please ask her to call me.\n";

    int age=0;
    cout << "Enter an age\n";
    cin >> age;

    cout << "I hear you just had a birthday party and you are " << age << " years old.\n";
    if  ( age <= 0 || age >=110)
        simple_error("you are kidding!");
    if  ( age < 12)
        cout << "Next year you will be: " << age+1  << endl;
    else if  (age == 17 )
        cout << "Next year you will be able to vote.\n";
    else if  (age > 70)
        cout << "I hope you are enjoying retirement.\n";    
    
    cout << "Yours sincerely,\n\nLóránt Antal\n";
    

    return 0;
}
