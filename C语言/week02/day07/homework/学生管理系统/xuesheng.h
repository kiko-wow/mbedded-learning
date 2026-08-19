#ifndef _XUESHENG_H
#define _XUESHENG_H
#include <stdio.h>

#define MAX_STU 10

extern int scores[MAX_STU];
extern int num_scores;

//@brief 展示菜单
void cai_dan(void);



//@brief 输入学生成绩
//覆盖原有成绩
void shuru_scores(void);



//@brief 展示所有有效成绩
void display_scores(void);


//@brief 删除某位学生的成绩
//@note 删除后自动前移填补空位，有效人数减1
void delete_scores(void);


//@brief 增加一个学生的成绩
//@note 若人数已经达到上限10，必须删除一个才能增加
void add_scores(void);


//

#endif