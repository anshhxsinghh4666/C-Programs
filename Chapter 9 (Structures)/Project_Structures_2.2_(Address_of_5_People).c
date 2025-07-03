// Enter Address (house no., blovk, city, state) of 5 people Using Functions and Loops.


#include <stdio.h>
#include <string.h>


// Structure Declaration :
typedef struct address{
    int house_no;
    char block;
    char city[100];
    char state[100];
} add;

// Function Decalaration : 
void print_address(struct address adds);

// Structure Use/Call :
int main() {
    add adds[5];

    for(int i=0; i<5; i++){
        printf("Enter Info of Person %d :\n ", i+1);
        printf("House No. : ");
        scanf("%d", &adds[i].house_no);
        
        // To Consume New Line character : scanf lefts a new line character after taking int value , so getchar() will consume that.
        getchar() ;  

        printf("Block : ");
        scanf("%c", &adds[i].block);
        printf("City : ");
        scanf("%s", &adds[i].city);
        printf("State : ");
        scanf("%s", &adds[i].state);

        printf("\n");
    }
    for(int i=0; i<5; i++){
        print_address(adds[i]);
    }
    return 0;
}

// Function Definition :
void print_address(add adds){
printf("Address: House Number - %d, Block - %c, City - %s, State - %s\n", adds.house_no, adds.block, adds.city, adds.state);
} 