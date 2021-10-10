#!/bin/env python3.9


def high(x):
    max = 0
    res = None

    for word in x.split():
        b = sum(ord(j) - 96 for j in word)
        if b > max:
            max = b
            res = word

    return res


def main():
    print(high("man i need a taxi up to ubud"))


if __name__ == "__main__":
    main()
