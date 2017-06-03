/**
 * 猴子分桃问题
 */
let peachs = 1;
let count = 0;
function average(peachs) {
  count++;
  let value = (peachs - 1) / 5
  if (Number.isInteger(value)) {
    if (count !== 5) {
      return average(value * 4);
    } else {
      console.log(value);
      return value;
    }
  }
  return 0;
}


while (peachs++) {
  count = 0;
  if (average(peachs) !== 0 && count === 5) break;
}
console.log(peachs);

// 验证
// let x = 1;
// function total(peachs) {
//   peachs = (peachs * 5) + 1;
//   peachs = peachs / 4 * 5 + 1;
//   peachs = peachs / 4 * 5 + 1;
//   peachs = peachs / 4 * 5 + 1;
//   peachs = peachs / 4 * 5 + 1;
//   return peachs;
// }
// while (x++ <= 255) {
//   console.log("x: " + x + " total:" + total(x));
// }