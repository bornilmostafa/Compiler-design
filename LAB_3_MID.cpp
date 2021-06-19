#include <iostream>
#include<string>

using namespace std;

int main()
{
    int T;
    cout<<"Enter How many times you want to run :";
    cin>>T;
for(int j=0;j<T;j++)

{
char a[10];
cout<<"\nEnter your operator :";
cin>>a;

for(int i=0;i<10;i++){
//THIS for Additon subtraction,assigmnet operator
if(a[0]=='+'||a[0]=='-'||a[0]=='/'||a[0]=='*'||a[0]=='>'||a[0]=='%'||a[0]=='<')
{
 if(a[0]=='+'&&(a[1]=='-'||a[1]=='*'||a[1]=='/'))
 {
     cout<<"IS not an valid operator";
     break;
 }
if(a[0]=='-'&&(a[1]=='-'||a[1]=='*'||a[1]=='/'))
 {
     cout<<"IS not an valid operator";
     break;
 }
 if(a[0]=='*'&&(a[1]=='-'||a[1]=='+'||a[1]=='/'))
 {
     cout<<"IS not an valid operator";
     break;
 }


if(a[1]>96 && a[1]<123 ||a[1]>64 && a[1]<91)
{
cout<<"IS not an operator";
break;
}
if(a[1]=='+'){
cout<<"\nIncrement operator";
break;
}
else if(a[1]=='-'){
cout<<a;
cout<<"\nIS decrement operator";
break;
        }
else if(a[1]=='*'){
cout<<a;
cout<<"\nIS whatever operator";
break;
 }
else if(a[0]=='+'&&a[1]=='='){
        cout<<a;
cout<<"Increnemnt operator";
break;
}

cout<<a;
cout<<"\nIS is an operator";
break;

}
else if(a[0]=='!'||a[0]=='&'||a[0]=='|'){
    if(a[1]=='|'||a[1]=='='||a[1]=='&'||a[1]=='!'||a[1]=='='){
        cout<<a;
        cout<<"\nIs a logical operator";
        break;
            }
         cout<<a;
        cout<<"Is a single bit an operator";
        break;

        }


    else if(a[0]=='='){
      if(a[1]>96 && a[1]<123 ||a[1]>64 && a[1]<91)

{
    cout<<a;
    cout<<"\nIs not an operator";
    break;
}



    if(a[0]=='=')
    {
        if(a[1]=='='){
        cout<<a;
        cout<<"\nIs an Urinary operator";
        break;

    }
        cout<<a;
        cout<<"\nIs an assignment operator";
        break;
    }
        if(a[1]=='+'||a[1]=='-'){
        cout<<a;
        cout<<"\nIs a increment or decrement  operator";
        break;
        }
    }


else if(a[1]>96 && a[1]<123 ||a[1]>64 && a[1]<91){

    cout<<a;
    cout<<"\nIs not ALPHABET OR LETTER";
    break;
}




else {
        cout<<"\nIs not an operator";
        break;

}


    return 0;
}
}

}

