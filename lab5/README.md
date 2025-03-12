Lab 6
An magic square of order n is an n x n matrix that is filled with the distinct integers 1, 2, 3, …, n2, such that the elements in each row, each column, and each diagonal sum up to the same constant (called the magic constant M = [n(n2 + 1)] / 2). The following is a magic square of order 4. It contains the numbers 1..16, such that all directions have equal sums (in this case 34).

|     |     |     |     |
| --- | --- | --- | --- |
| 16 | 3  | 2  | 13 |
| 5  | 10 | 11 | 8  |
| 9  | 6  | 7  | 12 |
| 4  | 15 | 14 |	1 |

Write a program that reads n2 values from the keyboard and test whether they form a magic square.

You will need functions such as:
```
void readSquare(int square[][5], int n)		
int leftRightDiagonalSum(int square[][5], int n)	
int rightLeftDiagonalSum(int square[][5], int n)
int columnSum(int square[][5], int n, int columnNumber)
int rowSum(int square[][5], int n, int rowNumber)
bool validMagicSquare(int square[][5], int n)
```
