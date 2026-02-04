#include <iostream>
#include <string>
using namespace std;

class CricketPlayer {
private:
    string name;
    int jerseyNumber;
    double battingAverage;

public:
    CricketPlayer(string name, int jerseyNumber, double battingAverage) {
        this->name = name;
        this->jerseyNumber = jerseyNumber;
        this->battingAverage = battingAverage;
    }

    CricketPlayer& improveAverage(double runs) {
        battingAverage += runs;
        return *this;
    }

    void playMatch(double runsScored) {
        battingAverage = (battingAverage + runsScored) / 2;
    }

    void displayPlayerStats() {
        cout << "Player: " << name << ", Jersey: " << jerseyNumber 
             << ", Batting Average: " << battingAverage << endl;
    }
};

int main() {
    CricketPlayer babar("Babar Azam", 56, 45.5);
    CricketPlayer rizwan("Muhammad Rizwan", 12, 42.3);
    CricketPlayer saim("Saim Ayub", 32, 38.7);

    babar.displayPlayerStats();
    rizwan.displayPlayerStats();
    saim.displayPlayerStats();

    cout << "\nAfter improving averages:" << endl;
    babar.improveAverage(10).improveAverage(5);
    rizwan.improveAverage(8);
    saim.improveAverage(12).improveAverage(7);

    babar.displayPlayerStats();
    rizwan.displayPlayerStats();
    saim.displayPlayerStats();

    cout << "\nAfter playing matches:" << endl;
    babar.playMatch(85);
    rizwan.playMatch(70);
    saim.playMatch(95);

    babar.displayPlayerStats();
    rizwan.displayPlayerStats();
    saim.displayPlayerStats();

    return 0;
}
