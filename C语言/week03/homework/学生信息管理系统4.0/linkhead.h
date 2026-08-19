#ifndef _LINKHEAD_H
#define _LINKHEAD_H

#include "node.h"

typedef struct linkhead
{
    NODE *first;
    NODE *last;
    int size;
} LINKHEAD;

#endif
