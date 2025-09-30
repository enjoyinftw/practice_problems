export const digitize = (n: number): number[] => {
  if (n === 0) {
    return [0];
  }
  let result: number[] = [];
  while (n > 0) {
    result.push(n % 10);
    n = Math.floor(n / 10);
  }
  return result;
};
