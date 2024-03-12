let arr = [45, 44, 44, 3, 2, 4, 23, 423];

for (let i = 0; i < arr.length; i++) {
  for (let j = i; j > 0; j--) {
    if (arr[j] < arr[j - 1]) {
      swap(arr, j, j - 1);
    } else {
      break;
    }
  }
}

function swap(arr, x, y) {
  //   let temp = arr[x];
  //   arr[x] = arr[y];
  //   arr[y] = temp;

  [arr[x], arr[y]] = [arr[y], arr[x]]; //you can do this in javascript as well
}

console.log(arr);
