// // // // // // #include <stdio.h>

// // // // // // int main() {
// // // // // //     char a;
// // // // // //     printf("Hariom ");
// // // // // //     scanf("%s", &a);
// // // // // //     printf(" hai");
// // // // // //     return 0;
// // // // // // }

// // // // // // #include <stdio.h>
// // // // // // #include <math.h>

// // // // // // int main() {
// // // // // //     float x, result;

// // // // // //     // Input from user
// // // // // //     printf("Enter a value for x between 0 and 1: ");
// // // // // //     scanf("%f", &x);

// // // // // //     // Check if the input is within the valid range
// // // // // //     if (x >= 0 && x <= 1) {
// // // // // //         // Calculate the sine of x
// // // // // //         result = sin(x);

// // // // // //         // Print the result
// // // // // //         printf("The sine of %f is %f\n", x, result);
// // // // // //     } else {
// // // // // //         // Print an error message if the input is out of range
// // // // // //         printf("Input out of range. Please enter a value between 0 and 1.\n");
// // // // // //     }

// // // // // //     return 0;
// // // // // // }

// // // // // //

// // // // // // #include <stdio.h>

// // // // // // int main() {
// // // // // //     int arr[11]; // Array to hold 10 original elements + 1 new element
// // // // // //     int i, pos, newElement;

// // // // // //     // Step 1: Input 10 numbers from the user
// // // // // //     printf("Enter 10 integer numbers:\n");
// // // // // //     for (i = 0; i < 10; i++) {
// // // // // //         printf("Number %d: ", i + 1);
// // // // // //         scanf("%d", &arr[i]);
// // // // // //     }

// // // // // //     // Step 2: Ask for the position to insert the new number
// // // // // //     printf("Enter the position (1 to 11) where you want to insert a new number: ");
// // // // // //     scanf("%d", &pos);

// // // // // //     // Check if position is valid
// // // // // //     if (pos < 1 || pos > 11) {
// // // // // //         printf("Invalid position! Position should be between 1 and 11.\n");
// // // // // //         return 1; // Exit the program
// // // // // //     }

// // // // // //

// // // // // // #include <stdio.h>

// // // // // // int main() {
// // // // // //     for(int i = 4; i <= 1; i--) {
// // // // // //         char ch = 'd';
// // // // // //         for(int j = 1; j <= i; j--) {
// // // // // //             printf("%c  ", ch);
// // // // // //             ch--;
// // // // // //         }
// // // // // //         printf("\n");
// // // // // //     }
// // // // // //     return 0;
// // // // // // }

// // // // // // #include <stdio.h>

// // // // // // int main() {
// // // // // //     float num1, num2, result;
// // // // // //     char operator;

// // // // // //     // Input two numbers and the operator
// // // // // //     printf("Enter Calculation : ");
// // // // // //     scanf("%f%c%f", &num1,&operator,&num2);

// // // // // //     // printf("Enter an operator (+, -, *, /): ");
// // // // // //     // scanf(" %c", &operator); // Notice the space before %c to handle newline character

// // // // // //     // printf("Enter the second number: ");
// // // // // //     // scanf("%f", &num2);

// // // // // //     // Perform the calculation based on the operator
// // // // // //     switch (operator) {
// // // // // //         case '+':
// // // // // //             result = num1 + num2;
// // // // // //             printf("Result: %.2f\n", result);
// // // // // //             break;

// // // // // //         case '-':
// // // // // //             result = num1 - num2;
// // // // // //             printf("Result: %.2f\n", result);
// // // // // //             break;

// // // // // //         case '*':
// // // // // //             result = num1 * num2;
// // // // // //             printf("Result: %.2f\n", result);
// // // // // //             break;

// // // // // //         case '/':
// // // // // //             if (num2 == 0) {
// // // // // //                 printf("Error: Division by zero is not allowed.\n");
// // // // // //             } else {
// // // // // //                 result = num1 / num2;
// // // // // //                 printf("Result: %.2f\n", result);
// // // // // //             }
// // // // // //             break;

// // // // // //         default:
// // // // // //             printf("Error: Invalid operator.\n");
// // // // // //             break;
// // // // // //     }

// // // // // //     return 0;
// // // // // // }

