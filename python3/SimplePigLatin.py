#!/bin/env python3.9


def pig_it(text):
    return " ".join([i[1:] + i[0] + "ay" if i not in ['!', '?'] else i  for i in text.split()])


def main():
    print(pig_it("O tempora o mores !"))


if __name__ == "__main__":
    main()
