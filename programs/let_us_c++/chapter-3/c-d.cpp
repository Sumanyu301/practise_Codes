#include <bits/stdc++.h>
using namespace std;
char *convert(char *str, int a)
{
    int i;
    for (i = 0; a; i++)
    {
        str[i] = a % 10 + '0';
        a /= 10;
    }
    str[i] = '\0';
    _strrev(str);
    return (str);
}
char *convert(char *str, float n)
{
    char str1[20];
    char str2[20];
    int a = int(n);
    float point = n - a;
    long point1 = point * 100000000;
    while (point1 % 10 == 0)
    {
        point1 /= 10;
    }
    int i;
    for (i = 0; a; i++)
    {
        str1[i] = a % 10 + '0';
        a /= 10;
    }
    str1[i] = '\0';
    _strrev(str1);
    str1[i] = '\0';
    strcat(str1, ".");
    for (i = 0; point1; i++)
    {
        str2[i] = point1 % 10 + '0';
        point1 /= 10;
    }
    str2[i] = '\0';
    _strrev(str2);
    strcat(str1, str2);
    strcpy(str, str1);
    return (str);
}

int main()
{
    int n;
    float f;
    cout << "Enter an integer and a float : ";
    cin >> n >> f;

    char str[20];
    convert(str, n);
    cout << "Integer as a string: " << str << endl;
    convert(str, f);
    cout << "float as a string: " << str << endl;
    return 0;
}