package kata

import (
	"strings"
	"unicode"
)

func ToAlternatingCase(str string) string {
	result := ""
	for _, i := range str {
		if unicode.IsUpper(i) && unicode.IsLetter(i) {
			result += strings.ToLower(string(i))
		} else if unicode.IsLower(i) && unicode.IsLetter(i) {
			result += strings.ToUpper(string(i))
		} else {
			result += string(i)
		}
	}
	return result
}
