    #include "ltb.h"



    void hello(USER *head)
    {
        USER *tail = new User;/**声明一个指针变量，并开辟空间**/
        string a;
        do
        {
            fflush(stdin);/**清空缓冲区域**/
            system("cls");/**清屏**/
            cout << "\n\n\t\t\t △▽△▽△▽△▽△▽△▽△▽△▽△▽△▽△\n"
                 << "\t\t\t□                                        □\n"
                 << "\t\t\t□        欢迎使用银行自助服务系统        □\n"
                 << "\t\t\t□                                        □\n"
                 << "\t\t\t ▽△▽△▽△▽△▽△▽△▽△▽△▽△▽△▽\n"
                 << "\n\n\t\t\t\t\t<1>账户注册\n\n\t\t\t\t\t<2>账户登录\n\n\t\t\t\t\t<3>员工管理系统\n\n";
            cin >> head->choose;
            cout << endl;
            switch(head->choose)
            {
            case 1:/**选择1**/
                head->choose = 0;/**初始化选择**/
                head = registered(head,tail);/**进入账户注册**/
                break;
            case 2:/**选择2**/
                head->choose = 0;/**初始化选择**/
                head = Login(head);/**进入用户登录**/
                break;
            case 3:/**员工管理系统**/
                head->choose = 0;/**初始化选择**/
                cout <<"请输入管理员密码" << endl;
                a = P_input();/**输入密码**/
                if(a == "582127")/**密码**/
                    Management(head);/**管理**/
                else
                    continue;/**继续**/
                break;
            case 5:
                bill(head);
                break;
            };
        }
        while(1);
    }
