#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate binomial coefficient
unsigned long long binomialCoefficient(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    printf("Pascal's Triangle:\n");

    for (int i = 0; i < rows; i++) {
        // Print leading spaces for alignment
        for (int space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%4llu   ", binomialCoefficient(i, j));
        }
        printf("\n");
    }

    return 0;
}



const ps = require('prompt-sync')()
// const m = ps('Number of rows: ')
const m = 6

for(i=0;i<m+1;i++){
   
    process.stdout.write("*");
    process.stdout.write(" ");
  
}
console.log()
for(i=0;i<m;i++){
    process.stdout.write("*");
    process.stdout.write(" ");
    for(j=0;j<m-1;j++){
        process.stdout.write("  ");
    }
    process.stdout.write("*");
    console.log()
    
}
for(i=0;i<m+1;i++){
    process.stdout.write("*");
    process.stdout.write(" ");
}

const ps = require('prompt-sync')()
const m = ps('Number of rows: ')

function makePat(m){
  for (let i = m; i > 0; i--) {
    for(let k = 0;k<m-i;k++){
      process.stdout.write(" ");
    }
    for (let j = 0; j < i; j++) {
      process.stdout.write('*');
      process.stdout.write(" ");
    }
  console.log('')
  }
  for (let i = 2; i <= m; i++) {
    for(let k = 0;k<m-i;k++){
      process.stdout.write(" ");
    }
    for (let j = 0; j < i; j++) {
      process.stdout.write('*');
      process.stdout.write(" ");
    }
  console.log('')
  }
}

makePat(m)
