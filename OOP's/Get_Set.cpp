#include <iostream>
using namespace std;

class hero
{

    // properties
private:
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    // creation Object
    hero ram;
    cout << "Size of Ram is " << sizeof(ram) << endl;

    cout << "ram health is " << ram.getHealth() << endl;

    ram.setHealth(90);
    ram.level = 'A';

    cout << "health is: " << ram.getHealth() << endl;
    cout << "level is: " << ram.level << endl;
}
