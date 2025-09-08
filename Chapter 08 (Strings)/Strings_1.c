// STRINGS : String is a character array. It is terminated by a '\0' (null character).
//           Null Character denotes string termination. (It terminates an string)
//           We can store words, sentences, paragraphs etc 


// Initialising Strings Syntax :  char name[] = {'A', 'N', 'S', 'H', '\0'};   Output : ANSH
//                                In this on adding \0 to the end will join all the characters.
//                                OR
//                                char name[] = "ANSH"; NOTE : Here compiler automatically adds \0 in the end. Output : ANSH 
// NOTE : We use single quotes ' ' for storing a character and use double quotes " " for storing strings.

// char name is an string of words and not an normal character array. (Normal character arrays are for example char star = '*';) 
// Using \0 in the end is important while declaring because it tells the compiler that it is forming a string of words not an normal compiler array.
// If we don't use \0 in the end the compiler will consider it an normal character array. The difference btw an string of words and an normal character array is that 
// we have special properties associated with strings and we get to run special functions with strings but we can't do that with character array.

// String when stored in memory is a type of character array.  

// Check Notepad for more info.



#include <stdio.h>

int main() {
    char name1[] = {'A', 'N', 'S', 'H', '\0'};
    // OR 
    char name2[] = "ANSH";

    printf("%s\n", name1);
    printf("%s\n", name2);
    // NOTE : Use %s instead of %c to print the whole string.
}

// Check File : Strings_2.c for more info




