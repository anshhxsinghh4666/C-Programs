// Make a structure to store Bank Account Information of a customer of ABC Bank. Also, make a alias for it.



#include <stdio.h>
#include <string.h>

// Structure Declaraction
typedef struct BankAccount{
    int acc;
    char customerName[100];
    float balance;
} ba;

// Structure Call/Use :
int main(){
    ba acc1 = {128, "Ansh Singh"};
    ba acc2 = {129, "Nehal Dagar"};

    ba *ptr1 = &acc1;
    ba *ptr2 = &acc2;

    printf("Account 1 Details : \n");
    printf("Account Number : %d\n", ptr1->acc);
    printf("Customer Name : %s\n", ptr1->customerName);

    printf("Account 2 Details : \n");
    printf("Account Number : %d\n", ptr2->acc);
    printf("Customer Name : %s\n", ptr2->customerName);
}