// // // // // // #include <stdio.h>
// // // // // // #include <math.h>

// // // // // // int main() {
// // // // // //     int i, num, isPrime;

// // // // // //     printf("Prime numbers between 2 and 100 are:\n");

// // // // // //     // Loop through numbers from 2 to 100
// // // // // //     for (i = 2; i <= 100; i++) {
// // // // // //         isPrime = 1;  // Assume i is prime

// // // // // //         // Check divisibility from 2 to sqrt(i)
// // // // // //         for (num = 2; num <= sqrt(i); num++) {
// // // // // //             if (i % num == 0) {
// // // // // //                 isPrime = 0;  // i is divisible by num, so it's not prime
// // // // // //                 break;        // Exit the inner loop early
// // // // // //             }
// // // // // //         }

// // // // // //         // If isPrime is still 1, i is prime
// // // // // //         if (isPrime==1) {
// // // // // //             printf("%d ", i);
// // // // // //         }
// // // // // //     }

// // // // // //     return 0;
// // // // // // }

// // // // // // #include <stdio.h>
// // // // // // #include <math.h>

// // // // // // int main() {
// // // // // //     int num, isPrime = 1;  // Assume the number is prime initially

// // // // // //     // Input the integer
// // // // // //     printf("Enter an integer: ");
// // // // // //     scanf("%d", &num);

// // // // // //     // Check if num is less than or equal to 1
// // // // // //     if (num <= 1) {
// // // // // //         isPrime = 0;  // Numbers less than or equal to 1 are not prime
// // // // // //     } else {
// // // // // //         // Check divisibility from 2 to sqrt(num)
// // // // // //         for (int i = 2; i <= sqrt(num); i++) {
// // // // // //             if (num % i == 0) {
// // // // // //                 isPrime = 0;  // num is divisible by i, so it's not prime
// // // // // //                 break;  // Exit the loop as no further checks are needed
// // // // // //             }
// // // // // //         }
// // // // // //     }

// // // // // //     // Output the result based on the value of isPrime
// // // // // //     if (isPrime) {
// // // // // //         printf("%d is a prime number.\n", num);
// // // // // //     } else {
// // // // // //         printf("%d is not a prime number.\n", num);
// // // // // //     }

// // // // // //     return 0;
// // // // // // }

// // // // // // #include <stdio.h>

// // // // // // int main() {
// // // // // //     int num, l, sl;

// // // // // //     printf("Enter Number of elements : ");
// // // // // //     scanf("%d", &num);

// // // // // //     if(num<2){
// // // // // //         printf("Enter 2 or more elements");
// // // // // //         return 0;
// // // // // //     }

// // // // // //     int a[num];
// // // // // //     for(int i=0; i<num; i++){
// // // // // //         scanf("%d", &a[i]);
// // // // // //     }

// // // // // //     for(int i=0; i<num; i++){
// // // // // //         l = a[0];
// // // // // //         if(l>a[i]){
// // // // // //             l = a[i];
// // // // // //         }
// // // // // //     }

// // // // // //     for(int i=0; i<num; i++){
// // // // // //         sl < l;

// // // // // // }

// // // // // // #include <stdio.h>

// // // // // // int main() {
// // // // // //     double sum = 0;
// // // // // //     int count = 0;
// // // // // //     double weights[10000];
// // // // // //     FILE *file;

// // // // // //     // Open the file
// // // // // //     file = fopen("/Users/anshkumarsingh/Desktop/C Programs/Coursera Assignments/Files/Elephant_data.txt", "r");
// // // // // //     if (file == NULL) {
// // // // // //         printf("Error opening file\n");
// // // // // //         return 1;
// // // // // //     }

// // // // // //     // Read data into the array
// // // // // //     while (count < 10000 && fscanf(file, "%lf", &weights[count]) == 1) {
// // // // // //         sum += weights[count];
// // // // // //         count++;
// // // // // //     }
// // // // // //     fclose(file);  // Close the file

// // // // // //     // Calculate and print the average
// // // // // //     if (count > 0) {
// // // // // //         printf("Average Weight: %.2lf\n", sum / count);
// // // // // //     } else {
// // // // // //         printf("NO DATA FOUND\n");
// // // // // //     }

