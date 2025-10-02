// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << 5 + 5 << "\n";
    cout << 355.0f / 113.0f << "\n";
    cout << 503 * 92 << "\n";

    int anumber = 1;
    cout << anumber++ << endl;
    cout << anumber++ << endl;
    cout << anumber++ << endl;
    cout << anumber++ << endl;
    cout << anumber++ << endl;
    cout << anumber++ << endl;
    cout << anumber++ << endl;
    cout << anumber++ << endl;
    cout << anumber++ << endl;
    cout << anumber++ << endl;

    int num = 5;
    long long factorial = 1;

    for (int i = 1; i <= 5; ++i)
    {
        factorial *= i;
    }
    cout << factorial << endl;

    int six = 6;

    for (int x = 1; x < 13; ++x)
    {
        cout << six << " x " << x << " = " << six * x << endl;
    }

    cout << ((919.0f * -1.0f) - 6.0f) / 2.56 << endl;

    cout << (15 + 25 + 30 + 20) / 4 << endl;

    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;
    int e = one * two + three * four;
    int f = two * four;
    cout << e << "/" << f << endl;

    cout << pow(73, 2) << endl;
    cout << pow(73, 4) << endl;

    float a = 10.0f;
    float b = 20.0f;
    float t = 0.35f;

    cout << a + (b - a) * t << endl;

    cout << 0.43f * 18 << endl;

    const double pi = 3.14159265358979323846;

    float radians = (65 * pi) / 180;
    cout << radians << endl;

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
