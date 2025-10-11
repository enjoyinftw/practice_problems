package kata

func SmallestIntegerFinder(numbers []int) int {
    smallest := numbers[0]
    for _,item := range numbers[1:]{
        if item < smallest {
            smallest = item
        }
    }
  return smallest
}