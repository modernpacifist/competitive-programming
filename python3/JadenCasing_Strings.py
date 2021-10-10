#!/bin/env python3.9


def to_jaden_case(quote):
    return " ".join([i.capitalize() for i in quote.split(' ')])


def main():
    quote = "How can mirrors be real if our eyes aren't real"
    print(to_jaden_case(quote))


if __name__ == "__main__":
    main()
