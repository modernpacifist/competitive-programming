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

	str := strconv.Itoa(x)
	length := len(str)

	for i := 0; i < length/2; i++ {
		if str[i] != str[length-i-1] {
			return false
		}
	}

	return true
}

func main() {
	fmt.Println(isPalindrome(121))
	fmt.Println(isPalindrome(-121))
	fmt.Println(isPalindrome(1488))
	fmt.Println(isPalindrome(8841488))
}
