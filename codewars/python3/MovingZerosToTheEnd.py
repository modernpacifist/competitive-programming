#!/bin/env python3.9


def move_zeros(array):
    a = array.count(0)
    print(a)

    for i in range(a):
        array.remove(0)

    for i in range(a):
        array.append(0)

    return array

    # return [i for i in array if i == 0]


def main():
    print(move_zeros([1, 0, 1, 2, 0, 1, 3]))


if __name__ == "__main__":
    main()
