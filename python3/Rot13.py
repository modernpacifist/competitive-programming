#!/bin/env python3.9


def rot13(message):
    res = ""

    for i in message:
        if i.islower():
            res += chr((ord(i) + 13) % 122 + 96)
        else:
            res += chr((ord(i) + 13) % 90 + 64)

    return res


def main():
    print(rot13("test"))
    print(rot13("Test"))
    print(rot13("test") == "grfg")
    print(rot13("Test") == "Grfg")


if __name__ == "__main__":
    main()
