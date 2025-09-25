package kata

func CountSheeps(numbers []bool) int {
  var count int = 0
    for i := 0; i < len(numbers); i++{
      if (numbers[i] == true) {
        count++
      }
    }
  
  return count
}
