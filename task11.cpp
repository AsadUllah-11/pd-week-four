#include <iostream>
using namespace std;
main()
{
float speed;
cout << "Enter Speed in kilometer per hour: ";
cin >> speed;
if (speed > 100 )
{
cout << "Halt....YOU WILL BE CHALLENGED!!!";
}
if (speed <= 100) 
{
cout << "Perfect! You're doing good.";
}
}