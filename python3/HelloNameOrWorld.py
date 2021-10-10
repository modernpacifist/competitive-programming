#!/bin/env python3.9


def hello(name=None):
    if name:
        return f"Hello, {name.title()}!"
    else:
        return "Hello, World!"


def main():
    hello()


if __name__ == "__main__":
    main()
