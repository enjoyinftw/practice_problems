package kata

func Digitize(n int) []int {
	result := []int{}

	if n == 0 {
		result = append(result, 0)
		return result
	}

	for ; n > 0; n = n / 10 {
		result = append(result, n%10)
	}

	return result
}
