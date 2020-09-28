    #include "ltb.h"

    void bill(USER *head)
    {
        USER*p=head->next;
        int a[2][50];
        int b;
        while(p!=NULL)
        {
            a[2][50]  = p->output_Bi();

            for(b=0;b>0;b++)
            {
                cout << "³öÕË";
                cout << a[1][b] << "    \n";
            }
            for(b=0;b>0;b++)
            {
                cout << "ÈëÕË";
                cout << a[0][b] << endl;
            }
            p=p->next;
        }
    }
