#include <stdio.h>

int main() {
    double sum = 0;
    int count = 0;
    double weights[10000];
    FILE *file;

    // Read File
    file = fopen("/Users/anshkumarsingh/Desktop/C Programs/Coursera Assignments/Files/Elephant_data.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    // Scaning File Data into Array
    while(count<10000 && fscanf(file, "%lf", &weights[count])==1){
        sum+=weights[count];
        count++;
        
    }
    fclose(file);
    
    // Average Weight
    if(count>0){
        printf("Average Weight : %.2lf\n", sum/count);
    }
    else {
        printf("NO DATA FOUND\n");
    }

    return 0;
}