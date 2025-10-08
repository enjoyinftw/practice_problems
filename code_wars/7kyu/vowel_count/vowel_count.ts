export class Kata {
  static getCount(str: string): number {
    return (str.match(/[aeiouAEIOU]/g) || []).length 
  }
}
