#include <stdio.h>
int main()
{
	int anual=12, i, mesmay, mesmen;
	float  nori, suri, centi, paci, golfi, cari, norte, sur, centro, golfo , pacifico, caribe, suma, temay, temen;
	char *zonamay, *zonamen;
	
	if(anual == 12)
	{					
		for(i=1; i<=12; i++)
		{
			printf("Escribe la temperatura del norte en el mes %d: ", i);
			scanf("%f", &norte);
			suma = suma + norte;
			
			if(i==1)
			{
				temay = norte;
				temen = norte;
				zonamay = "norte";
				zonamen = "norte";
				mesmay = i;
				mesmen = i;
			}
			if(temay < norte)
			{
				temay = norte;
				zonamay = "norte";
				mesmay = i;
			}
			if(temen > norte)
			{
				temen = norte;
				zonamen = "norte";
				mesmen = i;
			}

		}	
		
		nori = suma/12;
		suma = suma - suma;
		printf ("\n\n");
		
		for(i=1; i<=12; i++)
		{
			printf("Escribe la temperatura del sur en el mes %d: ", i);
			scanf("%f", &sur);
			suma = suma + sur;
			
			if(temay < sur)
			{
				temay = sur;
				zonamay = "sur";
				mesmay = i;
			}
			if(temen > sur)
			{
				temen = sur;
				zonamen = "sur";
				mesmen = i;
			}
		}
		
		suri = suma/12;
		suma = suma - suma;
		printf ("\n\n");
		
		for(i=1; i<=12; i++)
		{
			printf("Escribe la temperatura del centro en el mes %d: ", i);
			scanf("%f", &centro);
			suma = suma + centro;
			
			if(temay < centro)
			{
				temay = centro;
				zonamay = "centro";
				mesmay = i;
			}
			if(temen > centro)
			{
				temen = centro;
				zonamen = "centro";
				mesmen = i;
			}

		}
		
		centi = suma / 12;
		suma = suma - suma;
		printf ("\n\n");
		
			for(i=1; i<=12; i++)
		{
			printf("Escribe la temperatura del golfo en el mes %d: ", i);
			scanf("%f", &golfo);
			suma = suma + golfo;
			
			if(temay < golfo)
			{
				temay = golfo;
				zonamay = "golfo";
				mesmay = i;
			}
			if(temen > golfo)
				{
				temen = golfo;
				zonamen = "golfo";
				mesmen = i;
			}

		}
		
		golfi = suma / 12;
		suma = suma - suma;
		printf ("\n\n");
		
		for(i=1; i<=12; i++)
		{
			printf("Escribe la temperatura del pacifico en el mes %d: ", i);
			scanf("%f", &pacifico);
			suma = suma + pacifico;
			
				if(temay < pacifico)
			{
				temay = pacifico;
				zonamay = "pacifico";
				mesmay = i;
			}
			if(temen > pacifico)
			{
				temen = pacifico;
				zonamen = "pacifico";
				mesmen = i;
			}
		}
		
		paci = suma / 12;
		suma = suma - suma;
		printf ("\n\n");
		
		for(i=1; i<=12; i++)
		{
			printf("Escribe la temperatura del caribe en el mes %d: ", i);
			scanf("%f", &caribe);
			suma = suma + caribe;
			
			if(temay < caribe)
			{
				temay = caribe;
				zonamay = "caribe";
				mesmay = i;
			}
				if(temen > caribe)
			{
				temen = caribe;
				zonamen = "caribe";
				mesmen = i;
			}
		}
			cari = suma / 12;
	}
					
	if(suri > paci && suri > cari)
	{
		printf("\nEl sur tiene un promedio mayor que el pacifico y el caribe.");
	}
	else if(paci > suri && paci > cari)
	{
		printf("\nEl pacifico tiene un promedio mayor que el sur y el caribe.");
	}
	else if(cari > paci && cari > suri)
	{
		printf("\nEl caribe tiene un promedio mayor que el pacifico y el sur.");
	}

	printf("\nEl promedio del clima en el norte fue %1.2f ", nori);
	printf("\nEl promedio del clima en el sur fue %1.2f ", suri);
	printf("\nEl promedio del clima en el centro fue %1.2f ", centi);
	printf("\nEl promedio del clima en el golfo fue %1.2f ", golfi);
	printf("\nEl promedio del clima en el pacifico fue %1.2f ", paci);
	printf("\nEl promedio del clima en el caribe fue %1.2f ", cari);
	
	printf("\nEn la zona %s en el mes %d se presente la temperatura mas alta de %1.2f", zonamay, mesmay, temay);
	printf("\nEn la zona %s en el mes %d se presente la temperatura mas baja de %1.2f", zonamen, mesmen, temen);
	
	return 0;
}

