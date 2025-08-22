let arr = [1, 2, 3, 1, 4, 5];
let map = new Array(arr.length).fill(0);
for (let i = 0; i < arr.length; i++) {
  map[arr[i]]++;
}
console.log(map[2] ? map[2] : 0);
