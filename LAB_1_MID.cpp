

//================keyword code=======================
#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

using namespace std;


int main ()
{
string s1[32]={"auto","break","case","char"
"const", "continue"	,"default", "do"
"double" ,"else"	,"enum",	"extern"
"float",	"for",	"goto"	"if"
"int" ,"long"	,"register"	,"return"
"short","signed"	"sizeof",	"static"
"struct",	"switch"	"typedef"	"union"
"unsigned",	"void",	"volatile"	,"while"};
string s2;
   cin>>s2;

    for(int i=0;i<32;i++)
        {
            if(s2==s1[i])
             {cout<<"valid keyword";
        }

}

            cout<<"invalid keyword typed";

}












//=====================Bangladesh code===================



#include <iostream>
#include<stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{

  string S1, T1,S2,T2;

    getline(cin,S1);
   getline(cin,S2);

    stringstream X1(S1);
    stringstream X2(S2);
    while (getline(X1,T1,' ')) {
        cout << T1 << endl;
    }

       while (getline(X2, T2, '-')) {
        cout << T2 << endl;
    }

    return 0;



}
//==================number or string code======================

#include<iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_VALUE 100

using namespace std;
int main()
{
    char input[MAX_VALUE] = "";
    int length,i;

    cin>>input;
    length = strlen (input);
    for (i=0;i<length; i++)
        if (!isdigit(input[i]))
        {
            cout<<"Entered input is a ;
            cout<<"\n";
            exit(1);
        }
    cout<<"The  input is a String";
    cout<<"\n";


}

