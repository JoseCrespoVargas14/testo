#include<iostream>
#include<string>
using namespace std;

double taxDue(double taxableIncome);

int main()
{
    // THIS MAIN FUNCTION ALLOWS YOU TO TEST YOUR CODE
    cout << taxDue(5000) << endl;  // 0 expected
    cout << taxDue(10000) << endl; // 70 expected 
    cout << taxDue(25000) << endl; // 1120 expected
    cout << taxDue(30000) << endl; // 1870 expected
    cout << taxDue(50000) << endl; // 4870 expected
    cout << taxDue(55000) << endl; // 6120 expected
    cout << taxDue(75000) << endl; // 11120 expected
    cout << taxDue(85000) << endl; // 14620 expected
}

// COMPLETE THE FOLLOWING FUNCTION & PASTE IN QUESTION EDITOR
double taxDue(double taxableIncome) {

    double total;
    double interval;

    if (taxableIncome < 9000){
        total = 0;
        interval=0;
    }
    else if (9000 <= taxableIncome < 25000){
        interval = taxableIncome - 9000;
        total=0.07*interval;
    }
    else if (25000 <= taxableIncome < 50000){
        interval = taxableIncome - (25000-9000+9000);
        total=(0.15*interval)+1120;
    }
    else if (50000 <= taxableIncome < 75000){
        interval = taxableIncome - (75000-50000+(25000-9000+9000));
        total = (0.25*interval)+4870;
    }
    else if (taxableIncome>=75000){
        interval = taxableIncome - (75000-50000-25000-9000));
        total = (0.35*interval)+11120;
    }

    return total;
}
