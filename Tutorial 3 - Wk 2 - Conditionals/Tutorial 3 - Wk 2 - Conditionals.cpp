// Tutorial 3 - Wk 2 - Conditionals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int one = 1;

int main()
{
    cout << !true << endl;
    cout << !false << endl;
    
    cout << ((5 < 10) && !(5 > 10)) << endl;

    int num = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << ((num > 69) && (num < 101)) << endl;

    string name = "";
    cout << "Enter your name: ";
    cin >> name;

    if (name == "bob") {
        cout << ("Correct") << endl;
    } else {
        cout << ("hahaha") << endl;
    }

    string username = "bob";
    string password = "abc123";
    string usernameattempt = "";
    string passwordattempt = "";
    bool playerAllowedAccess = false;

    cout << "Enter your username: ";
    cin >> usernameattempt;
    cout << endl << "Enter your password: ";
    cin >> passwordattempt;
    if (passwordattempt == password && usernameattempt == username) {
        playerAllowedAccess = true;
    } else {
        playerAllowedAccess = false;
    }
    cout << (playerAllowedAccess) << endl;

    string name1 = "";
    string name2 = "";
    string name3 = "";
    bool someSameName = false;
    cout << "Enter a name: ";
    cin >> name1;
    cout << "Enter another name: ";
    cin >> name2;
    cout << "Enter a final name: ";
    cin >> name3;
    if ((name1 == name2) || (name2 == name3) || (name1 == name3)){
        someSameName = true;
    } else {
        someSameName = false;
    }
    cout << (someSameName) << endl;

    int grade = 0;
    cout << ("Enter grade: ");
    cin >> grade;
    
    if (grade >= 70) {
        cout << "first!" << endl;
    }
    else if (grade >= 40) {
        cout << "passed!" << endl;
    } else
    {
            cout << "failed!" << endl; 
    }
    
    string username = "admin";
    string password = "123";
    string usernameattempt = "";
    string passwordattempt = "";

    cout << "Enter your username: ";
    cin >> usernameattempt;
    cout << endl << "Enter your password: ";
    cin >> passwordattempt;
    if (passwordattempt == password && usernameattempt == username) {
        cout << "Access granted" << endl;
    }
    else {
        cout << "Access denied" << endl;
    }

    float x = 0.0f;
    float y = 0.0f;
    cout << "Enter the x value: ";
    cin >> x;
    cout << "Enter the y value: ";
    cin >> y;
    if ((x == 0) && (y == 0)) {
        cout << "none" << endl;
    }
    else if ((x > 0) && (y == 0)) {
        cout << "right" << endl;
    }
    else if ((x < 0) && (y == 0)) {
        cout << "left" << endl;
    }
    else if ((x == 0) && (y > 0)) {
        cout << "up" << endl;
    }
    else if ((x == 0) && (y < 0)) {
        cout << "down" << endl;
    }
    else if ((x > 0) && (y > 0)) {
        cout << "up-right" << endl;
    }
    else if ((x > 0) && (y < 0)) {
        cout << "down-right" << endl;
    }
    else if ((x < 0) && (y > 0)) {
        cout << "up-left" << endl;
    }
    else if ((x < 0) && (y < 0)) {
        cout << "down-left" << endl;
    }
    else {
        cout << "Error" << endl;
    }
    
    cout << (one) << endl;
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
