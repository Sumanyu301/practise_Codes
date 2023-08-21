#include <bits/stdc++.h>
#include <string.h>

struct Student {
    char name[100];
    int roll;
    long no;
};


int sum(struct Student arr[]) {
    int summ = 0;
    for (int i = 0; i < 3; i++) {
        summ += arr[i].no;  
    }
    return summ;
}

int main() {
    struct Student arr[3];
    arr[0].roll = 1;
    strcpy(arr[0].name, "John");
    arr[0].no = 35;
    arr[1].roll = 2;
    strcpy(arr[1].name, "John wick");
    arr[1].no = 75;
    arr[2].roll = 3;
    strcpy(arr[2].name, "John wick 3");
    arr[2].no = 50;

    for (int i = 0; i < 3; i++) {
        printf("Roll: %d\n", arr[i].roll);
        printf("Name: %s\n", arr[i].name);
        printf("Number: %ld\n", arr[i].no);
        printf("\n");
    }

    int a = sum(arr);
    printf("Sum of numbers: %d\n", a);

    return 0;
}
