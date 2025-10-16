export function number(busStops: [number, number][]): number {
  let passanger: number = 0;
  busStops.forEach((busStop) => {
    passanger += busStop[0] - busStop[1];
  });
  return passanger;
}
