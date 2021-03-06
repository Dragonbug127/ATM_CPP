//管理员服务函数
//本函数用于管理客户成员
//调用者： hello
//调用函数：Modify
    #include "ltb.h"

    void Management(USER*head)/**管理员服务**/
    {
        int n;
        USER *p=head->next;/**头节点指向下一个节点**/
        while(1)
        {
            fflush(stdin);/**清空缓冲区域**/
            system("cls");/**清屏**/
            cout << "\n\n\t\t\t账户注册数量：" << head->n;/**输出当前已注册的用户数量**/
            cout << "\n\t\t\t账户注册上限：1000 \n";/**输出注册上限**/
            while(p != NULL)/**用户名为空**/
            {
                cout << "\n\n\t\t\t  ~用户信息~\n"
                     << "\t\t\t账号:" << p->output_Ac() << ">>>>\n\n"/**输出账号**/
                     << "\t\t\t用 户 名:" << p->output_N() << " \n\n "/**输出用户名**/
                     << "\t\t\t余 额:" << p->output_B() << "\n\n";/**输出余额**/
                if(p->output_S() == 1)
                    cout << "\t\t\t用户状态: 正常";/**输出余额**/
                else
                    cout << "\t\t\t用户状态: 已锁定";/**输出余额**/
                p=p->next;/**指向下一个节点**/
            }
            cout << "\n\t\t\t<<1>>修改用户信息\t\t<<2>>退出\n";/**输出选项**/
            cin >> head->choose;/**选择**/
            switch(head->choose)/**switch选择语句**/
            {
            case 1:
                head->choose = 0;/**初始化选择**/
                cout << "\t\t\t\t请输入需要修改的用户账号：";/**输入修改的用户编号**/
                cin >> n;/**输入编号**/
                n = Modify(n,head);/**调用修改界面并向其传值**/
                break;
            case 2:
                head->choose = 0;/**初始化选择**/
                hello(head);/**返回主界面**/
                break;
            };
        }
    }
