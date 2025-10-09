// Tutorial 4 - Wk2 - Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    signed int number = 0;
    bool validNumber = false;
    string stringValue;

    while (validNumber == false || cin.fail())
    {

        cout << "Enter a number: ";
        cin >> number;
        if (number <= 0) {
            cout << "Error. Number must be above 0" << endl;
            if (!(cin >> stringValue)) {
                break;
            }
        }
        else {
            validNumber = true;
        }

        cin.clear();
        cin.ignore(1000, '\n');
    }

    if (validNumber == true) {
        while (number > 0) {
            if (number > 5 && number < 7) {
                number = number - 1;
                continue;
            }
            else {
                //Show the number
                cout << "T-" << number << endl;
                //Decrease number by 1
                number = number - 1;
            }
        }
        //This is outside the loop
        cout << "Blast off!" << endl;
    }

    string playerInput = "";
    while (playerInput != "quit" || playerInput != "exit") {
        cout << "Enter a response from hi, joke, quit or exit: ";
        cin >> playerInput;
        if (playerInput == "hi") {
            cout << "Hello!" << endl;
        }
        else if (playerInput == "joke") {
            cout << "How do you catch a squirrel? Climb a tree and act like a nut!" << endl;
        }
        else if (playerInput != "quit" || playerInput != "exit") {
            break;
        }
        else {
            cout << "Enter a response from hi, joke, quit or exit: ";
            cin >> playerInput;
        }
    }

    int sum = 0;
    int count = 0;
    int input = 0;
    while (input > -1)
    {
        cout << "Enter a number: ";
        cin >> input;
        if (input > -1) {
            sum += input;
            count += 1;
        }
        else {
            cout << sum / count << endl;
        }
    }

    int i = 0;
    for (i = 0; i < 31; i++) {
        cout << i << endl;
    }
    for (i = 1; i < 73; i++) {
        if (i % 6 == 0)
            cout << i << endl;
        else {
            continue;
        }
    }

    for (i = 10; i >= 0; i -= 1) {
        cout << i << endl;  
    }

    int y = 0;
    int x = 0;

    for (y = 0; y < 11; y++) {
        for (x = 0; x < 11; x++) {
            cout << y << "," << x << " ";
        }
        cout << endl;
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