// // // // // //     return 0;
// // // // // // }

// // // // // //

// // // // // #include <stdio.h>

// // // // // void multiplyMatrices(int row1, int col1, int mat1[row1][col1],
// // // // //                       int row2, int col2, int mat2[row2][col2],
// // // // //                       int result[row1][col2]) {
// // // // //     // Initialize result matrix to 0
// // // // //     for (int i = 0; i < row1; i++) {
// // // // //         for (int j = 0; j < col2; j++) {
// // // // //             result[i][j] = 0;
// // // // //         }
// // // // //     }

// // // // //     // Perform matrix multiplication
// // // // //     for (int i = 0; i < row1; i++) {
// // // // //         for (int j = 0; j < col2; j++) {
// // // // //             for (int k = 0; k < col1; k++) {
// // // // //                 result[i][j] += mat1[i][k] * mat2[k][j];
// // // // //             }
// // // // //         }
// // // // //     }
// // // // // }

// // // // // void printMatrix(int rows, int cols, int matrix[rows][cols]) {
// // // // //     for (int i = 0; i < rows; i++) {
// // // // //         for (int j = 0; j < cols; j++) {
// // // // //             printf("%d ", matrix[i][j]);
// // // // //         }
// // // // //         printf("\n");
// // // // //     }
// // // // // }

// // // // // int main() {
// // // // //     int row1, col1, row2, col2;

// // // // //     // Input dimensions for the first matrix
// // // // //     printf("Enter rows and columns for the first matrix: ");
// // // // //     scanf("%d %d", &row1, &col1);

// // // // //     // Input dimensions for the second matrix
// // // // //     printf("Enter rows and columns for the second matrix: ");
// // // // //     scanf("%d %d", &row2, &col2);

// // // // //     // Check if matrix multiplication is possible
// // // // //     if (col1 != row2) {
// // // // //         printf("Matrix multiplication is not possible. Columns of the first matrix must equal rows of the second matrix.\n");
// // // // //         return 1;
// // // // //     }

// // // // //     int mat1[row1][col1], mat2[row2][col2], result[row1][col2];

// // // // //     // Input elements of the first matrix
// // // // //     printf("Enter elements of the first matrix:\n");
// // // // //     for (int i = 0; i < row1; i++) {
// // // // //         for (int j = 0; j < col1; j++) {
// // // // //             scanf("%d", &mat1[i][j]);
// // // // //         }
// // // // //     }

// // // // //     // Input elements of the second matrix
// // // // //     printf("Enter elements of the second matrix:\n");
// // // // //     for (int i = 0; i < row2; i++) {
// // // // //         for (int j = 0; j < col2; j++) {
// // // // //             scanf("%d", &mat2[i][j]);
// // // // //         }
// // // // //     }

// // // // //     // Multiply the matrices
// // // // //     multiplyMatrices(row1, col1, mat1, row2, col2, mat2, result);

// // // // //     // Print the result
// // // // //     printf("Resultant Matrix:\n");
// // // // //     printMatrix(row1, col2, result);f

// // // // //     return 0;
// // // // // }

// // // // #include <stdio.h>
// // // // #include <string.h>

// // // // // Define a structure for student data using typedef
// // // // typedef struct {
// // // //     char name[50];
// // // //     int rollNumber;
// // // //     float marks[5];
// // // // } Student;

// // // // int main() {
// // // //     Student student1, student2;

// // // //     // Input student data
// // // //     printf("Enter student's name: ");
// // // //     fgets(student1.name, sizeof(student1.name), stdin);
// // // //     student1.name[strcspn(student1.name, "\n")] = '\0';  // Remove newline character

// // // //     printf("Enter roll number: ");
// // // //     scanf("%d", &student1.rollNumber);

// // // //     printf("Enter marks for 5 subjects:\n");
// // // //     for (int i = 0; i < 5; i++) {
// // // //         printf("Subject %d: ", i + 1);
// // // //         scanf("%f", &student1.marks[i]);
// // // //     }

// // // //     // Copy data from student1 to student2 using direct assignment
// // // //     student2 = student1;

