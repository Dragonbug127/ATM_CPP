    #include "ltb.h"

    basis::basis()
    {
        
    }
    basis::~basis()
    {
        cout << "*";
    }
    User::User()/**构造函数**/
    {
        n = 0;
        choose = 0;
    }
    User::~User()/**析构函数**/
    {
        cout << "*";
    }
    void User::input_Ac(int A)/**输入账户名**/
    {
        Account_number = A;
    }
    void User::input_N()/**输入账户名**/
    {
        cin >> name;
    }
    void User::input_Ba(int A)/**输入账户余额**/
    {
        Balance +=A;
    }
    void User::input_Be(int B)/**输入账户余额**/
    {
        Balance -=B;
    }
    void User::input_P(string A)/**输入密码**/
    {
        Password = A;
    }
    void User::input_S(int a)/**输入用户状态**/
    {
        if(a == 1)
            state = "正常";
        else
            state = "已锁定";
    }
    void User::input_Bi(int a,int c)
    {
        if(c==1)/**储存出账**/
            Bill[1][b++] = a;
        else/**储存入账**/
            Bill[0][b++] = a;
        b++;
    }
    int User::output_Bi()
    {
        return *Bill[50];
    }
    int User::output_bao()
    {
        return b;
    }
    int User::output_Ac()
    {
        return Account_number;
    }
    string User::output_N()/**输出账户名**/
    {
        return name;
    }
    int User::output_B()/**输出账户余额**/
    {
        return Balance;
    }
    string User::output_P()/**输出原始密码**/
    {
        return Password;
    }
    int User::output_S()/**输出用户状态**/
    {
        if(state == "正常")
            return 1;
        else
            return 0;
    }
