    #include "ltb.h"

    basis::basis()
    {
        
    }
    basis::~basis()
    {
        cout << "*";
    }
    User::User()/**���캯��**/
    {
        n = 0;
        choose = 0;
    }
    User::~User()/**��������**/
    {
        cout << "*";
    }
    void User::input_Ac(int A)/**�����˻���**/
    {
        Account_number = A;
    }
    void User::input_N()/**�����˻���**/
    {
        cin >> name;
    }
    void User::input_Ba(int A)/**�����˻����**/
    {
        Balance +=A;
    }
    void User::input_Be(int B)/**�����˻����**/
    {
        Balance -=B;
    }
    void User::input_P(string A)/**��������**/
    {
        Password = A;
    }
    void User::input_S(int a)/**�����û�״̬**/
    {
        if(a == 1)
            state = "����";
        else
            state = "������";
    }
    void User::input_Bi(int a,int c)
    {
        if(c==1)/**�������**/
            Bill[1][b++] = a;
        else/**��������**/
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
    string User::output_N()/**����˻���**/
    {
        return name;
    }
    int User::output_B()/**����˻����**/
    {
        return Balance;
    }
    string User::output_P()/**���ԭʼ����**/
    {
        return Password;
    }
    int User::output_S()/**����û�״̬**/
    {
        if(state == "����")
            return 1;
        else
            return 0;
    }
