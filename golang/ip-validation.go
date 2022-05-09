package main

import (
	"fmt"
	"regexp"
	"strconv"
)

func Is_valid_ip(ip string) bool {
	flag := true
	//r := regexp.MustCompile(`(?P<first>[0-9]{1,3}).(?P<second>[0-9]{1,3}).(?P<third>[0-9]{1,3}).(?P<fourth>[0-9]{1,3})`)
	r := regexp.MustCompile(`(?P<first>[0-9]{1,3}).(?P<second>[0-9]{1,3}).(?P<third>[0-9]{1,3}).(?P<fourth>[0-9]{1,3})`)
	names := r.SubexpNames()

	result := r.FindAllStringSubmatch("1.2.3.4", -1)
	m := map[string]string{}
	for i, n := range result[0] {
		m[names[i]] = n
	}
	for _, v := range m {
		//fmt.Println(v)
		i, _ := strconv.Atoi(v)
		fmt.Println(i)
		if (i > 256 && i < 1) {
			flag = false
		}
	}

	return flag
}

func main() {
	//r := regexp.MustCompile(`(?P<first>[0-9]{1,3}).(?P<second>[0-9]{1,3}).(?P<third>[0-9]{1,3}).(?P<fourth>[0-9]{1,3})`)
	//names := r.SubexpNames()

	//result := r.FindAllStringSubmatch("1.2.3.4", -1)
	//m := map[string]string{}
	//for i, n := range result[0] {
		//m[names[i]] = n
	//}

	//fmt.Println(m["first"])
	//fmt.Println(m["second"])
	//fmt.Println(m["third"])
	//fmt.Println(m["fourth"])

	fmt.Println(Is_valid_ip("1.2.3.-4"))
	//fmt.Println(Is_valid_ip("1.2.3. 4"))
	//fmt.Println(Is_valid_ip("1.2.3.4"))
	//fmt.Println(Is_valid_ip("1.2.3.4.5"))
	//fmt.Println(Is_valid_ip("123.456.78.90"))
	//fmt.Println(Is_valid_ip("123.045.067.089"))
}
