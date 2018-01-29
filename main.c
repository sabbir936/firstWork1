#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5;
    int y;
    for(y=10;y>=0;y--){
        int z;
        z=50/(y-x);

        printf("%d\n",z);
    }

    return 0;
}
