#ifndef _LINKHEAD_H
#define _LINKHEAD_H

#include "node.h"

typedef struct linkhead
{
    NODE *first;
    NODE *last;
    int size;
}LINKHEAD;

/// @brief 堆区开辟 表头空间 返回首地址
/// @param  无参数
/// @return 堆区开辟的表头空开的首地址
LINKHEAD *get_head(void);

#endif