#include <iostream>
#include <string.h>
#include<string>
#define MATCH cout<<"\nMATCHED";
#define NOTMATCH cout<<"\nNOTMATCHED\n";
using namespace std;
char reg[20], text[20];

int main()
{
    int i, rlen, tlen, f = 0;
    char ans;

    do {
           cout<<"\nEnter the Regular Expression:::::\n";
           cin>>reg;
        for(rlen=0;reg[rlen]!='\0';rlen++);
        cout<<"\nEnter the text::::\n";
        cin>> text;
        for(tlen=0;text[tlen]!='\0';tlen++) ;


            if(reg[0]== '+'||reg[0]== '*'|| reg[0]=='|'|| reg[0]=='?')
            {
                cout<<"\n::::::::::::::::Invalid for regular expression::::::::::::::\n";
                break;
            }

             else if ((reg[0]>=65 && reg[0]<=90) || (reg[0]>=97 && reg[0]<=122))

             {
                 if (reg[0]==text[0])
                {
                switch (reg[1])
                        {
                case '*':
                    if(reg[rlen]=='*'&&reg[rlen+1]=='*')
                        {
                            cout<<"\n Error Regular Expresion \n";
                            break;


                        }

                    else if(reg[0]==text[tlen]||reg[1]==text[tlen])
                        {
                            cout<<"\n* MATCHED\n";
                            break;

                        }
                      break;
                case '+':
                    if(reg[rlen]=='+'&&reg[rlen+1]=='+')
                    {
                        cout<<"\nInvalid Regular Expression\n";
                    }

                                if (reg[3] == text[tlen - 1])
                                {
                                  cout<<"\nError\n";
                                  break;
                                }

                             if (tlen<=2)
                        {
                           cout<<"\n limit cross\n";
                           break;
                        }

                        else if (reg[rlen-1] == text[tlen-1])
                        {
                            for (i = 0;i < tlen-2;i++)
                            {
                                if (text[i] == reg[0])
                                {
                                    f = 1;
                                    break;
                                }
                                else
                                {
                                    f = 0;
                                    break;
                                }
                            }

                            if (f == 1)
                            {
                               cout<<"\nEXpossed\n";
                               break;
                            }
                            else
                            {
                            cout<<"\nNOT EXPOSED\n";
                            break;
                            }
                        }
                        break;

                case '|':

              if((text[tlen+1]=='o'&&text[tlen+2]=='r')||(reg[0]==text[0])||(reg[2]==text[0])){
                    cout<<"\n | MATCHED \n";
                    break;

              }

              else{
                NOTMATCH;
                break;

            }
            break;


            }

                }
            else{cout<<"\nCAN NOT MATCH\n";}

             }

else{
        cout<<"\nNOT IMPLEMENTED\n";
}


cout<<"\nDo you want to continue?(Y/N)";
cin>>ans;
}while (ans == 'Y' || ans == 'y');


}
