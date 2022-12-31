#include <iostream>
using namespace std;
void discount (string countryName, float ticketPrice);
main()
{
while(true)
{
string countryName;
cout << "Enter Country Name in lower case: ";
cin >> countryName;
float ticketPrice;
cout << "Enter Ticket Price: ";
cin >> ticketPrice;
discount(countryName, ticketPrice);
}
}
void discount (string countryName, float ticketPrice)
{
float discount;
float discount2;
if (countryName == "pakistan")
{
discount = (0.05 * ticketPrice);
discount2 = ticketPrice - discount;
cout << "Discounted Price is " << discount2 << endl;
}
if (countryName == "ireland")
{
discount = ( 0.1 * ticketPrice);
discount2 = ticketPrice - discount;
cout << "Discounted Price is " << discount2 << endl;
}
if (countryName == "india")
{
discount = ( 0.2 * ticketPrice);
discount2 = ticketPrice - discount;
cout << "Discounted Price is " << discount2 << endl;
}
if (countryName == "england")
{
discount = (0.3*ticketPrice);
discount2 = ticketPrice - discount;
cout << "Discounted Price is " << discount2 << endl;
}
if (countryName == "canada")
{
discount = (0.45*ticketPrice);
discount2 = ticketPrice - discount;
cout << "Discounted Price is " << discount2 << endl;
}
}
