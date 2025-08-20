let number = 123;
let digits = "";
while (number > 0) {
  digits += Math.floor(number % 10);
  number = Math.floor(number / 10);
}
console.log(digits);
