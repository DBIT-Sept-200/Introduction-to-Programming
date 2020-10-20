#include <iostream>
#include <cmath>

/*
    137259
    136983
    137169
    137251
    137340
    136669
    137363
    92740
    136636
    137374
 */

using namespace std;

int main(){

    float radius;
    float pi = 3.142;
    float area;
    float circumference;
    int option;

    cout << "Select what to calculate " << endl;
    cout << "1. Prerimeter" << endl;
    cout << "2. Area" << endl;
    cout << "Option(1, 2): ";
    cin >> option;
    cout << "Radius: ";
    cin >> radius;

    if (option == 1){

        area = pi * pow(radius, 2);
        cout << "The area is : " << area << endl;
    }

    else if (option == 2){
        circumference  = 2 * pi *radius;
        cout << "The circumference is : " << circumference << endl;
    }

    else {
        cout << "Please select an appropriate operation" << endl;
    }

    return 0;
}
