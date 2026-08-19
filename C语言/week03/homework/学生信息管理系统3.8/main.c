#include "student.h"
#include "linkhead.h"

int main(int argc, char const *argv[])
{
    LINKHEAD *link_head;
    link_head=get_head(); // 现在堆区开辟一个 表头空间 得到首地址

    STU*stu=get_stu("小乔",1,'M',90.0F);//堆区开辟 学生空间 返回首地址
    show_stu(stu);//展示学生

    //学生需要放到node里面 所以接下来创建node
    NODE*node = get_node(stu);
    show_stu(node->stu);

    
    return 0;
}
