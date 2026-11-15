#!/usr/bin/env python3

def input_temperature(temp_str: str) -> int:
    return (int(temp_str))


def test_temperature() -> None:
    print("=== Garden Temperature ===")
    print()
    print("Input data is '25'")
    try:
        res = input_temperature("25")
        print(f"Temperature is now {res}°C")
    except ValueError as e:
        print(f"{e}")
    print()
    print("Input data is 'abc'")
    try:
        res = input_temperature("abc")
        print(f"Temperature is now {res}°C")
    except ValueError as e:
        print(f"{e}")
    print()
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
