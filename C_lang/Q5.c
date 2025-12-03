#include <stdio.h>
struct Student {
    int id;
    char name[50]; 
    float subject1;
    float subject2;
    float subject3;
};

int main() {
    struct Student s1;
    float total;

    printf("--- Enter Student Information ---\n");

    printf("Enter Student ID: ");
    scanf("%d", &s1.id);

    printf("Enter Student Name: ");
    while ((getchar()) != '\n'); 
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter marks for Subject 1: ");
    scanf("%f", &s1.subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &s1.subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &s1.subject3);

    total = s1.subject1 + s1.subject2 + s1.subject3;

    printf("\n--- Student Information ---\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s", s1.name); 
    printf("Subject 1 Marks: %.2f\n", s1.subject1);
    printf("Subject 2 Marks: %.2f\n", s1.subject2);
    printf("Subject 3 Marks: %.2f\n", s1.subject3);
    printf("Total Marks: %.2f\n", total);

    return 0;
}
