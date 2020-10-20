#include <iostream>
#include <string>

using namespace std;

//  input >> calculatins >> output

int main(){
    cout.precision(20);
    // inputs
    string first_name;
    string last_name;
    double home_price;

    // calculation variables
    double sales_tax;
    double agent_commision;
    double selling_price;

    cout << "Please type in your first name: ";
    cin >> first_name;

    cout << "Please type in your last name: ";
    cin >> last_name;

    cout << "Please type the home price(KSH): ";
    cin >> home_price;

    // calculations

    sales_tax = 0.16 * home_price;

    agent_commision = 0.065 * home_price;

    selling_price = home_price - sales_tax - agent_commision;

    // Output info
    cout << "==========================================" << endl;
    cout << "Full name: " << first_name + " " + last_name << endl;
    cout << "Selling Price: " << selling_price << endl;
    cout << "Sales tax: " << sales_tax << endl;
    cout << "Agent commission: " << agent_commision << endl;


    return 0;
}
