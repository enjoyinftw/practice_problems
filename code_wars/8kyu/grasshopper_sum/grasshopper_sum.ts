export const summation = (num: number) => {
  let sum = 0;
  let i = 1;
  while (i <= num) {
    sum += i;
    i++;
  }
  return sum;
};
