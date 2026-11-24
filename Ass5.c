#include <stdio.h>
#include <string.h>

int main() {
    int func;
    char str1[100], str2[100];
    printf("---STRING FUNCTIONS--- \n1.Str Length \n2.Str concatenation  \n3.Str Compare \n4.Str Copy");
    printf("\nEnter String Function: ");
    scanf("%d", &func);
    getchar();

    switch(func) {
        case 1 : {
        printf("Enter Str: ");
        fgets(str1, sizeof(str1), stdin);
        str1[strcspn(str1, "\n")] ='\0';
        int len = strlen(str1);
        printf("length = %d" , len);
        break;
        }

        case 2: {
        printf("Enter first str: ");
        fgets(str1, sizeof(str1), stdin);
        str1[strcspn(str1, "\n")] = '\0';
        printf("Enter second str: ");
        fgets(str2, sizeof(str2), stdin);
        str2[strcspn(str2, "\n")] = '\0' ;

        strcat(str1, str2);
        printf("Result = %s ", str1);
        break;
        }

        case 3: {
        printf("Enter first str: ");
        fgets(str1, sizeof(str1), stdin);
        str1[strcspn(str1, "\n")] = '\0';
        printf("Enter second str: ");
        fgets(str2, sizeof(str2), stdin);
        str2[strcspn(str2, "\n")] = '\0';

        int compare = strcmp(str1, str2);
        if(compare < 0){
            printf("str1 is lexicographically smaller");
        }
        else if(compare > 0) {
            printf("str2 is lexicographicallly smaller");
        }
        else{
            printf("Both are Equal");
        }
        break;
        }  

        case 4: {
        printf("Enter str1: ");
        fgets(str1, sizeof(str1), stdin);
        str1[strcspn(str1, "\n")] = '\0';
        strcpy(str2, str1);
        printf("str2 = %s" , str2);
        break;
        }

        default:
        printf("Invalid!");
        break;

    }

    return 0;

}