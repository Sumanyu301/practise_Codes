// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     char str[100]; // Make the character array larger to accommodate a name
//     FILE *fp;

//     // Open the file in write mode (if it doesn't exist, it will be created)
//     fp = fopen("f1.txt", "w");

//     if (fp == NULL) {
//         perror("Error opening file");
//         return 1; // Exit the program with an error code
//     }

//     printf("Enter your name: ");
//     fgets(str, sizeof(str), stdin); // Read a line of text from the user

//     fputs(str, fp); // Write the input to the file

//     fclose(fp); // Close the file

//     return 0; // Exit the program successfully
// }


#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100]; // Make the character array larger to accommodate a name
    FILE *fp;

    // Open the file in write mode (if it doesn't exist, it will be created)
    fp = fopen("f1.txt", "a");

    if (fp == NULL) {
        perror("Error opening file");
        return 1; // Exit the program with an error code
    }

    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin); // Read a line of text from the user

    fputs(str, fp); // Write the input to the file

    fclose(fp); // Close the file

    return 0; // Exit the program successfully
}


