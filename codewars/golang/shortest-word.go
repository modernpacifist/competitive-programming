package main

import (
	"fmt"
	"strings"
)

func FindShort(s string) int {
	splitted := strings.Fields(s)
	min := len(splitted[0])
	for i := 0; i < len(splitted); i++ {
		l := len(splitted[i])
		if min > l {
			min = l
		}
	}
	return min
}

func main() {
	fmt.Println(FindShort("should test that the solution returns the correct value"))
}
