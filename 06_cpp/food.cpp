#include <iostream>

using namespace std;

int main() {
    cout << "Press 1 for PIZZA" << endl;
    cout << "Press 2 for BURGER" << endl;
    cout << "Press 3 for SANDWICH" << endl;
    cout << "Press 4 for PASTA" << endl;
    cout << "---------------------------" << endl;

    int type;
    int choice;
    cout << "---------------------------" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "---------------------------" << endl;

    switch (choice) {
        case 1: // PIZZA
            cout << "Press 1 for Onion PIZZA" << endl;
            cout << "Press 2 for Mexican PIZZA" << endl;
            cout << "Press 3 for Margherita PIZZA" << endl;
            cout << "Press 4 for Volcano PIZZA" << endl;
            cout << "---------------------------" << endl;
            cout << "Enter your type: ";
            cin >> type;
            cout << "---------------------------" << endl;

            switch (type) {
                case 1:
                    cout << "You ordered Onion Pizza" << endl;
                    break;
                case 2:
                    cout << "You ordered Mexican Pizza" << endl;
                    break;
                case 3:
                    cout << "You ordered Margherita Pizza" << endl;
                    break;
                case 4:
                    cout << "You ordered Volcano Pizza" << endl;
                    break;
                default:
                    cout << "This pizza type is not available...!" << endl;
                    break;
            }
            break;

        case 2: // BURGER
            cout << "Press 1 for Chicken BURGER" << endl;
            cout << "Press 2 for Beef BURGER" << endl;
            cout << "Press 3 for Veggie BURGER" << endl;
            cout << "Press 4 for Fish BURGER" << endl;
            cout << "---------------------------" << endl;
            cout << "Enter your type: ";
            cin >> type;
            cout << "---------------------------" << endl;

            switch (type) {
                case 1:
                    cout << "You ordered Chicken Burger" << endl;
                    break;
                case 2:
                    cout << "You ordered Beef Burger" << endl;
                    break;
                case 3:
                    cout << "You ordered Veggie Burger" << endl;
                    break;
                case 4:
                    cout << "You ordered Fish Burger" << endl;
                    break;
                default:
                    cout << "This burger type is not available...!" << endl;
                    break;
            }
            break;

        case 3: // SANDWICH
            cout << "Press 1 for jam SANDWICH" << endl;
            cout << "Press 2 for  SANDWICH" << endl;
            cout << "Press 3 for Veggie SANDWICH" << endl;
            cout << "Press 4 for Club SANDWICH" << endl;
            cout << "---------------------------" << endl;
            cout << "Enter your type: ";
            cin >> type;
            cout << "---------------------------" << endl;

            switch (type) {
                case 1:
                    cout << "You ordered jam Sandwich" << endl;
                    break;
                case 2:
                    cout << "You ordered Turkey Sandwich" << endl;
                    break;
                case 3:
                    cout << "You ordered Veggie Sandwich" << endl;
                    break;
                case 4:
                    cout << "You ordered Club Sandwich" << endl;
                    break;
                default:
                    cout << "This sandwich type is not available...!" << endl;
                    break;
            }
            break;

        case 4: // PASTA
            cout << "Press 1 for Spaghetti PASTA" << endl;
            cout << "Press 2 for Penne PASTA" << endl;
            cout << "Press 3 for Fusilli PASTA" << endl;
            cout << "Press 4 for Macaroni PASTA" << endl;
            cout << "---------------------------" << endl;
            cout << "Enter your type: ";
            cin >> type;
            cout << "---------------------------" << endl;

            switch (type) {
                case 1:
                    cout << "You ordered Spaghetti Pasta" << endl;
                    break;
                case 2:
                    cout << "You ordered Penne Pasta" << endl;
                    break;
                case 3:
                    cout << "You ordered Fusilli Pasta" << endl;
                    break;
                case 4:
                    cout << "You ordered Macaroni Pasta" << endl;
                    break;
                default:
                    cout << "This pasta type is not available...!" << endl;
                    break;
            }
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
