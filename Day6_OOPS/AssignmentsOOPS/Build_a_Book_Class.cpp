#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    float price;

public:
    void set_details(string t, string a, float p)
    {
        title = t;
        author = a;
        price = p;
    }

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b1, b2;

    b1.set_details("The Alchemist", "Paulo Coelho", 499.00);
    b2.set_details("Rich Dad Poor Dad", "Robert Kiyosaki", 350.00);

    b1.display();
    b2.display();

    return 0;
}