//ȡ�������
//���������ڿͻ�ȡ��ҵ��
//�����ˣ�������
//�����ߣ�one5
//���ú�������
    #include "ltb.h"

    USER* one5(int y,USER*p)/**ȡ��ȷ�Ͻ���**/
    {
        if(y > p->output_B())/**�ж�����Ƿ����**/
        {
            cout << "���㣡\n\a";/**�������**/
            Sleep(800);/**��ʱ800ms**/
            return p;/**����ת�˺���**/
        }
        else
        {
            if(y > 5000)/**ȡ���ȴ���5000**/
            {
                cout << "\t��󵥴�ȡ����5000Ԫ\n\a\t�����������ѡ��ȡ����Ŀ\n";/**�����󵥴�ȡ����5000Ԫ\n\a\t�����������ѡ��ȡ����Ŀ**/
                Sleep(800);/**��ʱ800ms**/
                return p;/**����ת�˺���**/
            }
            while(1)
            {
                cout << "\t��Ҫȡ�����ĿΪ" << y <<"Ԫ\n";/**���ȡ����Ŀ**/
                cout << "\t<1>ȷ��       <2>ȡ��\n";/**ȷ�ϻ�ȡ��ȡ�����**/
                cin >> p->choose;
                switch(p->choose)
                {
                case 1:/**ѡ��1**/
                    p->choose = 0;
                    system("cls");/**����**/
                    p->input_Be(y);/**���û�������**/
                    p->input_Bi(y,1);/**����**/
                    cout << "\n\n\t\t\t���պ�����Ǯ��\n\a";/**������պ�����Ǯ��**/
                    Sleep(800);/**��ʱ800ms**/
                    return p;/**����ת�˺���**/
                    break;
                case 2:/**ѡ��2**/
                    p->choose = 0;
                    return p;/**����ת�˺���**/
                    break;
                }
            }
        }
    }