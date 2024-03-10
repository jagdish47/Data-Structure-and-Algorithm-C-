let arr = [1, 3, 5, 3, 2, 3, 4, 5];

for (let i = 0; i < arr.length - 1; i++) {
  let index = i;

  for (let j = i + 1; j < arr.length; j++) {
    if (arr[j] < arr[index]) {
      index = j;
    }
  }

  swap(arr, i, index); // passed by value
}

function swap(arr, x, y) {
  let temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
}

console.log(arr);
