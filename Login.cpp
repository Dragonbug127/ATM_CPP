    
//�û���¼��ʼ����
//�����������û���¼��ʼ����
//�����ߣ� Login
//���ú�����judge

    #include "ltb.h"
    USER*Login(USER *head)
    {
        USER *p = head->next;
        int number;/**������˺�**/
        cout << "\t\t\t�������˺ţ�";/**����������˺�**/
        cin >> number;/**��number��ֵ**/
        while(p != NULL)
        {
            if(number == p->output_Ac())
            {
                if(p->output_S() == 1)/**�ж��û�״̬**/
                {
                    cout << "***\n";
                    judge(head,p);/**��ת�������ж�**/
                }
                else
                {
                    system("cls");/**����**/
                    cout << "\n\n\t\t\t�����˻���������\n\a\t\t\t����ϵ������Ա���н�����\n";/**�����˻�������������ϵ������Ա���н�����**/
                    Sleep(1000);/**��ʱ1000ms**/
                    hello(head);/**���ػ�ӭ����**/
                }
            }
            p=p->next;
        }
        cout << "\t\t\t�û�δע����û����������!\a\n";
        Sleep(800);/**��ʱ800ms**/
        hello(head);/**���ػ�ӭ����**/
        return head;
    }
