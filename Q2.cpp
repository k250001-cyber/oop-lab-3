#include <iostream>
#include <string>
using namespace std;

class WeekDays {
private:
    string Days[7];
    int CurrentDay;

public:
    WeekDays() {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = 0;
    }

    WeekDays(int day) {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = day % 7;
    }

    string getCurrentDay() {
        return Days[CurrentDay];
    }

    string getNextDay() {
        return Days[(CurrentDay + 1) % 7];
    }

    string getPreviousDay() {
        return Days[(CurrentDay + 6) % 7];
    }

    string getNthDayFromToday(int n) {
        return Days[(CurrentDay + n) % 7];
    }
};

int main() {
    WeekDays week1;
    cout << "Current Day: " << week1.getCurrentDay() << endl;
    cout << "Next Day: " << week1.getNextDay() << endl;
    cout << "Previous Day: " << week1.getPreviousDay() << endl;

    WeekDays week2(8);
    cout << "\nCurrent Day (8 % 7 = 1): " << week2.getCurrentDay() << endl;

    WeekDays week3(1);
    cout << "\n20 days from Monday: " << week3.getNthDayFromToday(20) << endl;

    return 0;
}
