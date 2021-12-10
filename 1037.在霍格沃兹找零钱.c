#include<stdio.h>

int main()
{
	long galleon, i_ga ,z_ga;
	int sickle, i_si, z_si;
	int knut, i_kn, z_kn;

	scanf("%ld.%d.%d %ld.%d.%d",&i_ga, &i_si, &i_kn ,&galleon, &sickle, &knut );

	if (galleon * 17 * 29 + sickle * 29 + knut > i_ga * 17 * 29 + i_si * 29 + i_kn)
	{
		z_kn = knut - i_kn;
		if (z_kn < 0)
		{
			sickle--;
			z_kn += 29;
		}
		z_si = sickle - i_si;
		if (z_si < 0)
		{
			galleon--;
			z_si += 17;
		}
		z_ga = galleon - i_ga;
	}
	else
	{
		z_kn = i_kn - knut;
		if (z_kn < 0)
		{
			z_kn += 29;
			i_si--;
		}
		z_si = i_si - sickle;
		if (z_si < 0)
		{
			z_si += 17;
			i_ga--;
		}
		z_ga = galleon - i_ga;


	}

	printf("%ld.%d.%d" , z_ga , z_si , z_kn);


	return 0;
}
