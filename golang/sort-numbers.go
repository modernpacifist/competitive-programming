package main

import (
	"fmt"
	"sort"
)

func SortNumbers(numbers []int) []int {
	if numbers == nil {
		return []int{}
	}
	sort.Ints(numbers)
	return numbers
}

func main() {
	fmt.Println(SortNumbers([]int{1, 2, 3, 10, 5}))
}
