package kata

import "strconv"

func StringToNumber(str string) int {
	result, _ := strconv.ParseInt(str, 10, 64)
	return int(result)
}
