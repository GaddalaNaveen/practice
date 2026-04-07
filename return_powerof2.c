#include <stdio.h>
unsigned long retPoweroFtwo(unsigned int num)
{
    unsigned long power = 2;
    if(num == 0) return 1;
    for(int i = 1; i < num ; i++){
         power = power * 2;
    }
    return power;
}

void convert2dto1d(int col, int row,int a [row][col]){ //from c99 variable array size
    int mul = col*row,k=0;
    int array[col*row];
    for(int i = 0; i < row; i++){
        for(int j=0; j < col; j++){
            array[k++] = a[i][j];
        }
    }
    for(int i=0;i<mul;i++){
        printf("%d ", array[i]);    
    }
}

int main() {
    // Write C code here
 //   printf("Try programiz.pro");

//    printf("%d\n",retPoweroFtwo(1));

int b[2][5] = {{1,2,3,4,5},
               {6,7,8,9,10}
    };
    convert2dto1d(2,5,b);

    return 0;
}
