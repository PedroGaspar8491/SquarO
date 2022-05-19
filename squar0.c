#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3][3];
    int crcl[4][4];
    int number;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {         
            do
            {
                printf("Indique o Numero no Quadrado da Linha %d, Coluna %d (0 a 4): ", x+1, y+1);
                scanf("%d", &number);
                if (0<= number && number <= 4)
                {
                    nums[x][y] = number;
                    break;  
                }else{
                    printf("Entrada Invalida.");
                }  
                
            } while (1);                
        }
    }
    int on;
    for (int a = 0; a < 4; a++)
    {   
        for (int b = 0; b < 4; b++)
        {      
            do
            {
                printf("%d\n", b);
                printf("Indique se o Circulo da Linha %d, Coluna %d Esta Preenchido (0= nao esta; 1= esta): ", a+1, b+1);
                scanf("%d", &on);
                if (on == 0 || on == 1)
                {  
                    crcl[a][b] = on;
                    break;
                }else{
                    printf("Entrada Invalida.");
                } 
            } while (1);        
        }
    }
    for (int x = 0; x <= 2; x++)
    {
        for (int y = 0; y <= 2; y++)
        {
           switch (x)
           {
            case 0:
                switch (y)
                {
                    case 0:
                        if (nums[x][y]== crcl[0][0]+crcl[0][1]+crcl[1][0]+crcl[1][1]){
                            break;
                        }else{
                            system("cls");
                            printf("Solucao invalida");
                            return 0;
                        }
                        
                    case 1:
                        if (nums[x][y]== crcl[0][2]+crcl[0][1]+crcl[1][2]+crcl[1][1]){
                            break;
                        }else{
                            system("cls");
                            printf("Solucao invalida");
                            return 0;
                        }
                    case 2:
                        if (nums[x][y]== crcl[0][2]+crcl[0][3]+crcl[1][2]+crcl[1][3]){
                            break;
                        }else{
                            system("cls");
                            printf("Solucao invalida");
                            return 0;
                        }
                }
                break;
            case 1:
                switch (y)
                {
                    case 0:
                        if (nums[x][y]== crcl[1][0]+crcl[1][1]+crcl[2][0]+crcl[2][1]){
                            break;
                        }else{
                            system("cls");
                            printf("Solucao invalida");
                            return 0;
                        }
                        
                    case 1:
                        if (nums[x][y]== crcl[1][2]+crcl[1][1]+crcl[2][2]+crcl[2][1]){
                            break;
                        }else{
                            system("cls");
                            printf("Solucao invalida");
                            return 0;
                        }
                    case 2:
                        if (nums[x][y]== crcl[1][2]+crcl[1][3]+crcl[2][2]+crcl[2][3]){
                            break;
                        }else{
                            system("cls");
                            printf("Solucao invalida");
                            return 0;
                        }
                }
                break;
            case 2:
                switch (y)
                {
                    case 0:
                        if (nums[x][y]== crcl[2][0]+crcl[2][1]+crcl[3][0]+crcl[3][1]){
                            break;
                        }else{
                            system("cls");
                            printf("Solucao invalida");
                            return 0;
                        }
                        
                    case 1:
                        if (nums[x][y]== crcl[2][2]+crcl[2][1]+crcl[3][2]+crcl[3][1]){
                            break;
                        }else{
                            system("cls");
                            printf("Solucao invalida");
                            return 0;
                        }
                    case 2:
                        if (nums[x][y]== crcl[2][2]+crcl[2][3]+crcl[3][2]+crcl[3][3]){
                            break;
                        }else{
                            system("cls");
                            printf("Solucao invalida");
                            return 0;
                        }
                }
                break;
           
           }
        }
    }
    system("cls");
    printf("Solucao Valida!");
    
}