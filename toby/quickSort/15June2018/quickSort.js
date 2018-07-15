function main() {
  const nums = [3, 5, 8, 7, 9, 6, 1, 2, 4];

  quickSort(nums);
  console.log(nums);
}

function quickSort(arr, lo = 0, hi = (arr.length - 1)) {
  if (lo > hi || lo === hi) return;

  let p = partition(arr, lo, hi);
  quickSort(arr, )
}
