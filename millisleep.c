#include <stdio.h>
#include <stdlib.h>
#include <poll.h>

int main(int argc, char* argv[])
{
    int retVal = -1;
    int sleepVal = 0;
    
    /*
     *  Figure out what the user wants in milliseconds...
     */
    if (argc != 1)
    {
        /* One arg...go for it. We'll use atoi() because this is SUPPOSED to be simple... */
        sleepVal = atoi(argv[1]);
        poll(NULL, 0, sleepVal);
        retVal = 0;
    }
    else
    {
        printf("Usage : millisleep <x>\n\n");
        printf("Where <x> is the number of milliseconds to sleep for.\n\n");
    }
    
    return retVal;
}
    
