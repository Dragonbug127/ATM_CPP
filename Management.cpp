//����Ա������
//���������ڹ����ͻ���Ա
//�����ߣ� hello
//���ú�����Modify
    #include "ltb.h"

    void Management(USER*head)/**����Ա����**/
    {
        int n;
        USER *p=head->next;/**ͷ�ڵ�ָ����һ���ڵ�**/
        while(1)
        {
            fflush(stdin);/**��ջ�������**/
            system("cls");/**����**/
            cout << "\n\n\t\t\t�˻�ע��������" << head->n;/**�����ǰ��ע����û�����**/
            cout << "\n\t\t\t�˻�ע�����ޣ�1000 \n";/**���ע������**/
            while(p != NULL)/**�û���Ϊ��**/
            {
                cout << "\n\n\t\t\t  ~�û���Ϣ~\n"
                     << "\t\t\t�˺�:" << p->output_Ac() << ">>>>\n\n"/**����˺�**/
                     << "\t\t\t�� �� ��:" << p->output_N() << " \n\n "/**����û���**/
                     << "\t\t\t�� ��:" << p->output_B() << "\n\n";/**������**/
                if(p->output_S() == 1)
                    cout << "\t\t\t�û�״̬: ����";/**������**/
                else
                    cout << "\t\t\t�û�״̬: ������";/**������**/
                p=p->next;/**ָ����һ���ڵ�**/
            }
            cout << "\n\t\t\t<<1>>�޸��û���Ϣ\t\t<<2>>�˳�\n";/**���ѡ��**/
            cin >> head->choose;/**ѡ��**/
            switch(head->choose)/**switchѡ�����**/
            {
            case 1:
                head->choose = 0;/**��ʼ��ѡ��**/
                cout << "\t\t\t\t��������Ҫ�޸ĵ��û��˺ţ�";/**�����޸ĵ��û����**/
                cin >> n;/**������**/
                n = Modify(n,head);/**�����޸Ľ��沢���䴫ֵ**/
                break;
            case 2:
                head->choose = 0;/**��ʼ��ѡ��**/
                hello(head);/**����������**/
                break;
            };
        }
    }