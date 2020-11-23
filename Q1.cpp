#include <iostream>

using namespace std;

class engineClass
{
public:

    void operation(int& status)
    {
        cout << "Would you like to start or stop the engine?[Input 1 to 'start' or 0 to 'stop']: ";
        cin >> status;
    }

    void horse_powerInput(int& horse_power)
    {
        cout << "What is the horse power of your vehicle? ";
        cin >> horse_power;
    }

    void typeInput(string& type)
    {
        cout << "What type of engine do your vehicle use? ";
        cin >> type;
    }

    engineClass()
    {
        int horse_power = 0;
        int status = 0;
        string type;
    }

    void print1(int horse_power, string type, int status)
    {
        cout << "Your vehicles horse power is: " << horse_power << endl;

        cout << "The type of engine your vehicle uses is: " << type << endl;

        if (status == 1)
        {
            cout << "The engine started. ";
        }

        if (status == 0)
        {
            cout << "The engine stopped. ";
        }
    }
};

class vehicleClass :public engineClass
{
public:
    engineClass engine;
    string brand;

    void stringInput(string& brand)
    {
        cout << "What brand is your vehicle? ";
        cin >> brand;
    }

    void print2(string brand, int horse_power, string type, int status)
    {

        cout << "The brand of your vehicle is: " << brand << endl;
        print1(horse_power, type, status);
    }

    vehicleClass()
    {
        string brand = "Vehicle";
    }
};

int main()
{
    int horse_power = 0;
    string type, brand;
    int status = 0;

    vehicleClass V;
    V.horse_powerInput(horse_power);
    V.typeInput(type);
    V.operation(status);
    V.stringInput(brand);
    V.print2(brand, horse_power, type, status);

}