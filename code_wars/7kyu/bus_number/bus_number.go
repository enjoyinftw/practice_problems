package kata

func Number(busStops [][2]int) int {
	result := 0
	for _, busStop := range busStops {
		result += busStop[0] - busStop[1]
	}
	return result
}
