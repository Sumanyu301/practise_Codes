#include <stdio.h>
#include <string.h>
#include <math.h>

int intoNum(char *str) {
    int ans = 0, len = strlen(str);
    for(int i = 0; i < len; i++) {
        ans *= 10;
        ans += (str[i] - '0');
    }

    return ans;
}

int isOper(char ch) {
    return (ch == '+' || ch == '-' ||
    ch == '*' || ch == '/' || ch == '^');
}

int calculate(int num1, int num2, char oper) {
    switch (oper) {
        case '+' :
        return num1 + num2;
        case '-' :
        return num1 - num2;
        case '*' :
        return num1 * num2;
        case '/' :
        return num1 / num2;
        case '^' :
        return pow(num1, num2);
        default:
        return -1;
    }
}

int ans(char *str) {
    int stack[10];
    int top = -1;
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        if(str[i] == ' ' || str[i] == '\t') {
            continue;
        }
        if(isOper(str[i])) {
            int num2 = stack[top--];
            int num1 = stack[top--];
            stack[++top] = calculate(num1, num2, str[i]);
        }
        else {
            int start = i;
            int size = 0;
            while(str[i] != ' ') {
                i++;
                size++;
            }
            char temp[10];
            strncpy(temp, str + start, size);
            temp[size] = '\0';
            stack[++top] = intoNum(temp);
        }
    }

    return stack[top];
}

int main() {
    char str[20];
    printf("Enter string: ");
    scanf("%[^\n]s", str);
    int result = ans(str);
    printf("Result is : %d \n", result);
}