#ifndef GUEST_H
#define GUEST_H

#include <string>

class Guest {
private:
    int id;
    std::string name;
    std::string phone;

public:
    Guest(int guestId, std::string guestName, std::string guestPhone)
        : id(guestId), name(guestName), phone(guestPhone) {}

    int getId() const {
        return id;
    }

    std::string getName() const {
        return name;
    }

    std::string getPhone() const {
        return phone;
    }
};

#endif
