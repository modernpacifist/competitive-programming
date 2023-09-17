#!/bin/env python3.9


def find_it_v2(seq):
    return [x for x in seq if seq.count(x) % 2 == 1][0]


def main():
    seq = [1,2,2,3,3,3,4,3,3,3,2,2,1]
    print(find_it_v2(seq))


if __name__ == "__main__":
    main()
