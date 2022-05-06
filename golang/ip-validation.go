package main

import "fmt"

func Is_valid_ip(ip string) bool {

	return false
}

func main() {
	fmt.Println(Is_valid_ip("1.2.3"))
	fmt.Println(Is_valid_ip("1.2.3.4.5"))
	fmt.Println(Is_valid_ip("123.456.78.90"))
	fmt.Println(Is_valid_ip("123.045.067.089"))
}
