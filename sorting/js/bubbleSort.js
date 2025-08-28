let arr = [5, 5, 5, 5];

const swap = (arr, i, j) => {
  let temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
};

const bubbleSort = (arr, n) => {
  for (let i = 0; i < arr.length; i++) {
    let isSwapped = false;
    for (let j = 0; j < arr.length - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr, j, j + 1);
        isSwapped = true;
      }
    }
    if (!isSwapped) {
      console.log("All are already swapped");
      return;
    }
  }
};

bubbleSort(arr, arr.length);
for (let i = 0; i < arr.length; i++) {
  console.log(arr[i]);
}
