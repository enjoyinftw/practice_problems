export function findNeedle(haystack: any[]): string {
  for (var item in haystack) {
    if (haystack[item] === "needle") {
      return `found the needle at position ${item}`;
    }
  }
  return "";
}
