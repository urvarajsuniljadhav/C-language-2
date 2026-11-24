#include<stdio.h>
#include<stdlib.h>

int main() {
    int mode;
    FILE *fptr;
    char filename[100];
    char *filemode;

    printf("-- Modes---");
    printf("\n1. r \t2. w \t3. a \n4. rb \t5. wb \t6. ab \n7. r+ \t8. w+ \t9. a+ \n10. rb+ \t11. wb+ \t12. ab+");
    printf("\nEnter mode: ");
    scanf("%d", &mode);

    printf("Enter filename: ");
    scanf("%s", filename);


    switch(mode) {
        case 1: 
            filemode = "r";
            break;
        case 2 :
            filemode = "w";
            break;
        case 3: 
            filemode = "a";
            break;
        case 4:
            filemode = "rb";
            break;
        case 5: 
            filemode = "wb";
            break;
        case 6:
            filemode = "ab";
            break;
        case 7:
            filemode = "r+";
            break;
        case 8: 
            filemode = "w+";
            break;
        case 9:
            filemode = "a+";
            break;
        case 10:
            filemode = "rb+";
            break;
        case 11:
            filemode = "wb+";
            break;
        case 12:
            filemode = "ab+";
            break;
        default:
            printf("Invalid choice");
            return 0;
    }
    fptr = fopen(filename, filemode);

    if(fptr == NULL){
        printf("Error");
        exit(1);
    }
    printf("File opened successfully!");

    if(mode == 2 || mode == 8) {
        char text[100];
        printf("\nEnter text to write: ");
        getchar();
        fgets(text, sizeof(text), stdin);
        fprintf(fptr, "%s", text);
        printf("Data written successfully!");
    }
    
    if(mode == 5 || mode == 11){
        int num;
        printf("\nEnter a number: ");
        scanf("%d", &num);

        fwrite(&num, sizeof(num), 1, fptr);
        printf("Data written successfully!");
    }

    if(mode == 3 || mode == 9) {
        char text[100];
        printf("\nEnter text to append: ");
        getchar() ;
        fgets(text, sizeof(text), stdin);
        fprintf(fptr, "%s", text);

        printf("data appended successfully!");
    }
    if(mode == 6 || mode == 12){
        int num;
        printf("\nEnetr a number: ");
        scanf("%d", &num);
        fwrite(&num, sizeof(num), 1, fptr);

        printf("data appanded successfully");
    }
}