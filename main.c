#include <stdio.h>
#include <stdlib.h>

// print all values o between 0 and 1000, ending wit 7
int seven() {

   int i;
   for (i = 0; i <= 1000; i ++)
    {
        if(i%10 == 7)
        {
             printf("%d\n",i);
        }

    }


}


int main()
{

seven();
seven();
seven();
seven();
seven();


    return 0;
}
