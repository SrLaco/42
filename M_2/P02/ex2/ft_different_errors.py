#!/usr/bin/env python3


def garden_operations(operation_number: int) -> None:
    if operation_number == 0:
        int('abc')
    if operation_number == 1:
        0/0
    if operation_number == 2:
        open('/non/existent/file')
    if operation_number == 3:
        '4' + 2


def test_error_types() -> None:
    print("=== Garden Error Types Demo ===")
    for i in [0, 1, 2, 3, 4]:
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
    print()
    print("All error types tested successfully!")


if __name__ == "__main__":
    test_error_types()
