#include <stdio.h>

int main(){
    int physics, chemistry, maths;
    float total;
     printf("Enter Physics Marks (out of 100)\n ");
     scanf("%d/", &physics);
     printf("Enter Chemistry Marks  (out of 100)\n");
     scanf("%d/", &chemistry);
     printf("Enter Mathematics Marks (out of 100)\n ");
     scanf("%d/", &maths);
    total = (physics + maths + chemistry)/3;
    if ((total<40) || maths<33 || chemistry<33|| physics<33)
    {
        printf("Your total percentage is %f and you are failed", total);
    }
    else
    {
        printf("Yours total percentage is %f and you are pass",total);
    }
    

    return 0;
}