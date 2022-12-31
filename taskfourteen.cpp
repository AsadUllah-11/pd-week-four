#include <iostream>
using namespace std;
void printMenu();
void calculateAggregate(string nameStd1,float matricMarksStd1,float interMarksStd1,float ecatMarksStd1);
void calculateAggregate2(string nameStd2,float matricMarksStd2,float interMarksStd2,float ecatMarksStd2);
void compareMarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2);

main() 
{
printMenu();
string nameStd1, nameStd2;
float matricMarksStd1, matricMarksStd2;
float interMarksStd1, interMarksStd2;
float ecatMarksStd1, ecatMarksStd2;
cout << "Enter First Student Name: ";
cin >> nameStd1;
cout << "Enter First Student Matric Marks out of 1100: ";
cin >> matricMarksStd1;
cout << "Enter First Student Inter Marks out of 1100: ";
cin >> interMarksStd1;
cout << "Enter First Student Ecat Marks out of 400: ";
cin >> ecatMarksStd1;
calculateAggregate(nameStd1,matricMarksStd1,interMarksStd1,ecatMarksStd1);
cout << "Enter Second Student Name: ";
cin >> nameStd2;
cout << "Enter Second Student Matric Marks out of 1100: ";
cin >> matricMarksStd2;
cout << "Enter Second Student Inter Marks out of 1100: ";
cin >> interMarksStd2;
cout << "Enter Second Student Ecat Marks out of 400: ";
cin >> ecatMarksStd2;
calculateAggregate2(nameStd2,matricMarksStd2,interMarksStd2,ecatMarksStd2);
compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
}
void printMenu()
{
cout << "University Admission Management System";
cout << endl;
}
void calculateAggregate(string nameStd1,float matricMarksStd1,float interMarksStd1,float ecatMarksStd1)
{
float aggregate1;
float inter1,matric1,ecat1;
matric1 = (matricMarksStd1/1100)*100;
inter1 = (interMarksStd1/1100)*100;
ecat1 = (ecatMarksStd1/400)*100;
aggregate1 = ((0.3*matric1)+(0.3*inter1)+(0.4*ecat1));
cout << "Aggregate of First Student is: " << aggregate1 << endl;
}
void calculateAggregate2(string nameStd2,float matricMarksStd2,float interMarksStd2,float ecatMarksStd2)
{
float aggregate2;
float inter2,matric2,ecat2;
matric2 = (matricMarksStd2/1100)*100;
inter2 = (interMarksStd2/1100)*100;
ecat2 = (ecatMarksStd2/400)*100;
aggregate2 = ((0.3*matric2)+(0.3*inter2)+(0.4*ecat2));
cout << "Aggregate of Second Student is: " << aggregate2 << endl;
}
void compareMarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2)
{
if (ecatMarksStd1 > ecatMarksStd2)
{
cout << "Roll no.1 " << nameStd1 << endl;
cout << "Roll no.2 " << nameStd2;
}
if (ecatMarksStd2 > ecatMarksStd1)
{
cout << "Roll no.1 " << nameStd2 << endl;
cout << "Roll no.2 " << nameStd1 << endl;
}
}

