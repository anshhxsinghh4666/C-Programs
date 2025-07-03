// Write a program to calculate an amount of a telephone bill for the following criteria. (Without
// Loop-switch case)
// Calls       | Charge per call (Rs.)
// 1-150       | 0
// 151-250     | .9
// 251-400     | 1.2
// 401 onwards |  1.5


int main() {
    int c, bill;
    printf("Enter Number of Calls : ");
    scanf("%d", &c);
    
    if(c<=150 && c>=0){
        bill = 0;
    }
    else if(c<=250){
        bill = (c-150)*0.9
    }
    else if(c<=400){
        bill = (c-250)*1.2+(c-150)*0.9;
    }
    else


}