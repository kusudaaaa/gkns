#include <iomanip>
#include <stdio.h>
#include <string.h>

typedef struct {
        char name[20];
        int age;
        char country[20];
        int number;

    }student;

void outputstudent(student *a){
    printf("%s",a->name);
    printf("%d",a->age);
    printf("%s",a->country);
    printf("%d",a->number);

}

int main() {

    student student1 = {"クスダ", 18,"japan",123};

    outputstudent(&student1);

    return 0;
}
