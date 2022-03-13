#!/bin/env python3.9


def getNew(a, b):
    diff = []
    for a1 in a:
        if not a1 in b:
            diff.append(a1)
    return diff


def getDelete(a, b):
    diff = []
    return diff


def main():
    input = [(1, 132124), (2, 34324), (3, 2342)]
    output = [(1, 13224), (2, 34324), (4, 34242)]

    print("New files:")
    print(getNew(input, output))

    print("Files to delete:")
    print(getDelete(input, output))


if __name__ == "__main__":
    main()
