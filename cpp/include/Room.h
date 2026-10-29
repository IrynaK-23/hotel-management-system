public:
    Room(int roomNumber, int roomCapacity, double roomPrice)
        : number(roomNumber),
          capacity(roomCapacity),
          price(roomPrice) {}
    int getNumber() const {
        return number;
    }
    int getCapacity() const {
        return capacity;
    }
    double getPrice() const {
        return price;
    }
};
