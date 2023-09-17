package main

import (
	"crypto/md5"
	"io"
	"fmt"
)

func PassHash(str string) string {
	h := md5.New()
	io.WriteString(h, str)
	return fmt.Sprintf("%x", h.Sum(nil))
}

func main() {
	fmt.Println(PassHash("password"))
}
