let string = "acbeadsfe";

let hashMap = new Array(256).fill(0);
for (let i = 0; i < string.length; i++) {
  hashMap[string[i].charCodeAt(0)]++;
}
console.log(hashMap["d".charCodeAt(0)]);
