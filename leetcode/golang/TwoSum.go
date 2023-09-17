package main

import "fmt"

func twoSum(nums []int, target int) []int {
	j := 0

	for i := 0; i < len(nums); i++ {
		if nums[i] + nums[j] == target {
			return []int{i, j}
		}
	}

	return []int{0, 0}
}

func main() {
	nums := []int{2, 7, 11, 15, 9}

	fmt.Println(twoSum(nums, 9))
}
