#!/usr/bin/env python3


def garden_operations(operation_number: int) -> None:
    if operation_number == 0:
        int('abc')
    if operation_number == 1:
        0/0
    if operation_number == 2:
        open('/non/existent/file')
    if operation_number == 3:
        '4' + 4


def test_error_types() -> None:
    i = 0

    print("=== Garden Error Types Demo ===")
    while (i <= 4):
        try:
            print(f"Testing operation {i}...")
            garden_operations(i)
            print("Operation completed successfully")
        except ValueError as e:
            print(f"Caught ValueError: {e}")
        except ZeroDivisionError as e:
            print(f"Caught ZeroDivisionError: {e}")
        except FileNotFoundError as e:
            print(f"Caught FileNotFoundError: {e}")
        except TypeError as e:
            print(f"Caught TypeError: {e}")
        i += 1
    print()
    print("All error types tested successfully!")


if __name__ == "__main__":
    test_error_types()
