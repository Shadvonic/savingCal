// savingCal.cpp : This file contains the 'main' function. Program execution begins and ends there.
/// this program is to calucate how much money you need to save a day / week /; year 

#include <iostream>
using namespace std; 

int main()
{
    int endAmount; 
    double toSaveM; 
    double toSaveW;
    double toSaveD;



    cout << "Enter how much you want to save: "; 
    cin >> endAmount; 

    toSaveM = endAmount / 12; 
    cout << "You need to save: " << toSaveM << " a month\n";
    
    toSaveW = endAmount / 52; 
    cout << "You need to save: " << toSaveW << " a week\n"; 

    toSaveD = endAmount / 365; 
    cout << "You need to save: " << toSaveD << " a day\n";

    
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
