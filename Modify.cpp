//管理员服务函数
//本函数用于用户信息修改界面
//调用者： hello
//调用函数：Modify
    #include "ltb.h"

    int Modify(int A,USER*p)/**用户信息修改界面**/
    {
        int d;/**定义函数类型**/
        int f=0;/**初始化**/
        string mima;/**输入密码**/
        p=p->next;/**指向下一个节点**/
        while(p!=NULL)/**用户名为空**/
        {
            if(A == p->output_Ac())/**判断信息与用户信息是否一样**/
            {
                f=1;
                break;
            }
            p = p->next;/**指向下一个节点**/
        }
        if(f==0)
        {
            return 0;/**返回**/
        }
        while(1)
        {
            fflush(stdin);/**清空缓冲区域**/
            system("cls");/**清屏**/
            cout << "\n\n\n\n\t\t\t  ~用户信息~\n"
                 << "\t\t\t   账号:" << p->output_Ac() << ">>>>\n\n"/**输出账号**/
                 << "\t\t\t(1)用 户 名:" << p->output_N() << " \n "/**输出用户名**/
                 << "\t\t\t   余 额:" << p->output_B() << "\n\n";/**输出余额**/
            if(p->output_S() == 1)
                cout << "\t\t\t(2)用户状态: 正常\n";/**输出余额**/
            else
                cout << "\t\t\t(2)用户状态: 已锁定\n"/**输出余额**/
                     << "\t\t\t(3)退出\n"
                     << "\n\n\t\t\t请输入需要修改的选项：\n\n";
            cin >>d;/**输入选项**/
            if(d == 3)
                return 0;
            else
            {
                mima = P_input();/**输入密码**/
                if(mima == p->output_P())/**判断密码与用户密码是否一样**/
                {
                    switch(d)
                    {
                    case 1:
                        d = 0;
                        cout << "请输入更改后的用户名\n";
                        p->input_N();
                        cout << "修改成功\n";
                        Sleep(800);/**延时800ms**/
                        continue;
                        break;
                    case 2:
                        d = 0;
                        cout << "解冻中";/**解冻中**/
                        for(d=0; d<5; d++)
                        {
                            Sleep(200);/**延时200ms**/
                            cout <<"*";
                        }
                        p->input_S(1);
                        p->input_P(000000);/**给对象赋值为000000**/
                        cout << "解冻成功\n密码重置为 000000";/**解冻成功 密码重置为000000**/
                        Sleep(800);/**延时800ms**/
                        continue;
                        break;
                    };
                }
                else
                {
                    cout << "密码输入错误\n\n";
                    break;
                }
            }
        }
        return 0;
    }
