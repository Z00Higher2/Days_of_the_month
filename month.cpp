/*
Author: Zuhayer Tashin
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1D

Write a program month.cpp that asks the user to input the year and the month (1-12) 
and prints the number of days in that month (taking into account leap years). 
You may not use switch case or arrays even if you know these language constructs.
*/


#include <iostream>
using namespace std;

int main(){
    int year;   // Declared a variable for the year number
    cout << "Enter year: ";
    cin >> year; // User input for the year number

    int month; // Declared a variable for the month
    cout << "Enter month: ";
    cin >> month;  // User input for the month

    if(year % 4 == 0 && year % 100 != 0){

       if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8|| month == 10 ||month == 12){

        cout <<"31 Days"<< endl; // Display the number of days of the selected month

       } else if(month == 2){

        cout << "29 Days"<< endl; // Display the number of days of the selected month

       } else {

        cout << "30 Days" << endl; // Display the number of days of the selected month

       }

    }  else if (year % 4 != 0 && year % 100 == 0 || year % 400 != 0){

            if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8|| month == 10 ||month == 12){

                    cout <<"31 Days"<< endl; // Display the number of days of the selected month

                } else if(month == 2){

                    cout << "28 Days"<< endl; // Display the number of days of the selected month

                } else {

                    cout << "30 Days" << endl; // Display the number of days of the selected month

                }

    } else {

        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8|| month == 10 ||month == 12){

        cout <<"31 Days"<< endl; // Display the number of days of the selected month

       } else if(month == 2){

        cout << "29 Days"<< endl; // Display the number of days of the selected month

       } else {

        cout << "30 Days" << endl; // Display the number of days of the selected month

       }

    }

        return 0;
}