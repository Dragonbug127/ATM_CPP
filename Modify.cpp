//����Ա������
//�����������û���Ϣ�޸Ľ���
//�����ߣ� hello
//���ú�����Modify
    #include "ltb.h"

    int Modify(int A,USER*p)/**�û���Ϣ�޸Ľ���**/
    {
        int d;/**���庯������**/
        int f=0;/**��ʼ��**/
        string mima;/**��������**/
        p=p->next;/**ָ����һ���ڵ�**/
        while(p!=NULL)/**�û���Ϊ��**/
        {
            if(A == p->output_Ac())/**�ж���Ϣ���û���Ϣ�Ƿ�һ��**/
            {
                f=1;
                break;
            }
            p = p->next;/**ָ����һ���ڵ�**/
        }
        if(f==0)
        {
            return 0;/**����**/
        }
        while(1)
        {
            fflush(stdin);/**��ջ�������**/
            system("cls");/**����**/
            cout << "\n\n\n\n\t\t\t  ~�û���Ϣ~\n"
                 << "\t\t\t   �˺�:" << p->output_Ac() << ">>>>\n\n"/**����˺�**/
                 << "\t\t\t(1)�� �� ��:" << p->output_N() << " \n "/**����û���**/
                 << "\t\t\t   �� ��:" << p->output_B() << "\n\n";/**������**/
            if(p->output_S() == 1)
                cout << "\t\t\t(2)�û�״̬: ����\n";/**������**/
            else
                cout << "\t\t\t(2)�û�״̬: ������\n"/**������**/
                     << "\t\t\t(3)�˳�\n"
                     << "\n\n\t\t\t��������Ҫ�޸ĵ�ѡ�\n\n";
            cin >>d;/**����ѡ��**/
            if(d == 3)
                return 0;
            else
            {
                mima = P_input();/**��������**/
                if(mima == p->output_P())/**�ж��������û������Ƿ�һ��**/
                {
                    switch(d)
                    {
                    case 1:
                        d = 0;
                        cout << "��������ĺ���û���\n";
                        p->input_N();
                        cout << "�޸ĳɹ�\n";
                        Sleep(800);/**��ʱ800ms**/
                        continue;
                        break;
                    case 2:
                        d = 0;
                        cout << "�ⶳ��";/**�ⶳ��**/
                        for(d=0; d<5; d++)
                        {
                            Sleep(200);/**��ʱ200ms**/
                            cout <<"*";
                        }
                        p->input_S(1);
                        p->input_P(000000);/**������ֵΪ000000**/
                        cout << "�ⶳ�ɹ�\n��������Ϊ 000000";/**�ⶳ�ɹ� ��������Ϊ000000**/
                        Sleep(800);/**��ʱ800ms**/
                        continue;
                        break;
                    };
                }
                else
                {
                    cout << "�����������\n\n";
                    break;
                }
            }
        }
        return 0;
    }
