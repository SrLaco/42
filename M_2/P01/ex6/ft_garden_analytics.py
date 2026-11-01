#!/usr/bin/env python3


class Plant:
    class Stats:
        def __init__(self) -> None:
            self.show_count: int = 0
            self.age_count: int = 0
            self.grow_count: int = 0

    def __init__(self, name: str, height: float, age: int) -> None:
        self._name = name or "Unknown plant"
        self._height = height if height >= 0 else 0.0
        self._age = age if age >= 0 else 0
        self._stats = Plant.Stats()

    def show(self) -> None:
        self._stats.show_count += 1
        print(f"{self._name}: {self._height:.1f}cm, {self._age} days old")

    def age(self) -> None:
        self._stats.age_count += 1
        self._age += 20

    def grow(self) -> None:
        self._stats.grow_count += 1

    @staticmethod
    def check_age(_age: int) -> bool:
        return _age > 365

    @classmethod
    def register(cls) -> "Plant":
        return cls("Unknown plant", 0.0, 0)


class Flower(Plant):
    def __init__(self, name: str, height: float, age: int,
                 color: str) -> None:
        super().__init__(name, height, age)
        self.color = color
        self.has_bloomed = "has not bloomed yet"

    def grow(self) -> None:
        super().grow()
        self._height += 8.0
        self.has_bloomed = "is blooming beautifully!"

    def show(self) -> None:
        super().show()
        print(f" Color: {self.color}")
        print(f" {self._name} {self.has_bloomed}")


class Tree(Plant):
    class Stats(Plant.Stats):
        def __init__(self) -> None:
            super().__init__()
            self.shade_count: int = 0

    def __init__(self, name: str, height: float, age: int,
                 trunk_diameter: float) -> None:
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter
        self._stats: Tree.Stats = Tree.Stats()

    def produce_shade(self) -> None:
        self._stats.shade_count += 1
        print(f"Tree {self._name} now produces a shade of {self._height}cm "
              f"long and {self.trunk_diameter}cm wide.")

    def show(self) -> None:
        super().show()
        print(f" Trunk diameter: {self.trunk_diameter}cm")


class Seed(Flower):
    def __init__(self, name: str, height: float, age: int, color: str) -> None:
        super().__init__(name, height, age, color)
        self.seeds = 0

    def show(self) -> None:
        super().show()
        print(f" Seeds: {self.seeds}")

    def grow(self) -> None:
        super().grow()
        self._height += 22.0
        self.seeds += 42


def display_stats(plant: Plant) -> None:
    print(f"[statistics for {plant._name}]")
    print(f"Stats: {plant._stats.grow_count} grow, "
          f"{plant._stats.age_count} age, "
          f"{plant._stats.show_count} show")
    if isinstance(plant, Tree):
        print(f" {plant._stats.shade_count} shade")


def ft_garden_analytics() -> None:
    rose = Flower("Rose", 15.0, 10, "red")
    oak = Tree("Oak", 200.0, 365, 5.0)
    sunflower = Seed("Sunflower", 80.0, 45, "yellow")
    anonymous = Plant.register()

    print("=== Garden statistics ===")
    print("=== Check year-old")
    print("Is 30 days more than a year? ->", Plant.check_age(30))
    print("Is 400 days more than a year? ->", Plant.check_age(400))
    print()
    print("=== Flower")
    rose.show()
    display_stats(rose)
    print("[asking the rose to grow and bloom]")
    rose.grow()
    rose.show()
    display_stats(rose)
    print()
    print("=== Tree")
    oak.show()
    display_stats(oak)
    print("[asking the oak to produce shade]")
    oak.produce_shade()
    display_stats(oak)
    print()
    print("=== Seed")
    sunflower.show()
    print("[make sunflower grow, age and bloom]")
    sunflower.grow()
    sunflower.age()
    sunflower.show()
    display_stats(sunflower)
    print()
    print("=== Anonymous")
    anonymous.show()
    display_stats(anonymous)


if __name__ == "__main__":
    ft_garden_analytics()
