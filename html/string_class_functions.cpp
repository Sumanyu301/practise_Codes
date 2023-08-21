#include <iostream>
#include <string>
using namespace std;

// <------------str.length()--------------->
// int main()
// {
//     string str="hello duniya";
//     cout<<str.length();
//     return 0;
// }


// <------------str.size()--------------->
// same hai length aur yeh size
// int main()
// {
//     string str="hello duniya";
//     cout<<str.size();
//     return 0;
// }

// <------------str.capacity()--------------->
// int main()
// {
//     string str="hello duniya";
//     cout<<str.capacity();
//     return 0;
// }

// <------------str.resize()--------------->
// int main()
// {
//     string str="hello duniya";
//     str.resize(20);
//     cout<<str.capacity();
//     return 0;
// }

// <------------str.max_size()--------------->
// int main()
// {
//     string str="hello duniya";
//     cout<<str.max_size();
//     return 0;
// }

// <------------str.clear()--------------->
// int main()
// {
//     string str="hello duniya";
//     str.clear();
//     cout<<str;
//     return 0;
// }

// <------------str.empty()--------------->
// gives 1 if it is empty and 0 if not
// int main()
// {
//     string str="hello duniya";
//     str.clear();
//     cout<<str.empty();
//     return 0;
// }

// <------------str.append("")--------------->
// end mein aa jayega bina space ke
// int main()
// {
//     string str="hello duniya";
//     str.append("append");
//     cout<<str;
//     return 0;
// }

// <------------str.insert(index,"what you want at that")--------------->
// int main()
// {
//     string str="hello duniya";
//     str.insert(3,"insert");
//     cout<<str;
//     return 0;
// }

// <------------str.insert(index,"what you want at that",No of characters)--------------->
// int main()
// {
//     string str="hello duniya";
//     str.insert(3,"insert",2);
//     cout<<str;
//     return 0;
// }

// <------------str.replace(index,No of characters,"what do u wanna replace iy with")--------------->
// int main()
// {
//     string str = "hello duniya";
//     str.replace(3, 2, "000");
//     cout << str;
//     return 0;
// }

// <------------str.push_back('char in single bracket')--------------->
// int main()
// {
//     string str = "hello duniya";
//     str.push_back('z');
//     cout << str;
//     return 0;
// }

// <------------str.pop_back()--------------->
// bas jo end mein hoga vo char ud jaayega
// int main()
// {
//     string str = "hello duniya";
//     str.pop_back();
//     cout << str;
//     return 0;
// }

// <------------str.swap(name of string)--------------->
// int main()
// {
//     string str = "hello duniya";
//     string str1 = "hi duniya";
//     str.swap(str1);
//     cout <<"str = "<<str<<endl;
//     cout <<"str1 = "<<str1;
//     return 0;
// }

// <------------str.copy(char array,no. of char u wanna copy)--------------->
// int main() {
//     std::string str = "hello duniya";
//     char s[20];

//     str.copy(s, str.length());
////str.copy(s,3);
//     s[str.length()] = '\0'; // Add the null terminator at the end of the copied string.
////str[3]='\0';
//     std::cout << s;
//     return 0;
// }

// <------------str.find(str or char)--------------->
// int main()
// {
//     string str = "hello duniya";
//     cout<<str.find("ll");
//     return 0;
// }

// <------------str.rfind(str or char)--------------->
// int main()
// {
//     string str = "hello duniyal";
//     cout<<str.rfind("l");
//     return 0;
// }

// <------------str.find_first_of(it takes alphabets ,from where to start)--------------->
// int main()
// {
//     string str = "hello duniya";
//     cout << str.find_first_of("l") << endl;
//     cout << str.find_first_of("l", 3) << endl;
//     cout << str.find_first_of("el");
//     return 0;
// }

// <------------str.substr(starting index,uptill where)--------------->
// int main()
// {
//     string str = "hello duniya";
//     cout<<str.substr(3)<<endl;
//     cout<<str.substr(3,2);
//     return 0;
// }

// <------------str.compare(string)--------------->
// int main()
// {
//     string str = "hello duniya";
//     string str1 = "hello duniyal";
//     cout<<str.compare(str1)<<endl;
//     return 0;
// }

// <----------------------------------------------->
// <----------------------------------------------->
// <----------------------------------------------->
// <----------------------------------------------->
// <-------------Iterators in c++----------------->

// int main()
// {
//     string str = "hello duniya";
//     string::iterator it;
//     for (it = str.begin(); it != str.end(); it++)
//     {
//         cout << *it;
//     }
//     return 0;
// }



int main()
{
    string str = "hello duniya";
    string::reverse_iterator it;
    for (it = str.rbegin(); it != str.rend(); it++)
    {
        cout << *it;
    }
    return 0;
}