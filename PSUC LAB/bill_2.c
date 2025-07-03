// Write a program to calculate an amount of a telephone bill for the following criteria. (Without
// Loop)

/*Calls      Charger per call 
   1-150          0
   151-250        .9
   251-400        1.2
   401 0nwards    1.5 */


int main() {
    int calls ; float bill;

    printf("Enter Number Of Calls : ");
    scanf("%d", &calls);

    if(calls<0){
        printf("Invalid Input ");
        return 0;
    }

    if(calls>0 && calls<=150){
        bill = 0;
        printf("Amount : %f ", bill);
    }
    else if(calls<=250){
        bill = 0 + (calls - 150)*0.9;
        printf("Amount : %f ", bill);
    }
    else if(calls<=400){
        bill = 0 + (100*0.9) + (calls-250)*1.2;
        printf("Amount : %f ", bill);
    }
    else{
        bill = 0 + (100*0.9) + (150*1.2) + (calls-400)*1.5;
        printf("Amount : %f ", bill);
    }

    return 0;
}