// FILE I/O : 

// File - container in a storage device to store data

// Ram is volatile
// Contents are lost when [rogram terminates
// File are used to persist the data

// Operations On Files : 
//      -> Create a file
//      -> Open a file
//      -> Close a file
//      -> Read from a file
//      -> Write in a file

// Types of Files : 
//      -> Text Files - textual data (.txt , .c , .py , .java)
//      -> Binary Files - binary data (.exe , .mp3 , .jpg)

// File Pointer : 
// File is a (hidden) structure that needs to be created for opening of a file 
// A file ptr that points to this structure & is used to access the file.

// Syntax : FILE *fptr   (fptr is just a name of pointer , denoting pointer of file)
// NOTE : We only have to define FILE *fptr only once in a program

// File Opening Syntax :   FILE *fptr;
//                         fptr = fopen("FileName" , mode);
// mode tells the compiler what we want to do with the file. 
// NOTE : When we open a file using fopen and somehow the file fails to open then the function returns NULL.

// File Closing Syntax : fclose(fptr);

// File Reading Syntax : char ch;
//                       fscanf(fptr, "%c", &ch);   -> fscanf(filePointer, formatSpecifier, AddressOfVariable);

// Read and Write Char (For char only) : fgetc(fptr); -> read character
//                            fputc('A' , fptr); -> write character
// NOTE : getc stands for 'get char' and putc stands for 'put char'

// File Writing Syntax : char ch = 'A';
//                       fprintf(fptr, "%c", ch);   -> fprintf(filePointer, formatSpecifier, Variable);

// File Opening Modes : 
//           -> "r" : Open to READ
//           -> "rb" : Open to READ in BINARY
//           -> "w" : Open to WRITE
//           -> "wb" -> Open to WRITE in BINARY
//           -> "a" : Open to Append 

// NOTE : When we open a file using "r" and "rb" mode and the file donot exist then a null values is stored in the pointer.
//        When we open a file using "w" and "wb" mode and the file donot exist then it will CREATE the file and will write what you instructed.
//        When we open a file in "w" and "wb" mode then the previous data of the file will get deleted and new data will be stored in the file.
//        When we open a file in "a" mode then it will not remove the previous data and will add the new data to the file.



#include <stdio.h>

int main() {
    
    
    // OPENING A FILE :  
    
    FILE *fptr1;
    fptr1 = fopen("/Users/anshkumarsingh/Desktop/C Programs/Chapter 10 (File I_O)/Files/sample_1_.txt", "r");  // mode = r (read)
    // fclose(fptr1);  // It is recommended close the file after using as it slows the system overtime as the system resources are going to the file.

    FILE *fptr1_2;
    fptr1_2 = fopen("/Users/anshkumarsingh/Desktop/C Programs/Chapter 10 (File I_O)/Files/sample_1.2.txt", "r");  // mode = r (read)
    
    FILE *fptr2;
    fptr2 = fopen("/Users/anshkumarsingh/Desktop/C Programs/Chapter 10 (File I_O)/Files/sample_2.txt", "r");

    FILE *fptr3;
    fptr3 = fopen("/Users/anshkumarsingh/Desktop/C Programs/Chapter 10 (File I_O)/Files/sample_3.txt", "w");  // mode = "w" (write)

    FILE *fptr3_2;
    fptr3_2 = fopen("/Users/anshkumarsingh/Desktop/C Programs/Chapter 10 (File I_O)/Files/sample_3.2.txt", "w");  // mode = "w" (write)

    FILE *fptr4;
    fptr4 = fopen("/Users/anshkumarsingh/Desktop/C Programs/Chapter 10 (File I_O)/Files/sample_4.txt", "a");  // mode = "a" (append)
    
    // NOTE : Always check if a file exist before reading from it. Check the code below : 
    FILE *fptr5;
    fptr5 = fopen("New_Text.txt" , "r" );  // If we use "w" mode then New_Text.txt file will be automatically created.
    if(fptr5 == NULL){
        printf("FILE DONOT EXIST\n");
    }
    else{
        // BODY (Work You Wanna Do)
        fclose(fptr5);
    }


    // READING A FILE : Firsty Open file read "r" mode
    // Reading Characters -> File : fptr1 (sample_1_.txt)
    char ch;
    fscanf(fptr1, "%c", &ch);
    printf("Character = %c\n" , ch);  // This will read the first charcater of the file 
    fscanf(fptr1, "%c", &ch);
    printf("Character = %c\n" , ch);  // 2nd character and soo on.....
    fscanf(fptr1, "%c", &ch);
    printf("Character = %c\n" , ch);
    fscanf(fptr1, "%c", &ch);
    printf("Character = %c\n" , ch);
    fscanf(fptr1, "%c", &ch);
    printf("Character = %c\n" , ch);

    // OR (Using fgetc(fptr))  -> File : sample_1.2.txt
    printf("Using fgetc\n");

    printf("Character = %c\n" , fgetc(fptr1_2));
    printf("Character = %c\n" , fgetc(fptr1_2));
    printf("Character = %c\n" , fgetc(fptr1_2));
    printf("Character = %c\n" , fgetc(fptr1_2));
    printf("Character = %c\n" , fgetc(fptr1_2));
    fclose(fptr1_2);

    // Reading Integers -> fptr2 (sample_2.txt)
    int num;
    fscanf(fptr2, "%d", &num);
    printf("Number = %d\n" , num);
    fscanf(fptr2, "%d", &num);
    printf("Number = %d\n" , num);
    fscanf(fptr2, "%d", &num);
    printf("Number = %d\n" , num);
    fclose(fptr2);

    
    // WRITING A FILE : Open file in write "w" mode  
    //  ->File : fptr3 (sample_3.txt) : previously 'apple' is stored in the file 
    fprintf(fptr3, "%c", 'M');
    fprintf(fptr3, "%c", 'A');
    fprintf(fptr3, "%c", 'N');
    fprintf(fptr3, "%c", 'G');
    fprintf(fptr3, "%c", 'O');
    // OR 
    // fprintf(fptr3, "%s", "MANGO");
    fclose(fptr3);

    // OR (Using fputc(fptr)) -> File : sample_3.2.txt : previously 'Apple' is stored in the file

    fputc('M', fptr3_2);
    fputc('A', fptr3_2);
    fputc('N', fptr3_2);
    fputc('G', fptr3_2);
    fputc('O', fptr3_2);
    fclose(fptr3_2);


    // APPENDING A FILE : Open file in append "a" mode
    //  -> File : fptr5 (sample_4.txt) : previously 'apple' is stored in the file 
    fprintf(fptr4, "%c", 'M');
    fprintf(fptr4, "%c", 'A');
    fprintf(fptr4, "%c", 'N');
    fprintf(fptr4, "%c", 'G');
    fprintf(fptr4, "%c", 'O');
    fclose(fptr4);

    return 0;
}



