package main

import "fmt"

func isPalindrome(x int) bool  {
	if x < 0 {
		return false
	}
	return true
}

func main() {
	fmt.Println(isPalindrome(121))
	fmt.Println(isPalindrome(-121))
}
