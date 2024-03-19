/* 
Write a function "Void sort2(double* p, double* q)" that receives two pointers
and sorts the values to which they point. if you call sort2(&x, &y) then
x <= y after the call.
*/
#include <iostream>
using namespace std;

void sort2(double* p, double* q) 
{
    if (*p > *q) {
        double temp = *p;
        *p = *q;
        *q = temp;
    }
}