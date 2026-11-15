#!/usr/bin/env python3


class PlantError(Exception):
    def __init__(self, message: str = "Unknown garden error"):
        super().__init__(message)


def water_plant(plant_name: str) -> None:
    if (plant_name != plant_name.capitalize):
        raise PlantError(f" Invalid plant name to water: '{plant_name}'")
    print(f"Watering {plant_name}: [OK]")


def test_watering_system() -> None:
    print("=== Garden Watering System ===")
    print()
    print("Testing valid plants...")
    print("Opening watering system")
    plants = ["Tomato", "Lettuce", "Carrots"]
    for plant in plants:
        try:
            water_plant(plant)
        except PlantError as e:
            print(f"Caught PlantError: {e}")
            print(".. ending tests and returning to main")
        finally:
            plants = [""]
            print("Closing watering system")
    print()
    print("Testing invalid plants...")
    print("Opening watering system")
    plants = ["Tomato", "lettuce", "carrtos"]
    for plant in plants:
        try:
            water_plant(plant)
        except PlantError as e:
            print(f"Caught PlantError: {e}")
            print(".. ending tests and returning to main")
        finally:
            plants = [""]
            print("Closing watering system")
    print()
    print("Cleanup always happens, even with errors!")


if __name__ == "__main__":
    test_watering_system()
