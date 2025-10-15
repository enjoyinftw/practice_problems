export function betterThanAverage(
  classPoints: number[],
  yourPoints: number
): boolean {
  return classPoints.reduce((prev, curr) => prev + curr,0 ) < yourPoints * classPoints.length
}
