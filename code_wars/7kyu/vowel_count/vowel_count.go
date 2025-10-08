package kata

import (
	"regexp"
)

func GetCount(str string) (count int) {
	reg := regexp.MustCompile(`[aeiou]`)
	matches := reg.FindAllStringIndex(str, -1)
	count = len(matches)
	return count

}
