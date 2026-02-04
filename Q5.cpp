#include <iostream>
#include <string>
using namespace std;

class FootballPlayer {
private:
    string playerName;
    string position;
    int goalCount;

public:
    FootballPlayer() {
        playerName = "Unknown Player";
        position = "Benchwarmer";
        goalCount = 0;
    }

    FootballPlayer(const FootballPlayer &p) {
        playerName = p.playerName;
        position = p.position;
        goalCount = p.goalCount;
    }

    FootballPlayer(string name, string pos = "Midfielder", int goals = 10) {
        playerName = name;
        position = pos;
        goalCount = goals;
    }

    void addGoals(int goals) {
        goalCount += goals;
    }

    void display() {
        cout << "Player: " << playerName << ", Position: " << position 
             << ", Goals: " << goalCount << endl;
    }
};

int main() {
    FootballPlayer p1;
    FootballPlayer p2("Lionel Messi", "Forward", 800);
    FootballPlayer p3(p2);
    FootballPlayer p4("Cristiano Ronaldo");
    FootballPlayer p5("Neymar Jr", "Winger");

    p1.display();
    p2.display();
    p3.display();
    p4.display();
    p5.display();

    cout << "\nAfter scoring more goals:" << endl;
    p2.addGoals(50);
    p4.addGoals(25);
    p5.addGoals(30);

    p2.display();
    p4.display();
    p5.display();

    return 0;
}

