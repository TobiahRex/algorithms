function main() {
  const nums = [3, 5, 8, 7, 9, 6, 1, 2, 4];

  quickSort(nums);
  console.log(nums);
}

function quickSort(arr, lo = 0, hi = (arr.length - 1)) {
  if (lo > hi || lo === hi) return;

  let p = partition(arr, lo, hi);
  quickSort(arr, lo, p - 1);
  quickSort(arr, p + 1, hi);
}

function partition(arr, lo, hi) {
  let iNext = lo,
    iPartition = hi;

  while(true) {
    if (arr[iNext] > arr[iPartition]) {

    }
  }
}

function swap(arr, i1, i2) {
  const temp = arr[i1],
    arr[i1] = arr[i2],
    arr[i2]= temp;
}
