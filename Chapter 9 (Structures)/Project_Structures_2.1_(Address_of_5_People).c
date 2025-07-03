// Enter Address (house no., blovk, city, state) of 5 people



#include <stdio.h>
#include <string.h>


// Structure Declaration :
struct address{
    int house_no;
    int block;
    char city[100];
    char state[100];
};

// Function Decalaration : 
void print_address(struct address adds);

// Structure Use/Call :
int main() {
    struct address adds[5];

    printf("Enter Info of Person 1 : ");
    scanf("%d", &adds[0].house_no);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);

    printf("Enter Info of Person 2 : ");
    scanf("%d", &adds[1].house_no);
    scanf("%d", &adds[1].block);
    scanf("%s", &adds[1].city);
    scanf("%s", &adds[1].state);

    printf("Enter Info of Person 3 : ");
    scanf("%d", &adds[2].house_no);
    scanf("%d", &adds[2].block);
    scanf("%s", &adds[2].city);
    scanf("%s", &adds[2].state);

    printf("Enter Info of Person 4 : ");
    scanf("%d", &adds[3].house_no);
    scanf("%d", &adds[3].block);
    scanf("%s", &adds[3].city);
    scanf("%s", &adds[3].state);

    printf("Enter Info of Person 5 : ");
    scanf("%d", &adds[4].house_no);
    scanf("%d", &adds[4].block);
    scanf("%s", &adds[4].city);
    scanf("%s", &adds[4].state);
    
// Function Call : 
    print_address(adds[0]);
    print_address(adds[1]);
    print_address(adds[2]);
    print_address(adds[3]);
    print_address(adds[4]);

    return 0;
}

// Function Definition :
void print_address(struct address adds){
    printf("Address : %d, %d, %s, %s ", adds.house_no, adds.block, adds.city, adds.state);
} 