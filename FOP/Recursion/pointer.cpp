#include<stdio.h>
#include<conio.h>

int main(){
int a[] = {3,2,67,0,56};
int *p;
p = a;
printf("%d\n",*p);
p++;
printf("%d\n",*p);

// printf("%d\n",++p);

// printf("%d\n",++(*p));

// printf("%d\n",*p++);

// printf("%d\n",*p);

// printf("%d",* ++p);

printf("%d %d",*p++,*p++);

return 0;
}
