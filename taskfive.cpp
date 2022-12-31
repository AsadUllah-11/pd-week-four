#include <iostream>
#include <windows.h>
void gotoxy (int x, int y);
using namespace std;
main() 
{
system("cls");
gotoxy(50,13);
cout << "    MY" << endl;
gotoxy(50,14);
cout << "   Name " << endl;
gotoxy(50,15);
cout << "    IS " << endl;
gotoxy(50,16);
cout << "ASAD ULLAH" << endl;
}
void gotoxy(int x, int y) 
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}