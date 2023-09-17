#!/bin/env python3.9


def narcissistic(value):
    return value == sum(int(i) ** len(str(value)) for i in str(value))


def main():
    print(narcissistic(153))
    print(narcissistic(1652))


if __name__ == "__main__":
    main()
