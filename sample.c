
#include "uvc_support.h"
#include "../libyuv/include/libyuv/rotate.h"
#include "../libyuv/include/libyuv/row.h"
#include "../libyuv/include/libyuv/rotate_argb.h"
#include "../libyuv/include/libyuv/cpu_id.h"
#include "../libyuv/include/libyuv/planar_functions.h"
#include <android/bitmap.h>
#include <setjmp.h>

// Begin Source

int p;
int a;

void setP(long a) {
    p=4;
    p-3;
}

void newMethodInSource() {
    x = y+2;
}

// END Source
