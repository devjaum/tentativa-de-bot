//Tentativa de criar de bot;
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
main()
{
	int  ms[3][3],ml2[3][3], jogadaP, jogadaB, k, i, i2, j2, j,p,u, y, t, vB1[9], vB2[9], vB3[9], vP[9];
	char ml[3][3], jogaras;
	jogadaP = jogadaB = k = i2 = j2 = i = j = t = u = y = 0;
	jogaras = 'n';
	do{//Jogo;
		while(i<9){//Dando valor para os vetores;
			vP[i]=0;
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
				ml2[i][j]=k;
				if (j==1&&i==1)//layout de pontos;
				ms[i][j]=4;
				else if (i==0&&j==0||i==0&&j==2||i==2&&j==0||i==2&&j==2)
				ms[i][j]=3;
				else if (i==0&&j==1||i==1&&j==0||i==1&&j==2||i==2&&j==1)
				ms[i][j]=2;
	}
	}
		for(i=0;i<3;i++){//layout pronto;
		
			/*for(j=0;j<3;j++){
				if (j<2)
				printf ("%d |", ml[i][j]);
				else
				printf ("%d\n", ml[i][j]);
				
			}*/
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
			for(i=0;i<3;i++){//Zerando as jogadas invalidas;
				vP[i]=0;
			}
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						for(i2=0;i2<3;i2++){//mostra as jogadas;
							for(j2=0;j2<3;j2++){
								if (j2<2)
								printf ("	%c |", ml[i2][j2]);
								else
								printf ("	%c\n", ml[i2][j2]);
						}
					}
								for(i2=0;i2<3;i2++){//mostra os numeros para as jogadas;
									for(j2=0;j2<3;j2++){
										if (j2<2)
										printf ("%d |", ml2[i2][j2]);
										else
										printf ("%d\n", ml2[i2][j2]);	
								}
							}
					printf("Sua vez!");
					scanf(" %d", &jogadaP);
					
										for(k=0;k<9;k++){//Jogadas invalidas;
											if(jogadaP==vP[k])
											exit (0);
					}
					vP[t]=jogadaP;
					t++;
											for(i2=0;i2<3;i2++){
												for(j2=0;j2<3;j2++){
													if(jogadaP==ml2[i2][j2])//analise;
													(ml[i2][j2]='X',ms[i2][j2]=-1);
						}
					}
				for(i2=0;i2<3;i2++){
					for(j2=0;j2<3;j2++){
						
					
				
					if(i2==0&&j2==0||j2>i2&&i2==0)
					(vB1[l]=vB1[l-1]+ms[i2][j2],l++);
					else if(i2==1)
					(vB2[k]=vB2[k-1]+ms[i2][j2],k++);
					else if (i2==2&&i2>j2||i2==2&&j==2)
					(vB3[p]=vB3[p-1]+ms[i2][j2],p++);		
					system("cls");
					
						
					}
				}		
			
	}
}
		for(i2=0;i2<3;i2++){//mostra as jogadas;
			for(j2=0;j2<3;j2++){
				if (j2<2)
				printf ("	%c |", ml[i2][j2]);
				else
				printf ("	%c\n", ml[i2][j2]);
			}
		}
		printf("Deseja jogar novamente?:(S/N)");
		scanf(" %c", &jogaras);
		system("cls");
		t=k=0;


}while(jogaras=='s'||jogaras=='S');



}//Fim do programa;

