#include <stdio.h>

struct Student{
    int roll;
    char name[20];
};

int main(){
    struct Student stud;
    // Receiving the value
    scanf("%d", &stud.roll);
    scanf(" %[^\n]s", stud.name);
    // Printing the value
    printf("The roll is : %d\n", stud.roll);
    printf("The name is : %s\n", stud.name);
    return 0;
}
