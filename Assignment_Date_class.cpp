#include <iostream>
#include <string>

class Date {
private:
    int day;
    int month;
    int year;

    // Array of month names for format 2 and 3
    std::string months[12] = {"January", "February", "March", "April", "May", "June",
                              "July", "August", "September", "October", "November", "December"};

public:
    // Constructor to initialize the date with input validation
    Date(int m, int d, int y) {
        setMonth(m);
        setDay(d);
        setYear(y);
    }

    // Setters with input validation
    void setDay(int d) {
        if (d >= 1 && d <= 31) {
            day = d;
        } else {
            std::cout << "Invalid day! Setting to default 1.\n";
            day = 1; // Default value
        }
    }

    void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            std::cout << "Invalid month! Setting to default 1.\n";
            month = 1; // Default value
        }
    }

    void setYear(int y) {
        year = y;
    }

    // Getters
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    // Print date in format 1: MM/DD/YYYY
    void printFormat1() const {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }

    // Print date in format 2: Month DD, YYYY
    void printFormat2() const {
        std::cout << months[month - 1] << " " << day << ", " << year << std::endl;
    }

    // Print date in format 3: DD Month YYYY
    void printFormat3() const {
        std::cout << day << " " << months[month - 1] << " " << year << std::endl;
    }
};

int main() {
    // Create Date object with input validation
    Date date(12, 25, 2018);  // Valid date
    date.printFormat1();      // Output: 12/25/2018
    date.printFormat2();      // Output: December 25, 2018
    date.printFormat3();      // Output: 25 December 2018

    std::cout << std::endl;

    // Demonstrating invalid inputs
    Date invalidDate(13, 32, 2022);  // Invalid month and day
    invalidDate.printFormat1();      // Output: 1/1/2022 (default values applied)
    invalidDate.printFormat2();      // Output: January 1, 2022
    invalidDate.printFormat3();      // Output: 1 January 2022

    return 0;
}
