    #include "ltb.h"



    void hello(USER *head)
    {
        USER *tail = new User;/**����һ��ָ������������ٿռ�**/
        string a;
        do
        {
            fflush(stdin);/**��ջ�������**/
            system("cls");/**����**/
            cout << "\n\n\t\t\t ������������������������������������������\n"
                 << "\t\t\t��                                        ��\n"
                 << "\t\t\t��        ��ӭʹ��������������ϵͳ        ��\n"
                 << "\t\t\t��                                        ��\n"
                 << "\t\t\t ������������������������������������������\n"
                 << "\n\n\t\t\t\t\t<1>�˻�ע��\n\n\t\t\t\t\t<2>�˻���¼\n\n\t\t\t\t\t<3>Ա������ϵͳ\n\n";
            cin >> head->choose;
            cout << endl;
            switch(head->choose)
            {
            case 1:/**ѡ��1**/
                head->choose = 0;/**��ʼ��ѡ��**/
                head = registered(head,tail);/**�����˻�ע��**/
                break;
            case 2:/**ѡ��2**/
                head->choose = 0;/**��ʼ��ѡ��**/
                head = Login(head);/**�����û���¼**/
                break;
            case 3:/**Ա������ϵͳ**/
                head->choose = 0;/**��ʼ��ѡ��**/
                cout <<"���������Ա����" << endl;
                a = P_input();/**��������**/
                if(a == "582127")/**����**/
                    Management(head);/**����**/
                else
                    continue;/**����**/
                break;
            case 5:
                bill(head);
                break;
            };
        }
        while(1);
    }
