#include <iostream>
#include <map>       
#include <fstream>    // for file handling
using namespace std;

int main()
{
    // map to store menu items and price
    map<string,double> menu;

    //map to store ordered items and quantity
    map<string,int> order;

    //Initialising Menu
    menu["Tea"]=10;
    menu["Coffee"]=20;
    menu["Water"]=15;
    menu["BunMaska"]=25;
    menu["Chips"]=30;

    int choice; // store user choice

    cout<<"Welcome to Prabhanshu Tea Stall\n";

    //infinite loop for menu driven program
    while(true)
    {
        cout<<"\n1. Show Menu\n";
        cout<<"2. Take Order\n";
        cout<<"3. Delete Item\n";
        cout<<"4. Checkout\n";
        cout<<"5. Exit\n";

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
        {
            // SHOW MENU
            case 1:
            {
                cout<<"\nItem\tPrice\n";

                // range based loop to display map
                for(auto item : menu)
                {
                    cout<<item.first<<"\t"<<item.second<<endl;
                }
                break;
            }

            //TAKE ORDER
            case 2:
            {
                string item;
                int qty;

                cout<<"Enter item name: ";
                cin>>item;

                // check item exists in menu or not
                if(menu.find(item)==menu.end())
                {
                    cout<<"Item Not Available\n";
                    break;
                }

                cout<<"Enter quantity: ";
                cin>>qty;

                //add quantity (duplicate order handled)
                order[item] += qty;

                cout<<"Item Added Successfully\n";
                break;
            }

            //DELETE ITEM FROM ORDER
            case 3:
            {
                string item;
                cout<<"Enter item to delete: ";
                cin>>item;

                // check item exists in order
                if(order.find(item)!=order.end())
                {
                    order.erase(item);     // remove item 
                    cout<<"Item Removed\n";
                }
                else
                {
                    cout<<"Item Not Found in Order\n";
                }
                break;
            }

            //CHECKOUT / BILL GENERATION
            case 4:
            {
                ofstream file("bill.txt");   // create file

                double subtotal = 0;

                cout<<"\n------------- BILL -------------\n";
                cout<<"Item\tQty\tPrice\tTotal\n";

                file<<"------------- BILL -------------\n";
                file<<"Item\tQty\tPrice\tTotal\n";

                // iterate ordered items
                for(auto it : order)
                {
                    double price = menu[it.first];
                    double total = price * it.second;

                    cout<<it.first<<"\t"<<it.second<<"\t"
                        <<price<<"\t"<<total<<endl;

                    file<<it.first<<"\t"<<it.second<<"\t"
                        <<price<<"\t"<<total<<endl;

                    subtotal += total;
                }

                //DISCOUNT LOGIC
                double discount = 0;

                if(subtotal > 1000)
                {
                    discount = subtotal * 0.10;
                    subtotal -= discount;
                }

                //GST CALCULATION
                double cgst = subtotal * 0.025;
                double sgst = subtotal * 0.025;

                double final_total = subtotal + cgst + sgst;

                cout<<"\nSubtotal : "<<subtotal<<endl;
                cout<<"CGST (2.5%) : "<<cgst<<endl;
                cout<<"SGST (2.5%) : "<<sgst<<endl;
                cout<<"Final Total : "<<final_total<<endl;

                cout<<"--------------------------------\n";
                cout<<" Thank You! Visit Again \n";

                // write to file
                file<<"\nSubtotal : "<<subtotal<<endl;
                file<<"CGST (2.5%) : "<<cgst<<endl;
                file<<"SGST (2.5%) : "<<sgst<<endl;
                file<<"Final Total : "<<final_total<<endl;
                file<<"--------------------------------\n";

                file.close();

                cout<<"Bill Saved in bill.txt\n";

                break;
            }
            //  EXIT
            case 5:
                return 0;

            default:
                cout<<"Invalid Choice\n";
        }
    }
}