#ifndef LTB_H_
#define LTB_H_

    #include <iostream>
    #include <string>
    #include <windows.h>
    #include <stdlib.h>
    #include <conio.h>
    #include <ctime>
    using namespace std;

    class basis/**����**/
    {
        public:/**˽�г�Ա**/
            int Account_number;/**�˺�**/
            string name;/**�˻���**/
            int Balance;/**�˻����**/
            string Password;/**ԭʼ����**/
            string state;/**�û�״̬**/
            int Bill[2][50];/**�˵�**/
            int b;/**��¼�˵�����**/
            basis();///���캯��
            virtual~basis();///��������
    };

    typedef class User:private basis
    {
    public:/**���г�Ա**/
        User*next;/**����ڵ�**/
        int n;/**ע������**/
        int i;/**����ת�˴���**/
        int choose;/**ѡ���**/
        User();/**���캯��**/
        virtual~User();/**��������**/
        void input_Ac(int A);///�����˻�
        void input_N();///�����˻���
        void input_Ba(int A);///�����������
        void input_Be(int B);///����������
        void input_P(string A);///��������
        void input_S(int a);///�����û�״̬
        void input_Bi(int a,int c);
        int output_Bi();
        int output_bao();
        int output_Ac();///����˻�
        string output_N();///����˻���
        int output_B();///������
        string output_P();///�������
        int output_S();///����û�״̬
    }USER;

    void hello(USER *);/**��ӭ����**/
    USER*registered(USER *head,USER *tail);/**�û���ʼע��**/
    void Insert(USER *head,USER *tail);/**�û�����ע��**/
    USER*Login(USER *head);/**�û���¼��ʼ����**/
    void judge(USER *huad,USER *p);/**�����ж��Ӻ���**/
    void Service(USER *head,USER *p);/**�������**/
    USER*case1(USER *head,USER *p);/**ת��**/
    USER*case2(USER *head,USER *p);/**�û���ѯ**/
    void case3(USER *head,USER *p);/**�޸������ж�**/
    void one3(USER *head,USER *p);/**�޸��������**/
    USER*case4(USER*p);/**������**/
    USER*case5(USER*p);/**ȡ�����**/
    USER*one5(int y,USER*p);/**ȡ����֤**/
    void Management(USER*head);///����Ա�������
    int Modify(int A,USER*p);///�û���Ϣ���Ľ���
    string P_input();/**�������뺯��**/
    void bill(USER *head);
#endif
