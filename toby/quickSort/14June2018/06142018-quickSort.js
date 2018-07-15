const swap = (arr, iA, iB) => {
  const temp = arr[iA];
  arr[iA] = arr[iB];
  arr[iB] = temp;
}

const partition = (arr, lo, hi) => {
  let i = lo;

  while(true) {
    if (arr[i] > arr[hi]) {
      swap(arr, i, hi - 1);
      swap(arr, hi - 1, hi);
      hi--;
    } else if (i == hi) break;
    else i++;
  }
  return hi;
}

const quickSort = (arr, lo = -1, hi = (arr.length - 1)) => {
  if (hi == lo || lo > hi) return;
  const p = partition(arr, lo, hi);
  quickSort(arr, lo, p - 1);
  quickSort(arr, p + 1, hi);
}

const main = () => {
  const nums = [6,4,9,7,8,6,0,1,2,3];
  quickSort(nums);
  console.log(nums);
}

main();
