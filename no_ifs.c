#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    int b;
    int c;

    //get user inputs
    printf ("Enter first number: ");
    scanf("%d", &a);

    printf ("Enter second number: ");
    scanf("%d", &b);

    printf ("Enter third number: ");
    scanf("%d", &c);

//==========================================================

    //this part works on the first condition
    int case1_x = !(a^b);
    int case1_y = !(b^c);
    int case1_z = !(c^a);

    int case1_product = case1_x*case1_y*case1_z;
    //use NOT to swap to meet the condition
    int case1 = !case1_product;

//===========================================================
    
    //this part is for the second condition
    int case2_x = c*(!!(a^b));
    int case2_y = b*(!!(a^c));
    int case2_z = a*(!!(c^b));
    int case2 = (a+b+c)-(case2_x+case2_y+case2_z); 
    //take away from total sum to get the lonely number

//============================================================

    //this part is for the third condition
    //multiply all to get the initial value.
    int case3_init = a*b*c;

    int case3_compare = !case3_init;
    //printf("case3 compare = %d\n", case3_compare);

    //whether we want the value or not depends on whether the numbers are all different or not.
    //this can be done by comparing the value with case2 variable.
    int case3_multiply = !(case3_compare^case2);
    int case3_final = case3_init*case3_multiply;
    int result = case1*(case2+case3_final);

    printf("result = %d\n", result);

    return 0;
}