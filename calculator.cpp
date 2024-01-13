#include <iostream>

using namespace std;

int main() {
    double n1, n2, ans;
    char operation;

    
    cout << "Enter 1st number: ";   // input 
    cin >> n1;

    cout << "Enter 2nd number: ";
    cin >> n2;

    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;
// operation's based on our choice 
    switch (operation) {
        case '+':
            ans = n1 + n2;
            break;
        case '-':
            ans = (n1 - n2);
            break;
        case '*':
            ans = n1*n2;
            break;
        case '/':
            // Check for division by zero
            if (n2 != 0) {
                ans = n1 / n2;
            } else {
                cout << "divisible by zero isn't possible" << endl;
                return 1; 
            }
            break;
        default:
            cout << "Invalid operation." << endl;
            return 1; 
    }

    // required answer 
    cout << "Answer: " << ans << endl; 

    return 0;
}