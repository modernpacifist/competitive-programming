package main

import (
	"fmt"
	"reflect"
)

func Anagrams(word string, words []string) []string {
	res := make([]string, 0)
	baseWordBuffer := make(map[rune]int, 0)

	for _, c := range word {
		baseWordBuffer[c]++
	}

	for _, w := range words {
		wordBuffer := make(map[rune]int, 0)
		for _, c := range w {
			wordBuffer[c]++
		}
		eq := reflect.DeepEqual(baseWordBuffer, wordBuffer)
		if eq {
			res = append(res, w)
		}
	}

	if len(res) == 0 {
		return nil
	}
	return res
}

func main() {
	// sample text
	fmt.Println(Anagrams("abba", []string{"baba", "abab"}))
	fmt.Println(Anagrams("abba", []string{"bdba", "dbab"}))
}
