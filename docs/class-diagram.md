
# Діаграма класів Hotel Management System

На діаграмі показані основні класи системи управління готелем та заплановане використання патернів проєктування.

```mermaid
classDiagram
    class Room {
        -int number
        -int capacity
        -double price
        +getNumber() int
        +getCapacity() int
        +getPrice() double
    }

    class Guest {
        -int id
        -string name
        -string phone
        +getId() int
        +getName() string
        +getPhone() string
    }

    class Booking {
        -int id
        -int guestId
        -int roomNumber
        -string checkInDate
        -string checkOutDate
        -BookingStatus status
        +getId() int
        +getStatus() BookingStatus
    }

    class Hotel {
        -rooms
        -guests
        -bookings
        +addRoom()
        +addGuest()
        +createBooking()
        +checkAvailability()
    }

    class BookingState {
        <<interface>>
        +confirm()
        +checkIn()
        +checkOut()
        +cancel()
    }

    class CreatedState
    class ConfirmedState
    class CheckedInState

    class PricingStrategy {
        <<interface>>
        +calculatePrice() double
    }

    class StandardPricing
    class SeasonalPricing

    class Service {
        <<interface>>
        +getPrice() double
    }

    class BasicStay
    class ExtraServiceDecorator

    Hotel "1" o-- "*" Room
    Hotel "1" o-- "*" Guest
    Hotel "1" o-- "*" Booking
    Booking --> Guest
    Booking --> Room

    Booking --> BookingState
    BookingState <|.. CreatedState
    BookingState <|.. ConfirmedState
    BookingState <|.. CheckedInState

    PricingStrategy <|.. StandardPricing
    PricingStrategy <|.. SeasonalPricing
    Hotel --> PricingStrategy

    Service <|.. BasicStay
    Service <|.. ExtraServiceDecorator
    ExtraServiceDecorator --> Service
```

## Пояснення

Room зберігає інформацію про номер готелю.

Guest зберігає інформацію про гостя.

Booking містить інформацію про бронювання, дати та його стан.

Hotel відповідає за управління номерами, гостями та бронюваннями.

State планується для керування станами бронювання.

Strategy планується для розрахунку вартості проживання за різними тарифами.

Decorator планується для додавання додаткових послуг до вартості проживання.
