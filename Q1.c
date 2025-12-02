#include <stdio.h>

int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rowNo = 1;
    int sum = 0;
    int cols = 3;

    for (int j = 0; j < cols; j++)
    {
        sum += mat[rowNo][j];
    }

    printf("The sum of the 2nd row is: %d\n", sum);

    return 0;
}
