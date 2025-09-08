// STANDARD LIBRARY FUNCTIONS : <string.h>


// 1. strlen(str) -> count number of characters excluding '\0'. 
//                     NOTE : This donot return integer type value it returns unsigned long , so instead of %d use %lu OR
//                            type cast it to int type.

// 2. strcopy(newStr, oldStr) -> copies value of old string to new string.  

// 3. strcat(firstStr, secStr) -> concatenates (joins) first string with second string i.e. value of first string becomes equal to combination of 2 two strings.
//                               NOTE : It donot adds any space btw the two words unless and until you add a space in the string.
//                                      firstStr should have the capacity to store both the strings , hence make it large, otherwise it will give error.

// 4. strcmp(firstStr, secStr) -> Compares 2 strings & returns a value.
//                                 0 -> String Equal
//                                 positive + -> first > second (ASCII)
//                                 negative - -> first < second (ASCII)
// Reason : check Notepad.



#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Nehal";
    printf("Length of string : %lu\n", strlen(str));  

    char newStr[] = "Hello";  //Will copy value of oldStr to newStr, so value of newStr will change to 'world'
    char oldStr[] = "World";
    strcpy(newStr, oldStr);
    puts(newStr);
    puts(oldStr);

    char firstStr[100] = "Ansh ";  // Always mention the size of the first string and make it large enough to store to hold the values of both the strings otherwise it will give error.
    char secStr[] = "Singh";
    strcat(firstStr, secStr);
    printf("%s\n", firstStr);

    char FirstStr[] = "Nehal ";
    char SecStr[] = "Dagar";
    printf("%d\n", strcmp(FirstStr, SecStr));  // Output : 10 i.e. +ve value
    printf("%d\n", strcmp(SecStr, FirstStr));  // Output : -10 i.e. -ve value

    return 0;
}