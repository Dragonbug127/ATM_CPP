//用户插入注册
//本函数用于用户插入注册
//调用者： Insert
//调用函数：registered，hello

    #include "ltb.h"

    void Insert(USER *head,USER *tail)
    {
        if (head->n ==999)/**注册数量等于999**/
        {
            cout << endl << endl << endl
                 << "\t\t\t\t***************************************" << endl
                 << "\t\t\t\t*     欢迎使用银行自助服务系统        *" << endl
                 << "\t\t\t\t*         用户注册已达上限            *" << endl
                 << "\t\t\t\t***************************************" << endl;
            Sleep(2000);/**延时**/
        }
        USER *p1,*p2,*p3;/**定义指针**/
        int n =0;
        p3 = new User;
        system("cls");/**清空**/
        string mima;
        while(1)
        {
            system("cls");
            cout << "\t\t\t\t***************************************\n"
                 << "\t\t\t\t**    欢迎使用建设银行账户注册系统     *\n"/**输出欢迎使用建设银行账户注册系统**/
                 << "\t\t\t\t*     请按照要求填写信息进行注册      *\n"/**请按照要求填写信息进行注册**/
                 << "\t\t\t\t***************************************\n";
            p1 = new USER;
            cout << "\n\t\t\t请输入真实姓名：";/**输出请输入真实姓名：**/
            p1->input_N();/**向Account_number赋值**/
            mima = P_input();
            head->n ++;/**用户数量编号加一**/
            n++;/**添加数量加一**/
            int c = 2018000 + head->n;
            p1->input_Ac(c);
            p1->input_P(mima);/**将后面的函数值赋予前面的函数**/
            p1->input_S(1);/**对用户进行状态设定**/
            system("cls");/**清屏**/
            cout <<"\n\t\t\t\t账户注册成功!\n\a\n";/**输出账户注册成功!请重新登录**/
            cout <<"\t\t\t\t账号：    "<< p1->output_Ac() << "    >>>>\n\n"
                 <<"\t\t\t\t用户名：    "<< p1->output_N()
                 <<"\n\n\t\t\t\t用户类型：    普通用户\n\n"
                 <<"\t\t\t\t余额：    " << p1->output_B()<< endl
                 <<"\t\t\t是 否 继 续 录 入？\n"
                 <<"1、是    2、否\n";
            cin >>p1->choose;
            if(n==1)
                p3 = p1;/**保存第一位指针**/
            else
                p2->next = p1;/**否则使p2的尾指向p1的头**/
            if(p1->choose == 2)
            {
                p2 = tail;
                p2->next = p3;
                tail = p1->next;
                hello(head);
            }
            p2 = p1;/**令p2保存p1**/
            Sleep(800);/**延时800ms**/
        }
    }

