// gr6_lab2(pêtle).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    for (int i = 10; i > 0; i--) {
        cout << i << endl;

    }

    cout << "----------------" << endl;
    {

        for (int i = 5; i < 7; i++) {
            cout << i << endl;
        }

    }
    cout << "----------------" << endl;
    for (int i = 5; i <= 7; i++)
    {
        cout << i << endl;
    }
    cout << "----------------" << endl;

    for (int i = 0; i <= 10; i+=2)
    {
        cout << i << endl;
    }
    cout << "----------------" << endl;

     int fahr, celsius; // zmienne typu int
     int start, limit, krok; // zmienne typu int
    
        cout << "podaj wartoœæ start:";
		cin >> start; // wczytaj wartoœæ start
		cout << "podaj wartoœæ limit:";
        cin >> limit; // wczytaj wartoœæ limit
		cout << "podaj wartoœæ krok:";
		cin >> krok; // wczytaj wartoœæ krok

        for(fahr = 0; fahr <= limit; fahr = fahr + krok) // kod 02_14
         {
         float celsius = (5.0 / 9.0) * (fahr - 32.0);
         cout << fahr << "\t" << celsius << endl;
         // printf ("%3.0f \t %6.1f \n", fahr, celsius)   ;
             }

        double liczba;

        for (int i = 0; i < 10; i++) {
            cout  << " wprowadz liczbe :" ;
            cin >> liczba;

            if (liczba > 0) {
                cout << "wprowadzona: " << liczba << endl;
            }
        }

        for(int i = 0; i <= 100; i++)
            {
			cout << i << endl;
            }
		
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
