#include <iostream> 
#include <windows.h>
void gotoxy(int x, int y);
using namespace std;
main()
{
system("cls");
cout << "Test";
gotoxy(15,15);
cout << "My name is Asad Ullah";
}
void gotoxy(int x, int y) 
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}