#!/bin/env python3.9


def solution(number):
    if number < 0:
        return 0

    return sum(i for i in range(number) if i % 3 == 0 or i % 5 == 0)


def main():
    print(solution(10))


if __name__ == "__main__":
    main()
