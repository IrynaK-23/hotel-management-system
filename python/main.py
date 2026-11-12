import subprocess
from pathlib import Path

PROJECT_DIR = Path(__file__).resolve().parent.parent
CPP_PROGRAM = PROJECT_DIR / "cpp" / "hotel_app"

def check_room():
    room_number = input("Введіть номер кімнати: ").strip()

    if not room_number.isdigit():
        print("Помилка: введіть правильний номер кімнати")
        return

    try:
        result = subprocess.run(
            [str(CPP_PROGRAM), room_number],
            capture_output=True,
            text=True,
            check=True
        )
        print("Результат C++:")
        print(result.stdout.strip())

    except FileNotFoundError:
        print("Помилка: програму C++ ще не скомпільовано")
    except subprocess.CalledProcessError as error:
        print("Помилка виконання C++:")
        print(error.stdout.strip() or error.stderr.strip())

def main():
    while True:
        print("\nHotel Management System")
        print("Система управління готелем")
        print("1. Перевірка номера")
        print("2. Бронювання номера (у розробці)")
        print("3. Перегляд бронювань (у розробці)")
        print("0. Вихід")

        choice = input("Оберіть дію: ").strip()

        if choice == "1":
            check_room()
        elif choice == "2" or choice == "3":
            print("Ця функція ще розробляється")
        elif choice == "0":
            print("Завершення роботи")
            break
        else:
            print("Невідома команда")

if __name__ == "__main__":
    main()
