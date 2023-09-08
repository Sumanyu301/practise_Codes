// #include <stdio.h>
// #include <string.h>

// struct student {
//     char name[20];
//     int age;
//     int marks;
// };

// int main(void) {
//     struct student S1;
//     strcpy(S1.name, "John"); // Corrected initialization of the name member
//     S1.marks = 93;
//     S1.age = 13;
// }


#include <stdio.h>
#include <string.h>

// struct Person
// {
//     char name[30];
//     int age;
//     char gender;
// };

// int main()
// {
//     struct Person person = { "John", 25, 0 };
    
//     printf(
//         "name: %s\n"
//         "age: %d\n"
//         "gender: %d\n",
//         person.name, person.age, person.gender);
//     getchar();
// }
#include <stdio.h>

struct pet {
    char name[20];
    int age;
    double weight;
};

int main(void) {
    struct pet dog;
    strcpy(dog.name, "Matty");
    dog.age = 4;
    dog.weight = 8.2;
    
    return 0;
}


