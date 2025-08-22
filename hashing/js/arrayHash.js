let arr = [1, 2, 3, 1, 4, 5];
let map = new Array(13).fill(0);
for (let i = 0; i < arr.length; i++) {
  map[arr[i]]++;
}
console.log(map[12]);
