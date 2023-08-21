// #include <stdio.h>
// #define M int
// #define x2(x) x * x
// M main()
// {
//    M a, b = 3;
//    a = b;
//    printf("%d  %d", x2(a++) * x2(b), a);
// }
#include <stdio.h>
struct part{
int num;
}p1,p2;
int main(){
p1.num=1;
p2=p1;
p2.num=2;
printf("%d",p2.num);
return 0;
}
