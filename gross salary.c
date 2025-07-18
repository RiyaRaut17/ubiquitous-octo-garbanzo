#include <stdio.h>

int main() {

float bs, da, hr, gs;

printf("Enter Basic Salary of Ramesh:\t"); scanf("%f", & bs);

da = (0.4)*bs; printf ("\n The Dearness Allowance is %f:\t",da);

hr = (0.2)*bs; printf ("\n The House Rent Allowance is %f:\t",hr);

gs=(bs+da+hr); printf (" \n The Cross Salary of Ramesh is %f:\t",gs);

return 0; }