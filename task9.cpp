#include <iostream>
using namespace std;
void reverse(string truefalse);
main() 
{
string truefalse;
cout << "Enter true or false: ";
cin >> truefalse;
reverse(truefalse);
}
void reverse (string truefalse)
{
if (truefalse == "true")
{
cout << "False";
}
if (truefalse == "false")
{
cout << "True";
}
}