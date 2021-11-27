package main

import "fmt"

func Angle(n int) int {
	return 180 * (n-2)
}

func main() {
	angle := Angle(4)
	fmt.Println(angle)
}
