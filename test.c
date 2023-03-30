#include <stdio.h>

int main() {

    int ni,d,c;
    float nf,u,df,cf;

    while (scanf("%d", &ni)) {
        nf=ni;

        u=((nf/10)-ni/10)*10;

        df=((nf/100)-ni/100)*10;
        d=df;

        cf=((nf/1000)-ni/1000)*10;
        c=cf;

        printf("%d %d %.0f\n", c,d,u);
    }

    return 0;
}