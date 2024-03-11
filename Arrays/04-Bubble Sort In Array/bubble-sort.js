let arr = [6, 5, 2, 3, 7, 8, 0];

for (let i = 0; i < arr.length; i++) {
  let swapped = 0;

  for (let j = 0; j < arr.length - i - 1; j++) {
    if (arr[j] > arr[j + 1]) {
      swapped = 1;

      ourSwap(arr, j, j + 1);
    }
  }

  if (swapped == 0) {
    break;
  }
}

function ourSwap(arr, x, y) {
  let temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
}

console.log(arr);
