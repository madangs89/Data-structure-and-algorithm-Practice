let arr = [1, 2, 4, 4, 2, 13, 1];
let freq = {};
for (let i = 0; i < arr.length; i++) {
  if (freq[arr[i]]) {
    freq[arr[i]]++;
  } else {
    freq[arr[i]] = 1;
  }
}
console.log(freq[2], "answer");

for (let val of Object.keys(freq)) {
  console.log(val, freq[val]);
}
