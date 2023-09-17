package main

import "fmt"

func OddCount(n int) int {
	return n >> 1
}

func main() {
	fmt.Println(OddCount(7))
}
