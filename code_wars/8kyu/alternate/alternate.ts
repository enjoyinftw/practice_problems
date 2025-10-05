export function toAlternatingCase(s: string): string {
  const isLower = (character: string): boolean => {
    return (
      character === character.toLowerCase() &&
      character !== character.toUpperCase()
    );
  };
  let result = "";
  let chars = [...s];

  for (let i in chars) {
    if (isLower(chars[i])) {
      result += chars[i].toUpperCase();
    } else {
      result += chars[i].toLowerCase();
    }
  }

  return result;
}
