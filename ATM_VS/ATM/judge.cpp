    #include "ltb.h"

    void judge(USER *head,USER *p)/**密码判断子函数**/
    {
        string mima;
        int a = 0,b = 0;/**输入密码的次数查找标志位**/
        mima = P_input();/**输入一个密码**/
        for(a = 0; a <3; a++)
        {
            if(mima == p->output_P())/**判断密码和此用户密码是否一样**/
            {
                b=1;
                Service(head,p);/**进入用户服务界面**/
            }
            else
            {
                mima = " ";
                system("cls");/**清屏**/
                cout << "\n\n\t\t您输入的密码错误!\n\n\a"
                     << "\t\t请重新输入!!!!\n\n\n\n"/**输出您的密码错误请重新输入，并发出警告**/
                     << "三次密码输入错误，将冻结用户\n";/**输出三次密码输入错误，将冻结用户**/
                mima = P_input();/**输入密码**/
            }
        }
        if(b == 0)
        {
            system("cls");/**清屏**/
            cout << "\t\t\t\t**********************\n"
                 << "\t\t\t\t****您的账户已冻结****\n\a"/**输出您的密码已锁定并发出警告声**/
                 << "\t\t\t\t**********************\n"
                 << "\t\t您输入密码已达最大次数，请联系工作人员进行解锁。\n";/**输出输入密码已达最大次数，请联系工作人员进行解锁。**/
            /**对状态进行锁定**/
            Sleep(800);/**延时**/
            hello(head);/**跳回欢迎界面**/
        }
    }
