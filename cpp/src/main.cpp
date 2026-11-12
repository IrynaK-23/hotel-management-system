#include <iostream>
#include <string>
#include "Room.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Error: enter room number" << std::endl;
        return 1;
    }

    int roomNumber;

    try {
        roomNumber = std::stoi(argv[1]);
    } catch (...) {
        std::cout << "Error: invalid room number" << std::endl;
        return 1;
    }

    Room room1(101, 2, 1200.0);
    Room room2(102, 3, 1800.0);
    Room room3(103, 4, 2500.0);

    if (roomNumber == room1.getNumber()) {
        std::cout << "Room 101 is available. Price: "
                  << room1.getPrice() << std::endl;
    } else if (roomNumber == room2.getNumber()) {
        std::cout << "Room 102 is available. Price: "
                  << room2.getPrice() << std::endl;
    } else if (roomNumber == room3.getNumber()) {
        std::cout << "Room 103 is available. Price: "
                  << room3.getPrice() << std::endl;
    } else {
        std::cout << "Room not found" << std::endl;
    }

    return 0;
}
