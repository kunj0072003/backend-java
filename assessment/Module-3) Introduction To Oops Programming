#include <iostream>
#include <string>

using namespace std;
class MenuItem {
public:
    string name;
    double price;

    MenuItem(string n, double p) : name(n), price(p) {}

    virtual void display() {
        cout << name << " Rs." << price << endl;
    }

    virtual double getPrice() {
        return price;
    }
};
class Sandwich : public MenuItem {
public:
    Sandwich(string n, double p) : MenuItem(n, p) {}
};
class Burger : public MenuItem {
public:
    Burger(string n, double p) : MenuItem(n, p) {}
};
class Pizza : public MenuItem {
public:
    Pizza(string n, double p) : MenuItem(n, p) {}
};
void displayMenu() {
    cout << "------------------------------Menu ------------------------------" << endl;
    cout << "1) Pizzas" << endl;
    cout << "2) Burgers" << endl;
    cout << "3) Sandwich" << endl;
    cout << "4) Rolls" << endl;
    cout << "5) Biryani" << endl;
    cout << "Please Enter your Choice: ";
}
void displaySandwichMenu() {
    cout << "1) Club Sandwich Rs.240" << endl;
    cout << "2) Veg. Crispy Sandwich Rs.160" << endl;
    cout << "3) Extreme Veg Sandwich Rs.100" << endl;
    cout << "Please Enter which Sandwich you would like to have: ";
}

// Function to generate and display the bill
void generateBill(MenuItem* item, int quantity) {
    double total = item->getPrice() * quantity;
    cout << "------------------------------Your Order------------------------------" << endl;
    cout << "Your choice: " << item->name << endl;
    cout << "Your Total Bill is Rs." << total << endl;
    cout << "Your Order Will be delivered in 40 Minutes" << endl;
    cout << "Thank you For Ordering From Tops Tech Fast Food" << endl;
}
bool askToContinue() {
    char choice;
    cout << "Would you like to order anything else? Y / N: ";
    cin >> choice;
    return (choice == 'Y' || choice == 'y');
}

int main() {
    string customerName;
    int choice, sandwichChoice, quantity;
    bool continueOrdering = true;

    Sandwich clubSandwich("Club Sandwich", 240);
    Sandwich vegCrispySandwich("Veg. Crispy Sandwich", 160);
    Sandwich extremeVegSandwich("Extreme Veg Sandwich", 100);

    cout << "Please Enter Your Name: ";
    getline(cin, customerName);
    cout << "Hello, " << customerName << "!" << endl;

    while (continueOrdering) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            cout << "Pizza section coming soon!" << endl; 
        } else if (choice == 2) {
            cout << "Burger section coming soon!" << endl; 
        } else if (choice == 3) {
            displaySandwichMenu();
            cin >> sandwichChoice;

            MenuItem* selectedItem = nullptr;
            if (sandwichChoice == 1) {
                selectedItem = &clubSandwich;
            } else if (sandwichChoice == 2) {
                selectedItem = &vegCrispySandwich;
            } else if (sandwichChoice == 3) {
                selectedItem = &extremeVegSandwich;
            } else {
                cout << "Invalid choice!" << endl;
                continue;
            }

            cout << "Please Enter Quantity: ";
            cin >> quantity;

            generateBill(selectedItem, quantity);
        } else if (choice == 4) {
            cout << "Rolls section coming soon!" << endl; 
        } else if (choice == 5) {
            cout << "Biryani section coming soon!" << endl; 
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
        continueOrdering = askToContinue();
    }

    cout << "Thank you for your order!" << endl;
}
