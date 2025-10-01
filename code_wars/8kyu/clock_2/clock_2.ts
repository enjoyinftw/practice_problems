export function past(h: number, m: number, s: number): number {
  return (60 * 60 * h + 60 * m + s) * 1000;
}
