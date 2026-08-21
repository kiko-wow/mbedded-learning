#!/bin/bash
# ============================================================
# 菜单式系统运维工具 sys_menu.sh
# while 死循环 + case 分发：备份 / 清理 / 统计 / 退出
# ============================================================

while true; do
    # ---------- 显示菜单 ----------
    echo "========== 系统运维菜单 =========="
    echo "1) 备份目录   2) 清理临时文件"
    echo "3) 统计进程数 4) 退出"
    read -p "请选择操作: " choice      # 读的是"选择"，存进 choice

    # ---------- case 分发 ----------
    case $choice in

        1)  # 备份目录
            read -p "请输入要备份的目录: " dir
            if [ -d "$dir" ]; then
                # basename 取目录名，date +%Y%m%d 取日期做后缀
                cp -r "$dir" "/backup/$(basename "$dir")-$(date +%Y%m%d)"
                echo "备份完成"
            else
                echo "目录不存在"
            fi
            ;;   # ← ;; 在 fi 之后，结束 1) 分支

        2)  # 清理 /tmp 下 7 天前的 *.tmp 文件，-i 逐个确认删除
            find /tmp -name "*.tmp" -mtime +7 -exec rm -i {} \;
            ;;

        3)  # 统计进程总数：ps -e 列所有进程，wc -l 数行数
            echo "当前进程总数: $(ps -e | wc -l)"
            ;;

        4)  # 退出
            echo "再见"
            break
            ;;

        *)  # 非法输入兜底，重新显示菜单
            echo "无效选项，请重新输入"
            ;;
    esac
done
