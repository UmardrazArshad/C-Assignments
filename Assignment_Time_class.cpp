#include <iostream>
#include <iomanip> // For formatting the output

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize time to 00:00:00
    Time() : hours(0), minutes(0), seconds(0) {}

    // Constructor to initialize time to fixed values
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Setters
    void setHours(int h) {
        if (h >= 0 && h < 24) hours = h;
        else std::cout << "Invalid hours!\n";
    }

    void setMinutes(int m) {
        if (m >= 0 && m < 60) minutes = m;
        else std::cout << "Invalid minutes!\n";
    }

    void setSeconds(int s) {
        if (s >= 0 && s < 60) seconds = s;
        else std::cout << "Invalid seconds!\n";
    }

    // Getters
    int getHours() const {
        return hours;
    }

    int getMinutes() const {
        return minutes;
    }

    int getSeconds() const {
        return seconds;
    }

    // Function to display time in 11:59:59 format
    void displayTime() const {
        std::cout << std::setw(2) << std::setfill('0') << hours << ":"
                  << std::setw(2) << std::setfill('0') << minutes << ":"
                  << std::setw(2) << std::setfill('0') << seconds << "\n";
    }
};

int main() {
    // Creating object with default constructor
    Time time1;
    time1.displayTime(); // Output: 00:00:00

    // Creating object with parameterized constructor
    Time time2(11, 59, 59);
    time2.displayTime(); // Output: 11:59:59

    // Using setters
    time1.setHours(12);
    time1.setMinutes(30);
    time1.setSeconds(45);
    time1.displayTime(); // Output: 12:30:45

    // Accessing values using getters
    std::cout << "Hours: " << time1.getHours() << "\n";
    std::cout << "Minutes: " << time1.getMinutes() << "\n";
    std::cout << "Seconds: " << time1.getSeconds() << "\n";

    return 0;
}
