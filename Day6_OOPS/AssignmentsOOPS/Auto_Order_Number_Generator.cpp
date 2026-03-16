#include<iostream>
using namespace std;

class Order
{
private:
    int order_id;
    static int ORDER_COUNTER;

public:
    Order()
    {
        ORDER_COUNTER++;
        order_id = ORDER_COUNTER;

        cout<<"Order Created! Order ID: "<<order_id<<endl;
    }
};

int Order::ORDER_COUNTER = 5000;

int main()
{
    Order o1,o2,o3,o4;
}