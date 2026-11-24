#include<stdio.h>

int main() { 
    int rows, cols, rows_B, cols_B;
    int size;
    int a[size][size], b[size][size], sum[size][size], diff[size][size];
    int operation;
    
    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Choose an operation: \n 1.Addition \n 2.Subtraction \n 3.Both \n");
    printf("Enter your choice: ");
    scanf("%d", &operation);
    
    if(operation < 1 || operation > 3){
        printf("Invalid Operation");
        return 0;
    }  

// A
    printf("Enter no. of rows in A: ");
    scanf("%d", &rows);
    printf("Enter no. of columns in A: ");
    scanf("%d", &cols);

// B
    printf("Enter no. of rows in B: ");
    scanf("%d", &rows_B);
    printf("Enter no. of columns in B: ");
    scanf("%d", &cols_B);

    if(rows != rows_B || cols != cols_B){
        printf("Invalid! Addition or Subtraction not possible.");
        return 0;
    }

    
    //  elements in A
    printf("Enter elements in A: ");
    for(int i = 0; i < rows ; i++){
        for(int j = 0; j < cols ; j++){
            scanf("%d", &a[i][j]);
        }
    }
    // elements in B
    printf("Enter elements in B: ");
    for(int i = 0 ; i < rows_B; i++){
        for(int j = 0; j < cols_B; j++){
            scanf("%d", &b[i][j]);
        }
    }

    switch(operation){
    case 1 : // addition
    for(int i = 0; i < rows; i++){
        for(int j = 0 ; j < cols; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Addition is: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    break;

    case 2 : //Subtraction
    for(int i = 0; i < rows ; i++){
        for(int j = 0; j < cols ; j++){
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Subtrattion is: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d " , diff[i][j]);
        }
        printf("\n");
    }
    break;

    case 3:  //Both
    // addition
    for(int i = 0; i < rows; i++){
        for(int j = 0 ; j < cols; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Addition is: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    // subtraction
    for(int i = 0; i < rows ; i++){
        for(int j = 0; j < cols ; j++){
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Subtration is: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d " , diff[i][j]);
        }
        printf("\n");
    }
    break;

    default :
    printf("Invalid!") ;
 
    }
    return 0;
}