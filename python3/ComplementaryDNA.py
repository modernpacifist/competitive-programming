#!/bin/env python3.9


def DNA_strand(dna):
    mapping = str.maketrans(dict(x.split(':') for x in ['A:T', 'C:G']))

    new = dna.translate(mapping)
    dna = new

    return new


def main():
    a = "ATTGC"
    b = "GTAT"

    print(DNA_strand(a))
    print(DNA_strand(b))


if __name__ == "__main__":
    main()