// // // //     // Display copied data
// // // //     printf("\nCopied Data:\n");
// // // //     printf("Name: %s\n", student2.name);
// // // //     printf("Roll Number: %d\n", student2.rollNumber);
// // // //     printf("Marks:\n");
// // // //     for (int i = 0; i < 5; i++) {
// // // //         printf("Subject %d: %.2f\n", i + 1, student2.marks[i]);
// // // //     }

// // // //     return 0;
// // // // }

// // // #include <stdio.h>
// // // #include <string.h>

// // // // Define a structure for student data using typedef
// // // typedef struct {
// // //     char name[50];
// // //     int rollNumber;
// // //     float marks[5];
// // // } Student;

// // // int main() {
// // //     Student student1, student2;
// // //     Student *ptr1 = &student1, *ptr2 = &student2;

// // //     // Input student data
// // //     printf("Enter student's name: ");
// // //     fgets(ptr1->name, sizeof(ptr1->name), stdin);
// // //     ptr1->name[strcspn(ptr1->name, "\n")] = '\0';  // Remove newline character

// // //     printf("Enter roll number: ");
// // //     scanf("%d", &ptr1->rollNumber);

// // //     printf("Enter marks for 5 subjects:\n");
// // //     for (int i = 0; i < 5; i++) {
// // //         printf("Subject %d: ", i + 1);
// // //         scanf("%f", &ptr1->marks[i]);
// // //     }

// // //     // Copy data from student1 to student2 using pointers directly
// // //     strcpy(ptr2->name, ptr1->name);
// // //     ptr2->rollNumber = ptr1->rollNumber;
// // //     for (int i = 0; i < 5; i++) {
// // //         ptr2->marks[i] = ptr1->marks[i];
// // //     }

// // //     // Display copied data
// // //     printf("\nCopied Data:\n");
// // //     printf("Name: %s\n", ptr2->name);
// // //     printf("Roll Number: %d\n", ptr2->rollNumber);
// // //     printf("Marks:\n");
// // //     for (int i = 0; i < 5; i++) {
// // //         printf("Subject %d: %.2f\n", i + 1, ptr2->marks[i]);
// // //     }

// // //     return 0;
// // // }

// // #include <stdio.h>

// // int main() {
// //     int n, count=0;

// //     printf("Enter Nth Number : ");
// //     scanf("%d", &n);

// //     if(n<=1){
// //         printf("Invalid Input");
// //         return 0;
// //     }

// //     for(int i=2 ; i++){
// //         int isprime=1;
// //         for(int j=2; j<=i/2; j++){
// //             if(i%j==0){
// //                 isprime=0;
// //                 break;
// //             }
// //         }
// //         if(isprime){
// //             count++;
// //             if(count==n){
// //                 printf("Prime Number at %dth position is : %d", n, i);
// //                 return 0;
// //             }
// //         }
// //     }
// // }

// // #include <stdio.h>
// // #include <string.h>

// // int main() {
// //     char str[100];
// //     printf("W : ");
// //     fgets(str,100,stdin);
// //     printf("%d",strlen(str));

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // // Function Declarations
// // int smallest(int n, int arr[]);
// // int largest(int n, int arr[]);

// // // Function Call
// // int main() {
// //     int n;
// //     cout << "Enter Size of Array: ";
// //     cin >> n;

// //     int arr[n];
// //     cout << "Enter Values: " << endl;
// //     for (int i = 0; i < n; i++) {
// //         cout << "Index " << i << ": ";
// //         cin >> arr[i];
// //     }

// //     // Call functions and display results
// //     cout << "Smallest number: " << smallest(n, arr) << endl;
// //     cout << "Largest number: " << largest(n, arr) << endl;

// //     return 0;
// // }

// // // Function Definitions
// // int smallest(int n, int arr[]) {
// //     int num = arr[0];
// //     for (int i = 1; i < n; i++) {
// //         if (arr[i] < num) {
// //             num = arr[i];
// //         }
// //     }
// //     return num;
// // }

// // int largest(int n, int arr[]) {
// //     int num = arr[0];
// //     for (int i = 1; i < n; i++) {
// //         if (arr[i] > num) {
// //             num = arr[i];
// //         }
// //     }
// //     return num;
// // }

// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a node
// struct node {
//     int data;
//     struct node *next;
// };

// int main() {
//     // Declare pointers for the linked list and a variable for user choice
//     struct node *head = NULL;
//     struct node *newNode, *temp;
//     int choice = 1;

//     // --- Part 1: Creation and Insertion ---
//     // Loop to continuously create and add new nodes to the end of the list
//     while (choice) {
//         // Allocate memory for the new node
//         newNode = (struct node *) malloc(sizeof(struct node));
//         if (newNode == NULL) {
//             printf("Memory allocation failed!\n");
//             return 1;
//         }

//         // Prompt the user to enter data and store it in the new node
//         printf("Enter Data: ");
//         scanf("%d", &newNode->data);

//         // Set the 'next' pointer of the new node to NULL, as it is the new last node
//         newNode->next = NULL;

//         // Check if the list is empty (first node creation)
//         if (head == NULL) {
//             // If the list is empty, the new node becomes the head and the temporary 'temp' pointer
//             head = newNode;
//             temp = newNode;
//         } else {
//             // If the list is not empty, link the last node's 'next' pointer to the new node
//             temp->next = newNode;
//             // Update the 'temp' pointer to the newly added node
//             temp = newNode;
//         }

//         // Ask the user if they want to continue adding nodes
//         printf("Do you want to continue? (1 for Yes, 0 for No): ");
//         scanf("%d", &choice);
//     }

//     // --- Part 2: Traversal and Display ---
//     // Reset the temporary pointer to the head of the list for printing
//     temp = head;
//     printf("\nLinked List Contents:\n");

//     // Loop through the list and print the data of each node
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         // Move to the next node in the list
//         temp = temp->next;
//     }
//     printf("NULL\n");

//     // --- Part 3: Memory Cleanup ---
//     // Important: Free the dynamically allocated memory to prevent memory leaks
//     struct node *current = head;
//     struct node *nextNode;
//     while (current != NULL) {
//         nextNode = current->next;
//         free(current);
//         current = nextNode;
//     }

//     printf("\nAll allocated memory has been freed.\n");

//     return 0;
// }





#include <stdlib.h>
#include <stdio.h>
typedef struct slist {
    int data;
    struct slist *next;
} sl;

sl *start = NULL, *new = NULL, *ptr = NULL;

/**************Create a list*****************/
void create() {
    int n, i;
    printf("\nHow many nodes do you want to create?: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\nInvalid number of nodes!\n");
        return;
    }

    start = (sl *)malloc(sizeof(sl));  // Create the first node
    if (start == NULL) {
        printf("\nMemory allocation failed!\n");
        return;
    }

    printf("\nEnter value for node 1: ");
    scanf("%d", &start->data);
    start->next = NULL;
    ptr = start;

    for (i = 2; i <= n; i++) {  // Create the rest of the nodes
        new = (sl *)malloc(sizeof(sl));
        if (new == NULL) {
            printf("\nMemory allocation failed!\n");
            return;
        }
        printf("Enter value for node %d: ", i);
        scanf("%d", &new->data);
        new->next = NULL;
        ptr->next = new;
        ptr = new;
    }

    printf("\nList created with %d nodes.\n", n);
    
}

/**************Display elements of list*****************/
void display() {
    if (start == NULL) {
        printf("\nEMPTY LIST\n");
        return;
    }
    ptr = start;
    printf("List: ");
    printf(" %d ", ptr->data);
    while (ptr->next != NULL) {
        ptr = ptr->next;
        printf(" %d ", ptr->data);
    }
}

/*********Insertion at first position in the list***********/
void insertbeg() {
    sl *temp;
    temp = (sl *)malloc(sizeof(sl));
    printf("\nEnter data: \n");
    scanf("%d", &temp->data);
    temp->next = start;
    start = temp;
}

/*********Insertion at last position in the list***********/
void insertend() {
    sl *temp;
    temp = (sl *)malloc(sizeof(sl));
    printf("\nEnter data: \n");
    scanf("%d", &temp->data);
    ptr = start;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = NULL;
}

