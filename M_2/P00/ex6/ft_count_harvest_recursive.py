def ft_count_harvest_recursive():
    d = int(input("Days until harvest: "))

    def curr_day(i):
        if i > d:
            print("Harvest time!")
            return
        print("Day", i)
        curr_day(i + 1)

    curr_day(1)
