#include <iostream>

using namespace std;

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

int main(){

    double num1;
    char operators;
    double num2;
    double answer;

    cout << "Group 5 Assigment: Please type in a mathematical expression: " << endl;

    cin >> num1 >> operators >> num2;

    switch(operators){
    case '+':
        answer = num1 + num2;
        break;

    case '-':
        answer = num1 - num2;
        break;
    case '/':
        answer = num1 / num2;
        break;
    case '*':
        answer = num1 * num2;
        break;
    case 'x':
        answer = num1 * num2;
        break;
    case 'X':
        answer = num1 * num2;
        break;
    default:
        cout << "Operator not recognized, please type in an appropriate operator." << endl;
    }

    cout << num1 << " " << operators << " " << num2 << " = " << answer << endl;

    return 0;
}
