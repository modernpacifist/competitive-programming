package main

import (
	"fmt"
	"strconv"
)

func reverse(str string) (result string) {
	for _, v := range str {
		result = string(v) + result
	}
	return
}

func isPalindrome(x int) bool  {
	if x < 0 {
		return false
	}

	s2 := strconv.Itoa(x)

	return reverse(s2) == s2
}

func main() {
	fmt.Println(isPalindrome(121))
	fmt.Println(isPalindrome(-121))
	fmt.Println(isPalindrome(1488))
	fmt.Println(isPalindrome(8841488))
}
