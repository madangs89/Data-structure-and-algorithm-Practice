let arr = [1, 4, 2, 1, 3, 4, 1];
let m = new Map();
for (let i = 0; i < arr.length; i++) {
  m.set(arr[i], (m.get(arr[i]) || 0) + 1);
}
console.log(m.get(1));
