// WAP to enter price of 3 items & print there final cost with GST.


#include <stdio.h>
#include <math.h>

int main() {
    float price[3];
    
    printf("Enter price of Item 1:");
    scanf("%f", &price[0]);
    printf("Enter price of Item 2:");
    scanf("%f", &price[1]);
    printf("Enter price of Item 3:");
    scanf("%f", &price[2]);

    float gst1 = price[0] + (price[0]*0.18);
    float gst2 = price[1] + (price[1]*0.18);
    float gst3 = price[2] + (price[2]*0.18);

    printf("Price of Item 1 Including 18 Percent GST = %f\n", gst1);
    printf("Price of Item 2 Including 18 Percent GST = %f\n", gst2);
    printf("Price of Item 3 Including 18 Percent GST = %f\n", gst3);
    
    float totalCost = gst1 + gst2 + gst3;

    printf("Total Cost Including 18 Percent GST: %f\n", totalCost);

    return 0;
    
}