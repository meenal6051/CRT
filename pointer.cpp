#include<stdio.h>
#include<conio.h>

int main(){
    int a[] = {3,2,67,0,56};
    int *p, *q;
    p = a;
    q = p+2;
    //  printf("%d\n",  *q - 3);
    //   printf("%d\n",  ++*q - 3);
    // printf("%d",  *q++ - 3);

     printf("%d",  *p+*q);

    return 0;
}

// printf("%d %d %d\n", --*p, *p++, ++*p);

// int main(){
// int a[] = {3,2,67,0,56};
// int *p;
// p = &a[3];
// printf("%d\n",*p);
// p--;
// printf("%d\n",*p);

// // printf("%d\n",++p);

// // printf("%d\n",++(*p));

// // printf("%d\n",*p++);

// // printf("%d\n",*p);

// printf("%d\n",* --p);

// printf("%d %d",*p--,*p--);

// return 0;
// }