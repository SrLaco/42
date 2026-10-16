def ft_water_reminder():
    d = int(input("Days since last watering: "))

    if d <= 2:
        print("Plants are fine")
    else:
        print("Water the plants!")
