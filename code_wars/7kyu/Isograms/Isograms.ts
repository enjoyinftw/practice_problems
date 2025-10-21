export function isIsogram(str: string): boolean {

  return str.length === new Set<string>(str.toLowerCase().split("")).size
}
