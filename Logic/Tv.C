A electronics store sells TV sets with a fixed financial structure. When a TV is purchased for a specific Cost Price, the following rules apply:

The TV is sold at a fixed Profit of 27% of the Cost Price.

A VAT of 12.7% is applied to the calculated Selling Price.

A Service Charge of 3.87% is applied to the calculated Selling Price.

Write a program that takes the Cost Price as input and calculates the resulting financial breakdown.

Fixed Values:

Profit Rate = 27%

VAT Rate = 12.7%

Service Charge Rate = 3.87%

Input Format
A single floating-point number representing the Cost Price.

Output Format
Display the following four values, each on a new line, formatted to 2 decimal places:

Selling Price: [Value]

Profit: [Value]

VAT: [Value]

Service Charge: [Value]
Examples
Example 1:

Input

3500
Output

Profit: Rs. 945.00
Selling Price: Rs. 4445.00
VAT: Rs. 564.52
Service Charge: Rs. 172.06
Total Price: Rs. 5181.58
Example 2:

Input

5000
Output

Profit: Rs. 1350.00
Selling Price: Rs. 6350.00
VAT: Rs. 806.45
Service Charge: Rs. 245.75
Total Price: Rs. 7402.20
Solution-:
#include <stdio.h>

int main() {
    float costPrice, profit, sellingPrice, vat, serviceCharge, totalPrice;

    scanf("%f", &costPrice);

    profit = costPrice * 27 / 100;
    sellingPrice = costPrice + profit;
    vat = sellingPrice * 12.7 / 100;
    serviceCharge = sellingPrice * 3.87 / 100;
    totalPrice = sellingPrice + vat + serviceCharge;

    printf("Profit: Rs. %.2f\n", profit);
    printf("Selling Price: Rs. %.2f\n", sellingPrice);
    printf("VAT: Rs. %.2f\n", vat);
    printf("Service Charge: Rs. %.2f\n", serviceCharge);
    printf("Total Price: Rs. %.2f\n", totalPrice);

    return 0;
}
