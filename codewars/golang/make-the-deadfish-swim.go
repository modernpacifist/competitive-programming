package main

import (
	"fmt"
)

func Parse(data string) []int {
	var c int = 0
	res := make([]int, 0)

	for _, i := range data {
		switch i {
		case 'i':
			c += 1
			break
		case 'd':
			c -= 1
			break
		case 's':
			c = c * c
			break
		case 'o':
			res = append(res, c)
			break
		}
	}
	return res
}

func main() {
	fmt.Println(Parse("ooo"))
	fmt.Println(Parse("ioioio"))
}
