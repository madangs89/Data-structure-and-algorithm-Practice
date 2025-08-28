let arr = [5, 5, 5, 5];

const swap = (arr, i, j) => {
  let temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
};

const insertionSort = (arr, n) => {
  let isSwapped = false;
  for (let i = 0; i < n - 1; i++) {
    let min = i;
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[j] < arr[min]) {
        min = j;
        isSwapped = true;
      }
    }
    if (min == i) {
      continue;
    }
    swap(arr, i, min);
  }
};

insertionSort(arr, arr.length);
for (let i = 0; i < arr.length; i++) {
  console.log(arr[i]);
}
