#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int b1;
int b2;
int opcja;
int main();

void get(){
	system("pause");
	system("cls");
}

void kwadrat()
{
    system("cls");
    cout << "Wpisz bok kwadratu: ";
    string input;
    cin >> input;

    try {
        b1 = stoi(input);
        cout << "Obliczam:-)" << endl;
        for (int i = 3; i >= 0; i--)
        {
            Sleep(1000);
            cout << i << endl;
        }
        cout << "Twoje pole kwadratu jest rowne: "<<b1*b1<<endl;
        get();
        system("cls");
        main();
    }
    catch (const exception& e) {
        cout << "Nie ma takiej opcji XD" << endl;
    }

}

void prostokat()
{
    system("cls");
    cout << "Wpisz bok prostokata: ";
    string input1;
    cin >> input1;
    cout << "Wpisz 2 bok prostokata: ";
    string input2;
    cin >> input2;

    try {
        b1 = stoi(input1);
        b2 = stoi(input2);
        cout << "Obliczam:-)" << endl;
        for (int i = 3; i >= 0; i--)
        {
            Sleep(1000);
            cout << i << endl;
        }
        cout << "Twoje pole prostokata jest rowne: "<<b1*b2<<endl;
        get();
        system("cls");
        main();
    }
    catch (const exception& e) {
        cout << "Nie ma takiej opcji XD" << endl;
    }

}

int main()
{
    cout << "Jestem programem liczacym pola figur:" << endl;
    cout << "Menu:" << endl;
    cout << "1. Kwadrat" << endl;
    cout << "2. Prostokat" << endl;
    cout << "Opcja: ";
    cin >> opcja;

    switch (opcja)
    {
    case 1:
        {
            kwadrat();
            break;
        }
    case 2:
        {
            prostokat();
            break;
        }
    }
    return 0;
}
