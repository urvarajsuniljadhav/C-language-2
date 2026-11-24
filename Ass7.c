#include <stdio.h>

struct Student {
    char name[50];
    int rollno;
    float marks[3];
    float total;
    float percentage;
};

int main() {
    struct Student s[100];
    int i;

    s[i].total = 0;

    printf("Enter student name: ");
    scanf(" %[^\n]", s[i].name);

    printf("Enter roll number: ");
    scanf("%d", &s[i].rollno);

    printf("Enter marks of 3 subjects:");

    for (int j = 0; j < 3; j++) {
        printf("Subject %d: ", j + 1);
        scanf("%f", &s[i].marks[j]);

        s[i].total += s[i].marks[j];
    }
   

    s[i].percentage = (s[i].total / 300) * 100;
    

    printf("\n--- Student Details ---\n");
    printf("Name\t");
    printf("Roll Number\t");
    printf("Subject 1\t");
    printf("Subject 2\t");
    printf("Subject 3\t");
    printf("Total\t");
    printf("Percentage:\t\t\n");

    printf("%s\t", s[i].name);
    printf("%d\t\t", s[i].rollno);
    printf("%.2f\t\t", s[i].marks[1]);
    printf("%.2f\t\t", s[i].marks[2]);
    printf("%.2f\t\t", s[i].marks[3]);
    printf("%.2f\t\t", s[i].total);
    printf("%.2f%%\t", s[i].percentage);    


    return 0;
}
