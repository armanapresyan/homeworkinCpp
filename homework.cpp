//1

#include <iostream>
#include <cstring>

char* to_upper_case(char *str){
    for(int p = 0; p < strlen(str); ++p ){
        if( *(str + p) >= 97 && *(str + p) <= 122){
            *(str + p)= *(str + p) - 32;
        }     
    } 
    return str;  
}


int main()
{ 
 char string[10];
 std::cout<<"input  text: ";std::cin>>string;
 char* newArr = to_upper_case(string);
 std::cout<<"upper case text: "<<newArr;
 return 0;

}


//2

#include <iostream>
#include <cstring>

char* strcat(char* s1, char* s2){
    int q{0};
    int sizeStr1 = strlen(s1);
    for(int i = sizeStr1; i <= 20; ++i){
        *(s1 + i) = *(s2 + q);
        q++;
    }
    
    return s1;
}
      
int main()
{ 
 char str1[20];
 char str2[10];
 std::cout<<"input first string: "; std::cin>>str1;
 std::cout<<"input second string: "; std::cin>>str2;
 char* newarrstr = strcat(str1, str2);
 std::cout<<"input string concatenates: "<<newarrstr;
 return 0;
 
}


//3

#include <iostream>
#include <cstring>

char* strset(char* s1) {
    int sizeStr1 = strlen(s1);
    for (int i = 0; i < sizeStr1; ++i) {
        if (*(s1 + i) == 's') {
            for (int j = sizeStr1; j > i; --j) {
                *(s1 + j + 1) = *(s1 + j);    
            }
            *(s1 + i) = 'c';
            *(s1 + i + 1) = 'h';
            sizeStr1 += 2; 
        }
    }

    return s1;
}

int main() {
    char str1[20];
    std::cout << "Input string: ";
    std::cin >> str1;

    char* newarrstr = strset(str1);
    std::cout << newarrstr << std::endl;
    return 0;
}


//4


#include <iostream>
#include <cstring>


char* strmove(char* s, int n) {
    int size = strlen(s);
    char p[20];
    for(int i = 0; i < size - n; ++i ){
        *(p + i) = *(s + i);
    }

    for(int i = 0; i < n; ++i){
      *(s + i) = *(s + size - n + i);
    }

    for(int i = n; i < size; ++i){
        *(s+i) = *(p + i - n);
    }
    return s;
}


int main() {
    char str[20];
    std::cout << "Input string: ";
    std::cin>>str;

    char* newStr = strmove(str, 2);
    std::cout <<"output move string: "<< newStr;

    return 0;
}


