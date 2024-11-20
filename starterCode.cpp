/*
TEST 2 (PRACTICAL)
SEMESTER I 2024/2025
SUBJECT CODE	: SECJ1023
SUBJECT NAME	: PROGRAMMING TECHNIQUE II
Name			: Abdelrahman Elfatih Abdelrahman Ahmed
Matric No		: A23CS4032
Section			: 01
*/

#include <iostream>   // Required for input and output
#include <string>     // Required for handling strings
#include <cmath>      // Required for square root function

using namespace std;

// Question 1 - Define Inventory class
class Inventory {
private:
    int* quantities;  // Array to hold quantities of items
    int itemCount;    // Number of items in the inventory

public:
    // 1a. Constructor that initializes itemCount and allocates memory for quantities (3 marks)
    Inventory(int ic) : itemCount(ic) { quantities = new int[itemCount]; } //you didn't spesify the size of the array

    // 1b. Constructor that initializes itemCount and quantities array (4 marks)
    Inventory(int* q , int i) : quantities(q) , itemCount(i) {}

    // 1c. Constructor that initializes quantities from a string (6 marks)
    Inventory(string items) {
        for (int i = 0; i < items.size(); i++){
            quantities[i] = items[i]- '0' ;
        }
        cout << quantities[0];
    }

    // 1d. Copy constructor (4 marks)
    Inventory(const Inventory& copy){
        quantities = new int [itemCount];
    }

    // 2. Destructor (3 marks)
    ~Inventory(){
        quantities = nullptr;
    }

    // 3a. Conversion method: Returns itemCount (2 marks)
    int getItemCount() const { return itemCount; }

    // 3b. Conversion method: Calculates total quantity (6 marks)
    int calculateQuantity() const {
        int sum{};
        for (int i = 0; i < itemCount ; i++)
            sum += quantities[i];
            return sum;
    }

    // 3c. Conversion method: Converts quantities to a comma-separated string (6 marks)
    void printQuantities() const {
    for (int i = 0; i < itemCount ; i++){
            if (i == 0) { cout << quantities[i] << ","; }

            cout << quantities[i];
    }  
    }
    // 4a. Overloaded multiplication operator (7 marks)
    Inventory& operator*(int multiplier){
        for(int i = 0; i < itemCount; i++){
            quantities[i] * multiplier;
        }
    }

    // 4b. Overloaded addition operator for two Inventory objects (7 marks)
    Inventory operator+(Inventory& right){
        for(int i = 0; i < itemCount; i++){
            quantities[i] + right.quantities[i];
        }
    }

    // 4c. Overloaded addition operator for Inventory and integer (7 marks)
    // ???

    // 4d. Overloaded subscript operator (4 marks)
    // ???

    // 4e. Overloaded equality operator (8 marks)
    // ???

    // 4f. Overloaded greater-than operator (5 marks)
    // ???

    // 5b. Specify function in 5a. as a friend to class Inventory (1 marks)
    // ???
};
// 5a. A regular function that prints the details of an Inventory object (5 marks)
// ???

int main() {

    Inventory i("23");
    // 6a. Create Inventory storeA with quantities {5,10,15,20} (2 marks)
    // ???

    // 6b. Create Inventory storeB with quantities {3,6,9} from string (1 mark)
    // ???

    // 6c. Create Inventory storeC by copying storeB (1 mark)
    // ???

    // 6d. Declare a pointer storeD, dynamically copy storeB (2 marks)
    // ???

    // 6e. Add 2 to storeD, result in storeE (2 marks)
    // ???

    // 6f. Multiply storeC by 2, result in storeF (2 marks)
    // ???

    // 6g. Add storeA and storeE, result in storeG (2 marks)
    // ???

    // 6h. Print all inventories from 6a to 6g (4 marks)
    // ???

    // 6i. Check if storeA and storeB are equivalent (2 marks)
    // ???

    // 6j. Check if storeA is greater than storeE (2 marks)
    // ???

    // 6k. Properly delete dynamically created storeD (2 marks)
    // ???
    system("pause");
    return 0;
}
