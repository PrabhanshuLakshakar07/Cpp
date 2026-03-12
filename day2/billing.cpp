#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int choice;
	float tea_price=10.00,coffee_price=40.00,water_price=15.00,cold_drink_price=20;
	int tea_qty,coffee_qty,water_qty,cold_drink_qty;
	tea_qty=coffee_qty=water_qty=cold_drink_qty=0;
	do
	{
		cout<<"\nAPANA TAPRI";
		cout<<"\n-----------";
		cout<<"\n1.Tea";
		cout<<"\n2.Coffee";
		cout<<"\n3.Water";
		cout<<"\n4.Cold drink";
		cout<<"\n0.Exit";
		cout<<"\n-----------";
		cout<<"\n:";
		cin>>choice;
		switch(choice)
		{
			case 1:
					cout<<"\nTea selected:";
					cout<<"\nPlease enter numbers:";
					cin>>tea_qty;
					break;
			case 2:
					cout<<"\nCoffee selected:";
					cout<<"\nPlease enter numbers:";
					cin>>coffee_qty;
					break;
			case 3:
				  	cout<<"\nWater selected:";
				  	cout<<"\nPlease enter numbers:";
					cin>>water_qty;
					break;
			case 4:
					cout<<"\nCold Drinks selected:";
					cout<<"\nPlease enter numbers:";
					cin>>cold_drink_qty;
					break;
			case 0:
					cout<<"\nExiting System......";
					break;	
			default://Will be executed if no other case matches. 
					cout<<"Please check the option selected. ";
					break;
		}
	}while(choice!=0);

	cout<<"\n               BILL                 ";
	cout<<"\n------------------------------------";
	cout<<"\nItem       Cost       Qty     Total ";
	if (tea_qty==0)
    {
        
    }
    else{
        cout<<"\nTea         "<<tea_price<<"     "<<tea_qty<<"     "<<(tea_qty*tea_price);
    }
	if (coffee_qty==0)
    {
        
    }
    else{
        cout<<"\nCoffee      "<<coffee_price<<"     "<<coffee_qty<<"     "<<(coffee_qty*coffee_price);
    }
	if (water_qty==0)
    {
        
    }
    else{
        cout<<"\nWater       "<<water_price<<"     "<<water_qty<<"     "<<(water_qty*water_price);
    }
    if (cold_drink_qty==0)
    {
        
    }
    else{
        cout<<"\nCold_Drinks "<<cold_drink_price<<"     "<<cold_drink_qty<<"     "<<(cold_drink_qty*cold_drink_price);
    }
	cout<<"\n------------------------------------";
    cout<<"\nTotal to pay:"<<((tea_qty*tea_price)+(coffee_qty*coffee_price)+(water_qty*water_price)+(cold_drink_qty*cold_drink_price));        
	
	
	return 0;
}

