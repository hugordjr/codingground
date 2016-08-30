#include <stdio.h>
/*Exercício Frutaria*/

int main  ()
{
	
	int entrega,pagamento,dinheiro,debito,credito;
	float morango,maca,abacaxi,pera,valormorango,valormaca,valorabacaxi,valorpera,totaldinheiro,totalkilos;
	
	printf ("Entre com entrega: 1-Sim 2-Nao ");
	scanf ("%d",&entrega);
	
	printf ("Entre com morango: ");
	scanf ("%f",&morango);
	
	printf ("Entre com maca: ");
	scanf ("%f",&maca);
	
	printf ("Entre com abacaxi: ");
	scanf ("%f",&abacaxi);
	
	printf ("Entre com pera: ");
	scanf ("%f",&pera);
	
	printf ("Entre com pagamento: 1-Dinheiro 2-Cartao de débito 3-Cartao de crédito ");
	scanf ("%d",&pagamento);


	if (morango<=5) {
		valormorango=2.55;
	} else if (morango>=5.1&&morango<=9) {
		valormorango=2.30;
	} else if (morango>=9.1){
		valormorango=2.00;
	}
	
	printf("\nMorango: %f = %f", valormorango, valormorango*morango);
	
	if (maca<=5)
				{
				valormaca=3.20;
				}
					if (maca>=5.1&&maca<=9)
					{
					valormaca=3.00;
					}
						if (maca>=9.1)
						{					
						valormaca=2.75;
						}
	printf("\nMaca: %f = %f", valormaca, valormaca * maca);
	if (abacaxi<=5)
							{			
							valorabacaxi=4.10;
							}
								if (abacaxi>=5.1&&abacaxi<=9)
								{
								valorabacaxi=3.80;
								}
									if (abacaxi>=9.1)
									{
									valorabacaxi=3.50;
									}	
printf("\nAbacaxi: %f = %f", valorabacaxi, valorabacaxi * abacaxi);
if (pera<=5)
										{
										valorpera=2.90;
										}
											if (pera>=5.1&&pera<=9)
											{
											valorpera=2.65;
											}
												if (pera>=9.1)
												{
												valorpera=2.40;
												}	
	printf("\nPera: %f = %f", valorpera, valorpera * pera);
	
	totaldinheiro = valormorango * morango + valormaca * maca + valorabacaxi * abacaxi + valorpera * pera;
	printf("\nValor bruto: %f", totaldinheiro);
	
	totalkilos=morango+maca+abacaxi+pera;
	printf("\nKilos: %f", totalkilos);
	
	if (entrega==1)
	{
	totaldinheiro=totaldinheiro+10;
	} else if (entrega==2)
		{
		totaldinheiro=totaldinheiro;
		}

if ((totaldinheiro>100) || (totalkilos>10))
{
	totaldinheiro = totaldinheiro*0.92;
}
			
if (pagamento==1||pagamento==2) {
	printf ("O valor total da compra é: %f \n",totaldinheiro);
} else if (pagamento==3) {
	printf ("O valor de cada parcela da compra é: %f \n",totaldinheiro/3);
}

}