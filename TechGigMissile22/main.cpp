#include <iostream>

using namespace std;
/*
19 50
02 20
https://www.techgig.com/codegladiators/question/aVVwNytPWGV3U2FocXBXL2IrZFJwQ1FtMTMveXdkRFc5aW5EUVVBZndFbGRBNm1nem9qWlNmM0UweDZaS2R4VQ==/1?msg_type=1
Input Format
The first line of input consists of the launch time in hh mm format separated by space.

The second line of input consists of the travel time for the missile in hh mm format separated by space.



Constraints
00<= hh <=23

00<= mm <=59



*/
int main()
{
    int HH, MM, hh, mm;
    cin >> HH >> MM;
    cin >> hh >> mm;

    int minutes = mm+MM;
    int hours = hh+HH;
    if (minutes > 60){
        minutes -= 60;
        hours += 1;
    }
    if (hours > 24){
        hours -= 24;
    }

    cout << hours << " " << minutes;


    return 0;
}
