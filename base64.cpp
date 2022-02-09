#include <stdio.h>
#include <string>

template <typename StringType> std::string base64Encode(StringType pText){
    std::string cText;
    std::string substr;
    const char paddingChar = '=';
    unsigned int byte = sizeof(pText);
    int finalQuantumByte = byte % 3;
    return pText;
}

int main(void){
    std::string str1 = "Dog";
    const char *str2 = "Dog!";
    printf("%c: %d, %s: %d", str1[0], sizeof(str1[0]), str2, sizeof(str2));

    return 0;
}