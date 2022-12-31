#include <iostream>
using namespace std;
main()
{
int workingDays;
int holidays;
workingDays = 63;
holidays = 127;
int numberHolidays;
cout << "Enter number of Holidays: ";
cin >> numberHolidays;
int numberWorkingDays;
numberWorkingDays = 365 - numberHolidays;
float time;
int time2,time3,time6;
time = ((numberWorkingDays*workingDays)+(numberHolidays * holidays));
if (time <= 30000)
{
cout << "Tom Sleeps Well " << endl;
time2 = 30000 - time;
time3 = time2/60;
time6 = time2%60;
cout << time3 << " hours and " <<time6 <<" minutes less for play";
}
if (time > 30000)
{
cout << "Tom will run away" << endl;
time2 = time - 30000;
time3 = time2/60;
time6 = time2%60;
cout << time3 << " hours and " << time6 << " minutes for play";
}
}