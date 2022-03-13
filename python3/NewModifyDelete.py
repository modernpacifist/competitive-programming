#!/bin/env python3.9


class Pair:
    def __init__(self, one, two):
        self.first = one
        self.second = two


def getNew(a, b):
    diff = []
    for i in range(len(b)):
        if b[i].first != a[i].first:
            diff.append(a[i])
    return diff


def getDelete(a, b):
    diff = []
    for i in range(len(a)):
        if b[i].first != a[i].first:
            diff.append(b[i])
    return list(set(diff))


def getModify(a, b):
    diff = []
    for i in a:
        for j in b:
            if i.first == j.first and i.second != j.second:
                diff.append(i)
    return diff


def printPairList(Diff):
    for i in Diff:
        print(i.__dict__, end=" ")
    print()


def main():
    A = [Pair(1, 132124), Pair(2, 34324), Pair(3, 2342)]
    B = [Pair(1, 13224), Pair(2, 34324), Pair(4, 34242)]

    print("New:")
    printPairList(getNew(A, B))

    print("To delete:")
    printPairList(getDelete(A, B))

    print("To modify:")
    printPairList(getModify(A, B))


if __name__ == "__main__":
    main()
