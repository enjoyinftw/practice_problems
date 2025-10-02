export const check = (a: (number | string)[], x: number | string): boolean => {
  let found: boolean = false;
  a.forEach((element) => {
    if (element === x) {
      found = true;
    }
  });
  return found;
};
