package main

import (
    "fmt"
    "strconv"
)


func MultiTable(number int) string {
    var a string
    for i := 1; i <= 10; i++ {
        a += strconv.Itoa(i)
        a += " * "
        a += strconv.Itoa(number)
        a += " = "
        a += strconv.Itoa(i * number)
        a += "\n"
    }
    return a
}

func main() {
    fmt.Println(MultiTable(5))
}

