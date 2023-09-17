#!/bin/env python3.9


def iq_test(numbers):
    l = [int(i) % 2 == 0 for i in numbers.split()]
    return l.index(True) + 1 if l.count(True) == 1 else l.index(False) + 1



def main():
    str_list = ["2 4 7 8 10", "1 2 1 1", "2 4 8 7 10 12 14 16"]

    for i in str_list:
        print(iq_test(i))


if __name__ == "__main__":
    main()
