#!/usr/bin/env python3


class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        self.name = name
        self._height = height if height >= 0 else 0.0
        self._age = age if age >= 0 else 0

    def show(self) -> None:
        print(f"Plant created: {self.name}: {self._height:.1f}cm, "
              f"{self._age} days old")

    def set_height(self, new_height: float) -> None:
        if new_height >= 0:
            self._height = new_height
            print(f"Height updated: {self._height:.0f}cm")
        else:
            print(f"{self.name}: Error, height can't be negative")
            print("Height update rejected")

    def set_age(self, new_age: int) -> None:
        if new_age >= 0:
            self._age = new_age
            print(f"Age updated: {self._age} days")
        else:
            print(f"{self.name}: Error, age can't be negative")
            print("Age update rejected")

    def get_height(self) -> float:
        return self._height

    def get_age(self) -> int:
        return self._age


def ft_garden_security() -> None:
    rose = Plant("Rose", 15.0, 10)

    print("=== Garden Security System ===")
    rose.show()
    print()
    rose.set_height(25.0)
    rose.set_age(30)
    print()
    rose.set_height(-50)
    rose.set_age(-10)
    print()
    print(f"Current state: {rose.name}: {rose.get_height():.1f}cm, "
          f"{rose.get_age()} days old")


if __name__ == "__main__":
    ft_garden_security()