/*********Insertion at middle in the list***********/
void insert() {
    sl *temp, *ptr2;
    int count = 1, pos;
    printf("\nEnter Position for node: ");
    scanf("%d", &pos);
    temp = (sl *)malloc(sizeof(sl));
    printf("\nEnter data: \n");
    scanf("%d", &temp->data);
    ptr = start;
    while (ptr->next != NULL && count != pos - 1) {
        ptr = ptr->next;
        count = count + 1;
    }
    ptr2 = ptr->next;
    temp->next = ptr2;
    ptr->next = temp;
}

/*********Deletion of first node in the list***********/
void deletebeg() {
    sl *temp;
    if (start == NULL) {
        printf("\nempty list");
        return;
    }
    temp = start;
    start = start->next;
    printf("\nDeleted data is: %d\n", temp->data);
    free(temp);
}

/*********Deletion of last node in the list***********/
void deletend() {
    sl *temp;
    temp = start;
    ptr = start;
    if (start == NULL) {
        printf("\nempty list");
        return;
    }
    while (temp->next != NULL) {
        temp = temp->next;
    }
    while (ptr->next != temp) {
        ptr = ptr->next;
    }
    ptr->next = NULL;
    printf("\nDeleted data is: %d\n", temp->data);
    free(temp);
}

/*********Deletion at middle in the list***********/
void deletemid() {
    sl *temp, *ptr2;
    int count = 1, pos;
    printf("\nEnter Position for node: ");
    scanf("%d", &pos);
    ptr = start;
    while (ptr->next != NULL && count != pos - 1) {
        ptr = ptr->next;
        count = count + 1;
    }
    temp = ptr->next;
    ptr2 = temp->next;
    ptr->next = ptr2;
    printf("\nDeleted data is: %d\n", temp->data);
    free(temp);
}

/*********Counting total nodes in the list***********/
void count() {
    int count = 1;
    ptr = start;
    if (start == NULL) {
        printf("\nempty list");
        return;
    }
    while (ptr->next != NULL) {
        ptr = ptr->next;
        count++;
    }
    printf("Total nodes are %d", count);
}

/**************Search for an element in the list*****************/
void search() {
    int value, pos = 1, found = 0;
    if (start == NULL) {
        printf("\nEMPTY LIST\n");
        return;
    }
    printf("\nEnter the value to search: ");
    scanf("%d", &value);
    ptr = start;
    while (ptr != NULL) {
        if (ptr->data == value) {
            printf("\nValue %d found at position %d\n", value, pos);
            found = 1;
            break;
        }
        ptr = ptr->next;
        pos++;
    }
    if (!found) {
        printf("\nValue %d not found in the list\n", value);
    }
}

/**************Bubble Sort the list*****************/
void bubbleSort() {
    if (start == NULL) {
        printf("\nEMPTY LIST\n");
        return;
    }

    int swapped;
    sl *ptr1;
    sl *lptr = NULL;

    do {
        swapped = 0;
        ptr1 = start;

        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                // Swap data
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
    printf("\nList has been sorted using Bubble Sort.\n");
}

/**************Main Function*****************/
int main() {
    int ch;
    do {
        printf("\n1. Create list");
        printf("\n2. Display list");
        printf("\n3. Insert an item at the first node");
        printf("\n4. Insert an item at the last node");
        printf("\n5. Insert an item in the middle of the list");
        printf("\n6. Delete an item at the first node");
        printf("\n7. Delete an item at the last node");
        printf("\n8. Delete an item in the middle of the list");
        printf("\n9. Count nodes");
        printf("\n10. Search an element");
        printf("\n11. Sort the list using Bubble Sort");
        printf("\n12. Exit");
        printf("\n----------------------------");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            create();   display();
            break;
        case 2:
            display();
            break;
        case 3:
            insertbeg();    display();
            break;
        case 4:
            insertend();    display();
            break;
        case 5:
            insert();       display();
            break;
        case 6:
            deletebeg();    display();
            break;
        case 7:
            deletend();     display();
            break;
        case 8:
            deletemid();    display();
            break;
        case 9:
            count();
            break;
        case 10:
            search();
            break;
        case 11:
            bubbleSort();   display();
            break;
        case 12:
            exit(0);
        default:
            printf("\nInvalid choice!\n");
        }
    } while (1);
    return 0;
}
