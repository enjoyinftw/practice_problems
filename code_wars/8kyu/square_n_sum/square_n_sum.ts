export function squareSum(numbers: number[]): number {
  const squares: number[] = numbers.map((x) => x * x);
  const square_sum: number = squares.reduce(
    (acc: number, curr: number) => acc + curr,
    0
  );
  return square_sum;
}
