function binarySearch(arr, x) {
  let start = 0;
  let end = arr.length - 1;

  while (start <= end) {
    let mid = Math.floor((start + end) / 2);

    if (arr[mid] == x) {
      return mid;
    } else if (x > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return -1;
}

let arr = [3, 5, 6, 8, 44, 66, 70, 80, 100];

let ans = binarySearch(arr, 70);

console.log(ans);
