#include <stdlib.h>
#include "apriltag.h"

apriltag_family_t *tagrmus_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tagrmus");
   tf->black_border = 1;
   tf->d = 5;
   tf->h = 3;
   tf->ncodes = 9;
   tf->codes = calloc(9, sizeof(uint64_t));
   tf->codes[0] = 0x000000000010fe29UL;
   tf->codes[1] = 0x00000000009ace29UL;
   tf->codes[2] = 0x0000000000aad62aUL;
   tf->codes[3] = 0x00000000002fa8c2UL;
   tf->codes[4] = 0x00000000012ad6b9UL;
   tf->codes[5] = 0x00000000012ad6aeUL;
   tf->codes[6] = 0x0000000000aad6bfUL;
   tf->codes[7] = 0x0000000000e8c62eUL;
   tf->codes[8] = 0x0000000001151151UL;
   return tf;
}

void tagrmus_destroy(apriltag_family_t *tf)
{
   free(tf->name);
   free(tf->codes);
   free(tf);
}

