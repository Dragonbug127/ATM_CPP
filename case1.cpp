//ת��ҵ��
//���������ڹ���ͻ���Ա
//�����ߣ� USER
//���ú�����Modify
#include "ltb.h"

    USER*case1(USER *head,USER *p)/**ת��ҵ��**/
    {
        USER*p1 = head->next;/**ͷ�ڵ�ָ����һ���ڵ�**/
        int number;/**�����˺�����Ϊ����**/
        int T_money;/**ת�˽��**/
        int a = 0;/**��ʼ��**/
        system("cls");/**����**/
        cout << "\n\n\t\t\t������ת���˺�:"
             << "<\n\n\t\t<0>�˳�\n";
        cin >> number;/**�����˺�**/
        if(number==0)/**����˺Ų�����**/
            return head;/**����ͷ�ڵ�**/
        else
        {
            while(p1 != NULL)/**�û���Ϊ��**/
            {
                if(p1->output_Ac() == number)/**�ж��Ƿ�Ϊ�Լ����˻�**/
                {
                    a = 1;
                }
                p1=p1->next;/**ָ����һ���ڵ�**/
            }
            if(a == 1)
            {
                if(number == p->output_Ac())/**�ж��˻����û��˻��Ƿ�һ��**/
                {
                    cout << "\t\t\t�޷����Լ����û�ת�ˣ�\n\a";
                    Sleep(800);/**��ʱ800ms**/
                    head = case1(head,p);/**������������ת�˽��**/
                }
                else/**�������**/
                {
                    system("cls");/**����**/
                    cout << "\n\n\t\t\t������ת�˽��:\n";
                    cin >> T_money;/**����ת�˽��**/
                    if(T_money > p->output_B())/**�ж�����Ƿ����**/
                    {
                        system("cls");/**����**/
                        cout << "\n\n\t\t\t��������\n\a";/**����������㣬����������**/
                        Sleep(800);/**��ʱ800ms**/
                        head = case1(head,p);/**������������ת�˽��**/
                    }
                    else
                    {
                        system("cls");/**����**/
                        cout << "\n\n\t\t\t��" << p1->output_Ac() << "ת�˳ɹ�\n";/**�����x�û�ת�˳ɹ�**/
                        Sleep(800);/**��ʱ800ms**/
                        p->input_Be(T_money);/**���û�������**/
                        p1->input_Ba(T_money);/**�����û��������**/
//                        SYSTEMTIME time;
//                        GetLocalTime( &time );
//                        if(time.wHour >= 16)
//                        {
//                            p->input_Bi(T_money,1);/**���˴���**/
//                            p1->input_Bi(T_money,0);/**���˴���**/
//                        }
                        return head;/**�����û��������**/
                    }
                }
            }
            else
            {
                cout << "��������˺�����\n\n\a";
                Sleep(800);/**��ʱ800ms**/
                head = case1(head,p);/**������������ת�˽��**/
            }
        }
        return head;
    }
