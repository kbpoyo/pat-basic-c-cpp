#include<stdio.h>
#include<string.h>
#include<math.h>
long f_z_c1, f_m_c1;
long  f_z_c2, f_m_c2;

//求绝对值
long abs_(long a)
{
	return a >= 0 ? a : (-1)*a;
 }
//得到最大公约数 
long g_y_s(long a, long b)
{
	if (b == 0 || a == 0)
	{
		return 1;
	}
	long r = a % b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;

	}
	return b;
}

//将分数化简
void jian_fun(char* c)
{
	long k = 0;//整数部分 
	long f_z;
	long f_m;

	sscanf(c, "%ld/%ld", &f_z, &f_m);
	f_z = abs_(f_z);
	f_m = abs_(f_m);
	long n = g_y_s(f_z, f_m);
	f_z = f_z / n;
	f_m = f_m / n;


	if (f_z < f_m && f_z != 0)
	{
		if (c[0] == '-')
		{
			sprintf(c, "(-%ld/%ld)", f_z, f_m);
		}
		else
		{
			sprintf(c, "%ld/%ld", f_z, f_m);
		}
		return;
	}
	else
	{
		if (f_m == 0)
		{
			sprintf(c, "Inf");
			return;
		}
		k = f_z / f_m;
		f_z = f_z % f_m;
		if (c[0] == '-')
		{
			if (f_z == 0)
			{
				if (k == 0)
				{
					sprintf(c, "%ld", k);
				}
				else
				{
					sprintf(c, "(-%ld)", k);
				}

			}
			else
			{
				sprintf(c, "(-%d %ld/%ld)", k, f_z, f_m);
			}
		}
		else
		{
			if (f_z == 0)
			{
				sprintf(c, "%ld", k);
			}
			else
			{
				sprintf(c, "%ld %ld/%ld", k, f_z, f_m);
			}
		}



	}


}



void he_c(char* he)
{
	long f_m_ret = f_m_c1 * f_m_c2;
	long f_z_ret = f_z_c1 * f_m_c2 + f_z_c2 * f_m_c1;
	if ((f_m_ret < 0 && f_z_ret > 0) ||( f_m_ret > 0 && f_z_ret < 0))
	{
		sprintf(he, "-%ld/%ld", abs_(f_z_ret), abs_(f_m_ret));
	}
	else
	{
		sprintf(he, "%ld/%ld", abs_(f_z_ret), abs_(f_m_ret));
	}
	jian_fun(he);

}

void cha_c(char* cha)
{
	long f_m_ret = f_m_c1 * f_m_c2;
	long f_z_ret = f_z_c1 * f_m_c2 - f_z_c2 * f_m_c1;
	if ((f_m_ret < 0 && f_z_ret > 0) || (f_m_ret > 0 && f_z_ret < 0))
	{
		sprintf(cha, "-%ld/%ld", abs_(f_z_ret), abs_(f_m_ret));
	}
	else
	{
		sprintf(cha, "%ld/%ld", abs_(f_z_ret), abs_(f_m_ret));
	}
	jian_fun(cha);

}

void ji_c(char* ji)
{
	long f_m_ret = f_m_c1 * f_m_c2;
	long f_z_ret = f_z_c1 * f_z_c2;
	if ((f_m_ret < 0 && f_z_ret > 0) || (f_m_ret > 0 && f_z_ret < 0))
	{
		sprintf(ji, "-%ld/%ld", abs_(f_z_ret), abs_(f_m_ret));
	}
	else
	{
		sprintf(ji, "%ld/%ld", abs_(f_z_ret), abs_(f_m_ret));
	}
	jian_fun(ji);


}

void shang_c(char* shang)
{
	long f_m_ret = f_m_c1 * f_z_c2;
	long f_z_ret = f_z_c1 * f_m_c2;
	if ((f_m_ret < 0 && f_z_ret > 0) || (f_m_ret > 0 && f_z_ret < 0))
	{
		sprintf(shang, "-%ld/%ld", abs_(f_z_ret), abs_(f_m_ret));
	}
	else
	{
		sprintf(shang, "%ld/%ld", abs_(f_z_ret), abs_(f_m_ret));
	}
	jian_fun(shang);

}


int main()
{
	char c1[1000];
	char c2[1000];
	char he[1000];
	char cha[1000];
	char ji[1000];
	char shang[1000];

	scanf("%s %s", c1, c2);
	sscanf(c1, "%ld/%ld", &f_z_c1, &f_m_c1);
	sscanf(c2, "%ld/%ld", &f_z_c2, &f_m_c2);
	long n1 = g_y_s(abs_(f_z_c1), f_m_c1);
	long n2 = g_y_s(abs_(f_z_c2), f_m_c2);
	f_z_c1 /= n1;
	f_m_c1 /= n1;
	f_z_c2 /= n2;
	f_m_c2 /= n2;

	he_c(he);
	cha_c(cha);
	ji_c(ji);
	shang_c(shang);

	jian_fun(c1);
	jian_fun(c2);

	printf("%s + %s = %s\n", c1, c2, he);
	printf("%s - %s = %s\n", c1, c2, cha);
	printf("%s * %s = %s\n", c1, c2, ji);
	printf("%s / %s = %s", c1, c2, shang);

	return 0;
}
