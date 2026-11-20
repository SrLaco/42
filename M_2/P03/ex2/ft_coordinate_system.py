#!/usr/bin/env python3
import math


def parse_coords(coords: list[str]) -> tuple[float, float, float] | None:
    axis: list[float] = []
    for coord in (coords):
        clean_coord = coord.strip()
        try:
            axis.append(float(clean_coord))
        except ValueError as e:
            print(f"Error on parameter '{clean_coord}': {e}")
            return None
    return (axis[0], axis[1], axis[2])


def get_player_pos() -> tuple[float, float, float]:
    while True:
        usr_input = input(
            "Enter new coordinates as floats in format 'x,y,z': ")
        try:
            coords = usr_input.split(",")
        except ValueError:
            print("Invalid syntax")
            continue
        position = parse_coords(coords)
        if position is not None:
            return position


def main() -> None:
    print("=== Game Coordinate System ===")
    print()
    print("Get a first set of coordinates")
    x1, y1, z1 = get_player_pos()
    print(f"Got a first tuple: ({x1}, {y1}, {z1})")
    print(f"It includes: X={x1}, Y={y1}, Z={z1}")
    distance = math.sqrt((x1)**2 + (y1)**2 + (z1)**2)
    print(f"Distance to center: {round(distance, 4)}")
    print()
    print("Get a second set of coordinates")
    x2, y2, z2 = get_player_pos()
    distance = math.sqrt((x2-x1)**2 + (y2-y1)**2 + (z2-z1)**2)
    print(f"Distance between the 2 sets of coordinates: {round(distance, 4)}")


if __name__ == "__main__":
    main()
