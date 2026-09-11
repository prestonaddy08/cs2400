/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: August 31, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    //variable declaration
    double hours; 
    double overtimeHours
    double rate;
    double normalWages;
    double overtimeWages;
    double totalWages;
    
    cout << fixed;  //default is scientific
    cout << setprecision(2);
    //input
    cout << "Enter the hours: ";
    cin >> hours;
    if (hours < 0 || hours > 80)
    {
        cout << "Error: hours must be between 0 and 80 hours" << endl;
        exit(0);
    }
    if (hours < 40) {
        overtimeHours = hours - 40;
            }
    
    cout << "Hours: " << hours << endl;
    cout << "Enter the rate: ";
    cin >> rate;
    if (rate < 10 || rate > 50)
    {
        cout << "Error: rate must be between 10 and 50" << endl;
        exit(0);
    }
    
    cout << "Rate: $" << rate << " per hour" << endl;
    //calculations
    normalWages = rate * hours;
    overtimeWages = (rate * 1.5) * overtimeHours;
    totalWages = normalWages + overtimeWages;
    //output
    cout << "Wages: $" << totalWages << endl;
    return 0;
} /// main
