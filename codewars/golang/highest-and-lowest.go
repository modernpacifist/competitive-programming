package main

import "fmt"

func HighAndLow(in string) string {
	res := ""
	min, max := 0, 0

	for _, v := range in {
		fmt.Println(v)
	}

	return res
}

func main() {
	fmt.Println(HighAndLow("1 2 3 4 5"))
	fmt.Println(HighAndLow("1 2 -3 4 5"))
	fmt.Println(HighAndLow("1 9 3 4 -5"))
}
