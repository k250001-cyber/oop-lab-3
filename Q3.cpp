#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
private:
    string deviceName;
    string type;
    string status;

public:
    SmartDevice(string name, string t, string s) {
        deviceName = name;
        type = t;
        status = s;
        cout << deviceName << " (" << type << ") has been created and is " << status << endl;
    }

    ~SmartDevice() {
        cout << deviceName << " is powering down forever. Goodbye!" << endl;
    }

    void display() {
        cout << "Device: " << deviceName << ", Type: " << type << ", Status: " << status << endl;
    }
};

int main() {
    SmartDevice light("Living Room Light", "Smart Light", "on");
    SmartDevice vacuum("Robo Cleaner", "Robo-Vacuum", "off");
    SmartDevice coffee("Coffee Maker Pro", "Coffee Overlord", "on");

    light.display();
    vacuum.display();
    coffee.display();

    return 0;
}
