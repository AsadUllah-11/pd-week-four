#include <iostream>
void a();
void w();
void i();
void s();
using namespace std;
main()
{
    a();
    cout << endl;
    w();
    cout << endl;
    a();
    cout << endl;
    i();
    cout << endl;
    s();
}
void a()
{
    cout << "      A        " << endl;
    cout << "     A A       " << endl;
    cout << "    A   A      " << endl;
    cout << "   AAAAAAA     " << endl;
    cout << "  A       A    " << endl;
    cout << " A         A   " << endl;
    cout << "A           A  ";
}
void w()
{
    cout << " W         W     " << endl;
    cout << " W         W     " << endl;
    cout << " W    W    W     " << endl;
    cout << " W   W W   W     " << endl;
    cout << " W  W   W  W     " << endl;
    cout << " W W     W W     " << endl;
    cout << " W         W     ";
}
void i()
{
    cout << " IIIIIIIIIII   " << endl;
    cout << "      I        " << endl;
    cout << "      I        " << endl;
    cout << "      I        " << endl;
    cout << "      I        " << endl;
    cout << "      I        " << endl;
    cout << " IIIIIIIIIII   ";
}
void s()
{
    cout << "    SSSSS   " << endl;
    cout << "   S       " << endl;
    cout << "   S       " << endl;
    cout << "    SSSSS   " << endl;
    cout << "         S  " << endl;
    cout << "         S  " << endl;
    cout << "   SSSSSS    ";
}