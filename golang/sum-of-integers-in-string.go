package main

import (
	"fmt"
	"regexp"
	"strconv"
)

func SumOfIntegersInString(strArg string) (res int) {
	for _, v := range regexp.MustCompile(`[0-9]+`).FindAllString(strArg, -1) {
		i, _ := strconv.Atoi(v)
		res += i
	}
	return
}

func main() {
	fmt.Println(SumOfIntegersInString("The30quick20brown10f0x1203jumps914ov3r1349the102l4zydog"))
}
