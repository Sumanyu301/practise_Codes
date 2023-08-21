#include<iostream>
#include<cstring>
using namespace std;

//<-------------------STRLEN()------------------>
// int main()
// {
//     char str1[20] = "123456789";
//     cout<<strlen(str1); 
// }



// <-------------STRCAT(DESTINATION,SOURCE)--------------->

// int main()
// {
//     char str1[10]="stringcat";//even though space is less it might work but bad practice
//     char str2[20]="_yyhgyygj";//str1 ke baad str2 
//     cout<<strcat(str1,str2);
// }

// <-----------STR N CAT(destination,source,length)------------->

// int main()
// {
//     char str1[10]="stringcat";//even though space is less it might work but bad practice
//     char str2[20]="123hgyygj";//str1 ke baad str2 
//     cout<<strncat(str1,str2,3);//no. of characters 
// }

// <-------------STRCPY(destination,source)----------------->
// int main()
// {
//     char str1[10]="string";
//     char str2[20]=""; 
//     cout<<strcpy(str2,str1);//2 mein 1 ka daalna hai  
// }

// <-------------STR N CPY(destination,source)----------------->
// int main()
// {
//     char str1[10]="string";
//     char str2[20]=""; 
//     cout<<strncpy(str2,str1,3);//same hai bas no. of characters hain  
// }

// <--------------STRSTR(main,sub)----------------->
// int main()
// {
//     char str1[20]="programming";
//     char str2[20]="g";//jahan mil gya vahan se end tak 
//     cout<<strstr(str1,str2);
// }

// <--------------STRCHR(main,sub)----------------->
// int main()
// {
//     char str1[20]="programming";//jahan mil gya vahan se end tak 
//     cout<<strchr(str1,'m');
// }

// <--------------STR R CHR(main,sub)----------------->
// int main()
// {
//     char str1[20]="programming";//jahan mil gya vahan se end tak 
//     cout<<strrchr(str1,'m');//just from the right that all
// }

// <--------------STRCMP(str1,str2)----------------->
//if str1 is smaller the output is negative
//if str1 is eqaul the output is zero
//if str1 is greater the output is positive
//compare on the basis of like alphabetically (dictionary)
// int main()
// {
//     char str1[20]="Hello";//ASCII value of H is 73 and h is 105 so str2 is bigger
//     char str2[20]="hello";
//     cout<<strcmp(str1,str2);
// }

// <-------------STRTOL(string,Null,10)---------------->
//string to long  pehle string hai fir kahan tak convert karna hai fir number system

// int main()
// {
//     char str1[20]="12345";
//     long x = strtol(str1,NULL,10);
//     cout<<x+10;
// }

// <-------------STRTOK(string,"jiske basis pe(delimeter bolte hain)")---------------->
int main()
{
    char s1[20] = "x=10;y=20;z=35";
    char *token = strtok(s1,";");
    while(token!=NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL,";");
    }
}

