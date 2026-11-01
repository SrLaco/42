#!/usr/bin/env python3


class Plant:
    def __init__(self, name: str, height: float, age: int,
                 growth: float) -> None:
        self.name = name
        self.height = height
        self._age = age
        self.growth = growth

    def show(self) -> None:
        print(f"{self.name}: {self.height:.1f}cm, {self._age} days old")

    def grow(self) -> None:
        self.height += self.growth

    def age(self) -> None:
        self._age += 1


def simulate_week(plant: Plant) -> None:
    plant.show()
    initial_height = plant.height
    for i in range(1, 8):
        print("=== Day", i, "==")
        plant.grow()
        plant.age()
        plant.show()
    total_growth = plant.height - initial_height
    print(f"Growth this week: {total_growth:.1f}cm \n")


def ft_plant_growth() -> None:
    plants = [
        Plant("Rose", 25.0, 30, 0.8),
        Plant("Sunflower", 80.0, 45, 0.5),
        Plant("Cactus", 15.0, 120, 0.1)
    ]

    print("=== Garden Plant Growth ===")
    for plant in plants:
        simulate_week(plant)


if __name__ == "__main__":
    ft_plant_growth()
