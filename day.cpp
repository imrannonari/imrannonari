# include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    char c;
    

    cout << "enter the valus ";
    cin >> c;

    

    switch(c)
    {
        case 'm':
            cout << "mond";
            break;

        case 't':
            cout << "tuse";
            break;

        case 'w':
            cout << "wedn";
            break;

        case 'th':
            cout << "thirsday";
            break;
             case 'f':
            cout << "friday";
            break;
             case 'sa':
            cout << "saturday";
            break;
             case 's':
            cout << "sunday";
            break;

        default:
            cout << "Error";
            break;
    }

    getch();
}
