#include <iostream>
using namespace std;
main()
{
float redRose;
float whiteRose;
float tulips;
redRose = 2.00;
whiteRose = 4.10;
tulips = 2.50;
int numberRed;
int numberWhite;
int numberTulips;
cout << "Enter total number of Red Roses: ";
cin >> numberRed;
cout << "Enter total number of White Roses: ";
cin >> numberWhite;
cout << "Enter total number of Tulips: ";
cin >> numberTulips;
float redPrice;
float whitePrice;
float tulipsPrice;
redPrice = numberRed * redRose;
whitePrice = numberWhite * whiteRose;
tulipsPrice = numberTulips * tulips;
float originalPrice;
originalPrice = redPrice + whitePrice + tulipsPrice;
cout << "Orginal Price: " << originalPrice << endl;
if (originalPrice > 200)
{
float discount;
discount = 0.2 * originalPrice;
float discount2;
discount2 = originalPrice - discount;
cout << "Price after Discount: " << discount2;
}
}