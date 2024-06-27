#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
    char *meat [5] = {"chicken", "pork", "goat", "mutton", "beef"};

    for (int i=0; i<=5; i++)
    {
        if (meat[i]=="mutton")
        {
            printf("I hate mutton.\n");
            break;//continue;
        }
        else
        {
            printf("I eat %s\n",meat[i]);
        }
    }

    return 0;
}
