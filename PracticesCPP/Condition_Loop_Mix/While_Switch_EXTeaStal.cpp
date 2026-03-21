#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    int totalBill = 0;
    int orderCount = 0;
    bool isRunning = true;

    cout << "--- Welcome to Gemini Chai Stall ---" << endl;

    while (isRunning) {
        // 1. SHOW LIST (The Menu Card)
        cout << "\n******* MENU *******" << endl;
        cout << "1. Cutting Chai    - Rs. 10" << endl;
        cout << "2. Adrak Chai      - Rs. 15" << endl;
        cout << "3. Masala Chai     - Rs. 20" << endl;
        cout << "4. Delete Last Item" << endl;
        cout << "5. Checkout & Exit" << endl;
        cout << "********************" << endl;
        
        cout << "Current Bill: Rs. " << totalBill << " | Items: " << orderCount << endl;
        cout << "Bhai, kya chahiye? (Enter Choice): ";
        cin >> choice;

        // 2. SWITCH CASE (Order Logic)
        switch (choice) {
            case 1:
                cout << ">> Ek Cutting Chai add kar di!" << endl;
                totalBill += 10;
                orderCount++;
                break;
            case 2:
                cout << ">> Ek Adrak Chai add kar di!" << endl;
                totalBill += 15;
                orderCount++;
                break;
            case 3:
                cout << ">> Ek Masala Chai add kar di!" << endl;
                totalBill += 20;
                orderCount++;
                break;

            // 3. DELETE (Logic: Removing the last action)
            case 4:
                if (orderCount > 0) {
                    cout << ">> Chalo, last item cancel kar diya." << endl;
                    // Note: In real life, we would use an array or vector to delete specific prices.
                    // For now, let's assume we deduct a standard average or clear it.
                    totalBill = (totalBill > 0) ? totalBill - 10 : 0; 
                    orderCount--;
                } else {
                    cout << ">> Bhai, list pehle se hi khali hai!" << endl;
                }
                break;

            // 4. CHECKOUT (Logic: Final Settlement)
            case 5:
                cout << "\n----------------------------" << endl;
                cout << "FINAL BILL: Rs. " << totalBill << endl;
                cout << "Total Items: " << orderCount << endl;
                cout << "Dhanyavad! Fir aaiyega." << endl;
                cout << "----------------------------" << endl;
                isRunning = false; // Program rokne ke liye
                break;

            default:
                cout << ">> Invalid choice! Sahi number dabao bhai." << endl;
        }
    }

    return 0;
}