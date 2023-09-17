#!/bin/env python3.9


def billboard(name, price=30):
    return sum(price for l in name)


def main():
    print(billboard("Jeong-Ho Aristotelis"))


if __name__ == "__main__":
    main()
