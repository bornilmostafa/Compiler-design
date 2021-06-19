#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

/*
Detect whether the given mathematical expression is properly parnthesized or not
*/
int main(){
	int i, j, l, t = 0;
	char input[20];
	printf("Enter the input:");
	cin >> input;
	l = strlen(input);
	for (i = 0; i<l; i++){


		if (input[i] == '(')
			t++;
		else if (input[i] == ')')
			t--;
		else if(input[i]=='{'||input[i]=='['||input[l-1]=='}'||input[l-1]==']')
           {

            cout<<"invailed for mathmatical expression";
            break;
           }
           else if(input[i]!='('&&input[l-1]!=')')
           {
               break;
           }

		else if (input[i] == '*'|| input[i] == '/'||input[i] == '+'|| input[i]=='>'||input[i] =='<'||input[i]=='=='||input[i]!= '+'||input[i]== '_'||input[i]== '%'||input[i]!= '?'){
			if (input[i-1]>96 && input[i -1]<123 && input[i +1]>96 && input[i +1]<123&& input[i -1]>64 && input[i -1]<91&& input[i +1]>64 && input[i +1]<91){
				continue;
			}
	}
			else
				break;



	}

if(t==0)
printf("\nvalid");
else
printf("\ninvalid");


}
