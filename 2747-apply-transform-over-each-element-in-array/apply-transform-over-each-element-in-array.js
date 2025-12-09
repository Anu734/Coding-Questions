/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
const map = (arr, fn) => arr.flatMap(fn);
console.log(map([3, 1, 4], (num) => [num, num]));