String.prototype.toJadenCase = function () {
  let str = this;
  return this.split(" ").map((word) => (word.slice(0,1).toUpperCase() + word.slice(1).toLowerCase())).join(" ")
};

interface String {
  // Declaration needed, don't remove it
  toJadenCase(): string;
}
