def ft_seed_inventory(seed_type: str, quantity: int, unit: str) -> None:
    supported_units = ("packets", "grams", "area")
    seed_type = seed_type.capitalize()

    if unit not in supported_units:
        print("Unknown unit type")
    elif unit == "packets":
        print(seed_type, "seeds:", quantity, "packets available")
    elif unit == "grams":
        print(seed_type, "seeds:", quantity, "grams total")
    elif unit == "area":
        print(seed_type, "seeds: covers", quantity, "square meters")
