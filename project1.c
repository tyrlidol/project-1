   /*project 1 ciphers*///
//rotation cipher
#include<stdio.h>
int main()
{
char code[100], ch;
int i, key=3;
//scanf("%s", code );
scanf("%[^\n]%*c",code);
printf(" code to encrypt: %s \n", code);
printf(" key: ");
scanf("%d", &key);
	
	for(i = 0; code[i] != '\0'; ++i){
		ch = code[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			code[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			code[i] = ch;
		}
	}
	
	printf("Encrypted code: %s ", code);


}
