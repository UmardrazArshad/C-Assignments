#include <iostream>
#include <string>

class Car {
private:
    int yearModel;
    std::string make;
    int speed;

public:
    // Constructor to initialize yearModel and make, speed set to 0
    Car(int yModel, const std::string& carMake) : yearModel(yModel), make(carMake), speed(0) {}

    // Accessor functions (getters)
    int getYearModel() const {
        return yearModel;
    }

    std::string getMake() const {
        return make;
    }

    int getSpeed() const {
        return speed;
    }

    // Function to accelerate: adds 5 to the speed
    void accelerate() {
        speed += 5;
    }

    // Function to brake: subtracts 5 from the speed
    void brake() {
        if (speed >= 5) {
            speed -= 5;
        } else {
            speed = 0;
        }
    }
};

int main() {
    // Create a Car object
    Car myCar(2021, "Toyota");

    // Call accelerate function 5 times and display the speed after each call
    std::cout << "Accelerating...\n";
    for (int i = 0; i < 5; ++i) {
        myCar.accelerate();
        std::cout << "Current speed: " << myCar.getSpeed() << " mph\n";
    }

    // Call brake function 5 times and display the speed after each call
    std::cout << "\nBraking...\n";
    for (int i = 0; i < 5; ++i) {
        myCar.brake();
        std::cout << "Current speed: " << myCar.getSpeed() << " mph\n";
    }

    return 0;
}
