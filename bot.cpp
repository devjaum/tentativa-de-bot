//Tentativa de criar de bot;
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
main()
{
	char ml[3][3], jogaras;
	jogaras = 'n';
			vB1[i]=0;
			vB2[i]=0;
			vB3[i]=0;
			i++;
			
		}
		for(i=0;i<3;i++){//dando valor para as matrizes;
			for(j=0;j<3;j++){
				ml[i][j]= ' ';
				ms[i][j]=0;
	}
	}
		for(i=0;i<3;i++){//layout do jogo; 
		
			for(j=0;j<3;j++){
				k++;
				if (j==1&&i==1)//layout de pontos;
				ms[i][j]=4;
				else if (i==0&&j==0||i==0&&j==2||i==2&&j==0||i==2&&j==2)
				ms[i][j]=3;
				else if (i==0&&j==1||i==1&&j==0||i==1&&j==2||i==2&&j==1)
				ms[i][j]=2;
	}
	}
		for(i=0;i<3;i++){//layout pronto;
		
				if (j<2)
				printf ("%d |", ml[i][j]);
				else
				printf ("%d\n", ml[i][j]);
				
			}
		/*for(i=0;i<3;i++){//layout pronto;
		
			for(j=0;j<3;j++){
					if (j<2)
				printf ("%d |", ms[i][j]);
				else
				printf ("%d\n", ms[i][j]);
				
			}
		}*/
		int l=k=p=0;
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					
					scanf(" %d", &jogadaP[y]);
				vP[i]=0;
					
					while(k<9){//Jogadas invalidas;
						if(jogadaP[y]==vP[k])
						exit (0);
						printf("\n%d", vP[k]);
						k++;
					}
					k=0;
					vP[t]=jogadaP[y];
					t++,y++;
						if(jogadaP[y]==ml[i][j]&&vP[k-1]!=jogadaP[y])//analise;
						(ml[i][j]='X',ms[i][j]=ms[i][j]*(-1));
						
							if(i==0&&j==0||j>i&&i==0)
							(vB1[l]=vB1[l-1]+ms[i][j],l++);
							else if(i==1)
							(vB2[k]=vB2[k-1]+ms[i][j],k++);
							else if (i==2&&i>j||i==2&&j==2)
							(vB3[p]=vB3[p-1]+ms[i][j],p++);		
			
			}
			}
		printf("Deseja jogar novamente?:(S/N)");
		scanf(" %c", &jogaras);
	}while(jogaras=='s'||jogaras=='S');



}//Fim do programa;

