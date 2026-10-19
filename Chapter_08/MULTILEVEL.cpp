// MENU ITEM
#include <iostream>
using namespace std;

// class menuitem
class MenuItem
{
    public:
    // members
    string name;
    double calories;

    void print()
    {
        cout << name << "("<< calories <<")" << endl;
    }
};

class Drink : public MenuItem
{
    public:
    double ounces;

};

class HotDrink : public Drink
{
    public:
    double temperature;

    void serving_instructions()
    {
        cout <<"serve " << ounces << " ounces at "<< temperature << " degrees F"<< endl;
    }
};

// main functions
int main()
{
    HotDrink hot_chocolate;
    hot_chocolate.name = " Hot chocolate";
    hot_chocolate.calories = 3000;
    hot_chocolate.temperature = 45;

    hot_chocolate.print();
    hot_chocolate.serving_instructions();

    return 0;
}