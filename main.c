#include <stdio.h>
#include <stdlib.h>

int  main()
{
    int F;
    printf("what's the value in fherenhit:",F);
    scanf("%d",&F);
    int C;
    C=(F-32)/1.8;
    if (C<40 && C>35 )
    {
    printf("the weither is hot");
    }
    if (C>45)
    {
    printf("the weither so hot ");
    }
    if (C<20 && C>10)
    {
        printf("the weither is cold");
    }
    if (C<10)
    {
        printf("the weither is so cold");
    }



    return 0;
}
