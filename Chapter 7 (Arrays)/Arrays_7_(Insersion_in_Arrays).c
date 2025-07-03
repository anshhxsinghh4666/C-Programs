// INSERION IN ARRAY :


#include <stdio.h>

int main(){
    int arr1[6] = {1, 3, 5, 7, 9};
    int arr2[6] = {1, 3, 5, 7, 9};
    
    // Insersion At Starting : 
    for(int i=4; i>=0; i--){
        arr1[i+1] = arr1[i];
    }
    printf("Enter Element to Insert at Starting : ");
    scanf("%d",&arr1[0]);
    printf("Array After Insersion At Starting : ");
    for(int i=0; i<6; i++){
        printf("%d  ",arr1[i]);
    }
    printf("\n");

    // Insersion at End :
    printf("Enter element to insert at End : ");
    scanf("%d",&arr2[5]);
    printf("Array After Insersion At End : ");
    for(int i=0; i<6; i++){
        printf("%d  ",arr2[i]);
    }

    // Insersion At Desired Location : 
    int size, l, ele;
    printf("Enter size of Array : ");
    scanf("%d", &size);
    int actualsize = size+1;
    int a[actualsize];
    printf("Enter Elements : ");
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter Location to Insert : ");
    scanf("%d", &l);
    if(l>size+1 || l<=0){
        printf("Invalid Location\n");
        return 0;
    }
    printf("Enter Element to Insert : ");
    scanf("%d",&ele);
    for(int i=size-1; i>=l-1; i--){
        a[i+1] = a[i];
    }
    a[l-1] = ele;
    printf("Elements of Array After Insertion : ");
    for(int i=0; i<size+1; i++){
        printf("%d  ", a[i]);
    }
    
    return 0;
}