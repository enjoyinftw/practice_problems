package kata

import "math"

func MakeNegative(x int) int {
	if x < 0 {
		return x
	}
	return int(-math.Abs(float64(x)))
}