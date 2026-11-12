#ifndef BOOKING_H
#define BOOKING_H

#include <string>

enum class BookingStatus {
    Created,
    Confirmed,
    CheckedIn,
    CheckedOut,
    Cancelled,
    NoShow
};

class Booking {
private:
    int id;
    int guestId;
    int roomNumber;
    std::string checkInDate;
    std::string checkOutDate;
    BookingStatus status;

public:
    Booking(int bookingId, int guest, int room,
            std::string checkIn, std::string checkOut)
        : id(bookingId),
          guestId(guest),
          roomNumber(room),
          checkInDate(checkIn),
          checkOutDate(checkOut),
          status(BookingStatus::Created) {}

    int getId() const {
        return id;
    }

    int getGuestId() const {
        return guestId;
    }

    int getRoomNumber() const {
        return roomNumber;
    }

    std::string getCheckInDate() const {
        return checkInDate;
    }

    std::string getCheckOutDate() const {
        return checkOutDate;
    }

    BookingStatus getStatus() const {
        return status;
    }
};

#endif
