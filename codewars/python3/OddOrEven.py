#!/bin/env python3.9


def odd_or_even(arr):
    if sum(arr) % 2 == 0:
        return "even"
    return "odd"


def main():
    a = [1,2,3]
    b = [1,2,3,3]

    print(odd_or_even(a))
    print(odd_or_even(b))


if __name__ == "__main__":
    main()
