#!/bin/env python3.9


def sum_cubes(n):
    return sum(i**3 for i in range(1, n+1))


def main():
    print(sum_cubes(1))
    print(sum_cubes(2))
    print(sum_cubes(3))
    print(sum_cubes(4))


if __name__ == "__main__":
    main()
