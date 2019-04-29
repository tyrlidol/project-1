   /*project 1 ciphers*///
//cipher's Andreas Sklavs c3281951
#include<stdio.h>
#include <string.h>
int main()
{
char code[1000], letter;
int i, key;
int choice;
    printf(" Choose One Of The Options Below\n\n");             /*printing the menu for which cipher to be used*/
    printf("\n 1. Rotation Cipher Encryption");                 /*option for rotation cipher encryption*/
    printf("\n 2. Rotation Cipher Decryption");                 /*opton for rotation cipher decryption*/
    printf("\n 3. Substitution Cipher Encryption");             /*option for substitution cipher encryption*/
    printf("\n 4. Substitution Cipher Decryption");             /*option for substitution cipher decryption*/
    printf("\n 5. EXIT");                                       /*option to exit*/
    scanf("%d",&choice);                                        /*scaning choice*/
    scanf("%[^\n]%*c", code);                                   /*scanning code entered*/
    scanf("%d", &key);                                          /*scanning key entered*/
    printf("\n\tchoice: %d \n", choice);                        /*printing choice made*/
    printf("\n\tcode to encrypt or decrypt: %s \n", code);      /*printing code to be encrypted or decrypted*/
    printf("\tkey: %d \n", key);                                /*printing key*/
    
     if (choice==1)                                             /*choice 1*/
     {
    	   for(i = 0; code[i] != '0'; i++)                      /*conditions for start*/
	   {
		      letter = code[i];                                 /*assigning a letter to letter*/
		
		      if(letter >= 'a' && letter <= 'z')                /*lowercase*/
		  {
			     letter = letter + key;                         /*progressing letter a position reltive to the key*/
			
			  if(letter > 'z')
            {   
			         letter = letter - 'z' + 'a'-1;             /*if outside the range*/
        	 }
			
			         code[i] = letter;                          /*assigning a letter to letter*/
		   }
		      else if(letter >= 'A' && letter <= 'Z')           /*uppercase*/
		   {
			      letter = letter + key;			            /*progressing letter a position reltive to the key*/
			  if(letter > 'Z')
			 {
				    letter = letter - 'Z' + 'A'-1;              /*if outside the range*/
			 }
			
			         code[i] = letter;
		    }
	   }
	
	           printf("\n\tEncrypted code: %s \n ", code);       /*printing encrypted code*/
    }

        else if (choice==2)                                      /*choice 2*/
{
	
	       for(i = 0; code[i] != '0'; ++i)                       /*conditions for start*/
    {
		      letter = code[i];                                  /*assigning a letter to letter*/
		
		      if(letter >= 'a' && letter <= 'z')
		  {
			  letter = letter - key;                              /* progressing letter a position reltive to the key*/                       
			
			  if(letter < 'a')                                      
		    { 
			  letter = letter + 'z' - 'a'+1;                      /*if outside the range*/
		    }
			
			  code[i] = letter;                                   /*assigning a letter to letter*/
		  }
		      else if(letter >= 'A' && letter <= 'Z')
		{
			  letter = letter - key;                              /*progressing letter a position reltive to the key*/
			
			  if(letter < 'A')
	       {
			  letter = letter + 'Z' - 'A'+1;                      /*if outside the range*/
		   }
			
	           code[i] = letter;
		}
    }  
	
	           printf("\n\tDecrypted message: %s", code);          /*printing the recrypted messege*/
	
}
        else if (choice==3)                                             /*choide 3*/
        {
                for (char* a = code; a = strchr(a, 'A'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'Z';
            } 
                for (char* a = code; a = strchr(a, 'C'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'X';
            } 
                for (char* a = code; a = strchr(a, 'E'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'V';
            } 
                for (char* a = code; a = strchr(a, 'G'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'T';
            } 
                for (char* a = code; a = strchr(a, 'I'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'R';
            } 
                for (char* a = code; a = strchr(a, 'K'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'P';
            } 
                for (char* a = code; a = strchr(a, 'M'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'N';
            } 
                for (char* a = code; a = strchr(a, 'O'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'L';
            } 
                for (char* a = code; a = strchr(a, 'Q'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'J';
            }
                for (char* a = code; a = strchr(a, 'S'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'H';
            }   
                for (char* a = code; a = strchr(a, 'U'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'F';
            }
                for (char* a = code; a = strchr(a, 'W'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'D';
            }
                for (char* a = code; a = strchr(a, 'Y'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'B';
            }
                
    
                printf("encrypted code %s\n", code);                    /*printing encrypted code*/
        }

        else if (choice==4)                                             /*choice 4*/
        {
                for (char* a = code; a = strchr(a, 'Z'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'A';
            }
                for (char* a = code; a = strchr(a, 'X'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'C';
            }
                for (char* a = code; a = strchr(a, 'V'); ++a)           /*changing 1 letter to another*/
            {   
                *a = 'E';
            }
                for (char* a = code; a = strchr(a, 'T'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'G';
            }
                for (char* a = code; a = strchr(a, 'R'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'I';
            }
                for (char* a = code; a = strchr(a, 'P'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'K';
            }
                for (char* a = code; a = strchr(a, 'N'); ++a)            /*changing 1 letter to another*/
            {
                *a = 'M';
            }
                for (char* a = code; a = strchr(a, 'L'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'O';
            }
                for (char* a = code; a = strchr(a, 'J'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'Q';
            }
                for (char* a = code; a = strchr(a, 'H'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'S';
            }
                for (char* a = code; a = strchr(a, 'F'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'U';
            }
                for (char* a = code; a = strchr(a, 'D'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'W';
            }
                for (char* a = code; a = strchr(a, 'B'); ++a)           /*changing 1 letter to another*/
            {
                *a = 'Y';
            }
                
                printf("decrypted code %s\n", code);                    /*printing decrypted code*/
      
                return 0;                                               /*end*/
        }
}
