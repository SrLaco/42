def ft_count_harvest_recursive() -> None:
    d = int(input("Days until harvest: "))

    def curr_day(i: int) -> None:
        if i > d:
            print("Harvest time!")
            return
        print("Day", i)
        curr_day(i + 1)

    curr_day(1)
