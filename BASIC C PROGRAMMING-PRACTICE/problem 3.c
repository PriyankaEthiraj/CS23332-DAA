/* Malini goes to BestSave hyper market to buy grocery items. BestSave hyper market provides 10% discount on the bill amount B when ever the bill amount B is more than Rs.2000.
The bill amount B is passed as the input to the program. The program must print the final amount A payable by Malini.
Input Format:
The first line denotes the value of B.
Output Format:
The first line contains the value of the final payable amount A.
Example Input/Output 1:
Input:
1900
Output:
1900
Example Input/Output 2:
Input:
3000
Output:
2700 */

#include <stdio.h>
int main() {
    float B, A;
    scanf("%f", &B);
    if (B > 2000) {
        A = B - (0.1 * B);
    } else {
        A = B;
    }
    printf("%.0f\n", A);
    return 0;
}