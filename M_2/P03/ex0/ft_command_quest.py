#!/usr/bin/env python3
import sys


def print_args() -> None:
    arguments = sys.argv
    argument_count = len(arguments)
    print("=== Command Quest ===")
    print(f"Program name: {arguments[0]}")
    if argument_count == 1:
        print("No arguments provided!")
    else:
        index = 1
        print(f"Arguments received: {argument_count - 1}")
        for arg in arguments[1:]:
            print(f"Argument {index}: {arg}")
            index += 1
    print(f"Total arguments: {argument_count}")


if __name__ == "__main__":
    print_args()
