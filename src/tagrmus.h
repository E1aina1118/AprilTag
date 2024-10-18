#ifndef _TAGRMUS
#define _TAGRMUS

#ifdef __cplusplus
extern "C" {
#endif

apriltag_family_t *tagrmus_create();
void tagrmus_destroy(apriltag_family_t *tf);

#ifdef __cplusplus
}
#endif

#endif

