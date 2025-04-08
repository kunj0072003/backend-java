#include <iostream>
#include <string>
using namespace std;

class FoodItem {
public:
    string name;
    double price;

   
    FoodItem() {}

   
    FoodItem(string name, double price) {
        this->name = name;
        this->price = price;
    }
};

class Menu {
public:
    int i; 
    FoodItem items[5];

    Menu() {
        items[0] = FoodItem("Pizzas", 200);
        items[1] = FoodItem("Burgers", 150);
        items[2] = FoodItem("Sandwich", 100);
        items[3] = FoodItem("Rolls", 80);
        items[4] = FoodItem("Biryani", 120);
    }

    int displayMenu() {
        cout << "What would you like to order?" << endl;
        cout << "-Menu-" << endl;
        for (i = 0; i < 5; i++) {
            cout << i + 1 << ") " << items[i].name << " Rs." << items[i].price << endl;
        }
        return 0; // Added return statement to match `int` return type
    }
};

// Define a class for SandwichMenu
class SandwichMenu {
public:
    int i; 
    FoodItem items[3];

    SandwichMenu() {
        items[0] = FoodItem("Club Sandwich", 240);
        items[1] = FoodItem("Veg. Crispy Sandwich", 160);
        items[2] = FoodItem("Extreme Veg Sandwich", 100);
    }

    int displayMenu() {
        cout << "Please Enter which Sandwich you would like to have?" << endl;
        for (i = 0; i < 3; i++) {
            cout << i + 1 << ") " << items[i].name << " Rs." << items[i].price << endl;
        }
        return 0; // Added return statement to match `int` return type
    }
};

int main() { // Corrected main() return type
    int quantity;
    int sandwichChoice;
    string customerName;

    cout << "Tops Tech. Fast Food" << endl;
    cout << "Please Enter Your Name: ";
    cin >> customerName;

    Menu menu;
    SandwichMenu sandwichMenu;

    while (true) {
        cout << "Hello " << customerName << endl;
        menu.displayMenu();
        int choice;
        cout << "Please Enter your Choice: ";
        cin >> choice;

        if (choice == 3) {
            // Sandwich
            sandwichMenu.displayMenu();
            cout << "Please Enter your Choice: ";
            cin >> sandwichChoice;
            cout << "Please Enter Quantity: ";
            cin >> quantity;
            double totalBill = quantity * sandwichMenu.items[sandwichChoice - 1].price;
            cout << "Your Order..." << endl;
            cout << "Your Total Bill is Rs." << totalBill << endl;
            cout << "Your Order Will be delivered in 40 Minutes" << endl;
            cout << "Thank you For Ordering From Tops Tech Fast Food" << endl;
        } else if (choice >= 1 && choice <= 5) {
            // Other food items
            cout << menu.items[choice - 1].name << endl;
            cout << "Please Enter Quantity: ";
            cin >> quantity;
            double totalBill = quantity * menu.items[choice - 1].price;
            cout << "Your Order..." << endl;
            cout << "Your Total Bill is Rs." << totalBill << endl;
            cout << "Your Order Will be delivered in 40 Minutes" << endl;
            cout << "Thank you For Ordering From Tops Tech Fast Food" << endl;
        } else {
            cout << "Invalid choice, please try again!" << endl;
        }
    }

}
