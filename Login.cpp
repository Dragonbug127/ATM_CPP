    
//用户登录初始界面
//本函数用于用户登录初始界面
//调用者： Login
//调用函数：judge

    #include "ltb.h"
    USER*Login(USER *head)
    {
        USER *p = head->next;
        int number;/**输入的账号**/
        cout << "\t\t\t请输入账号：";/**输出请输入账号**/
        cin >> number;/**向number赋值**/
        while(p != NULL)
        {
            if(number == p->output_Ac())
            {
                if(p->output_S() == 1)/**判断用户状态**/
                {
                    cout << "***\n";
                    judge(head,p);/**跳转到密码判断**/
                }
                else
                {
                    system("cls");/**清屏**/
                    cout << "\n\n\t\t\t您的账户已锁定！\n\a\t\t\t请联系工作人员进行解锁！\n";/**您的账户已锁定！请联系工作人员进行解锁！**/
                    Sleep(1000);/**延时1000ms**/
                    hello(head);/**返回欢迎界面**/
                }
            }
            p=p->next;
        }
        cout << "\t\t\t用户未注册或用户名输入错误!\a\n";
        Sleep(800);/**延时800ms**/
        hello(head);/**返回欢迎界面**/
        return head;
    }
