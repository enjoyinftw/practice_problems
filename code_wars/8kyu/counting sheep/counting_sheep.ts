export function countSheeps(arrayOfSheep: (boolean | undefined | null)[]) {
  let count: number = 0;
  let sheep: any;
  for (sheep of arrayOfSheep) {
    if (sheep == true){
      count++;
    }
  }
  return count;
}