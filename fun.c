#include"fun.h"

void create_array_stucts(Team* tm, int* n)
{
	tm =(Team*)calloc((*n), sizeof(Team));
}

void peremen_k(int* k,int* n)
{
while (scanf_s("%d", k) < 0 || (*k)>(*n) || getchar() != '\n')
	{
		printf("������\n");
		rewind(stdin);
	}
}

void input_structs(Team* tm, int* n)
{
	/*tm[(*n)] =  {"Saiwa" , 50,32,
				"Iceberg", 68,45 ,
				"StolinFC",14,13 } ;*/
	/*tm[0].name = "Saiwa";
	tm[0].sportsmens = 50;
	tm[0].catagories = 32;
	
		tm[1].name = "Iceberg"; 
		tm[1].sportsmens = 68; 
		tm[1].catagories =45; 
		
			tm[2].name = "StolinFC"; 
			tm[2].sportsmens =14 ; 
			tm[2].catagories =13;*/
	for (int i =0; i < (*n); i++)
	{
		char* buffer = malloc(0);
		printf("\n������� �������� �������-%d:\n", i+1);
		//scanf_s("%127s", &buffer);
		gets(buffer);
		tm[i].name = buffer;
		// (char*)calloc(strlen(buffer) + 1, sizeof(char));
		// str_copy(tm[i].name, buffer);
		printf("������� ���������� �����������:\n");
		while (scanf_s("%d", &tm[i].sportsmens) < 0 || getchar() != '\n')
		{
			printf("������\n");
			rewind(stdin);
		}
		printf("������� ���������� ���������, � ������� ��������� ����������:\n");
		while (scanf_s("%d", &tm[i].catagories) < 0 || tm[i].catagories > 56 || getchar() != '\n')
		{
			printf("������\n");
			rewind(stdin);
		}
	}
	system("CLS");
}

void input_info_array(Team* tm, int* n)
{
	//char* buffer = (char*)sizeof(1, 1);
	//char buffer[128];
	for (int i = (*n)-1; i < (*n); i++)
	{
		char* buffer = malloc(0);
		printf("\n������� �������� �������:\n");
		//scanf_s("%127s", &buffer);
		gets(buffer);
		tm[i].name = buffer;
		// (char*)calloc(strlen(buffer) + 1, sizeof(char));
		// str_copy(tm[i].name, buffer);
		printf("������� ���������� �����������:\n");
		while (scanf_s("%d", &tm[i].sportsmens) < 0 || getchar() != '\n')
		{
			printf("������\n");
			rewind(stdin);
		}
		printf("������� ���������� ���������, � ������� ��������� ����������:\n");
		while (scanf_s("%d", &tm[i].catagories) < 0 || tm[i].catagories>56 || getchar() != '\n')
		{
			printf("������\n");
			rewind(stdin);
		}
	}
}

void output_info(Team* tm, int* n)
{
	printf("\n");
	for (int i = 0; i < (*n); i++)
	{
		int g = i;
		printf("������� ����� %d\n", g + 1);
printf("%s\n", tm[i].name);
		printf("����������:%d\n", tm[i].sportsmens);
		printf("���������� ��������� �� 56:%d\n\n", tm[i].catagories);
	}
	printf("\n");
}


void choose_task(int* task)
{
	printf("\t\t\t\t��������������� ������������, ���������� ����������� �� ����������.\n\t� ����� ���������� ������������ ����� ����� 56 ���������.\n");
	printf("\t1.������� ���������� � ���� ��������\n\t2.������� ���������� �� ����� �������\n\t3.������������� ������� � ������ ������� � ������\n\t4.�������� ������� � �������\n\t5.������ ���� ������� �� �������\n\t");
	while (scanf_s("%d", task) != 1 || *task != 1 && *task != 2 && *task != 3 && *task != 4 &&*task!=5 || getchar() != '\n')
	{
		printf("��������� �����(������)\n\n");
		rewind(stdin);
	}
	system("CLS");
}

void reset(int* reset)
{
	printf("\n1.�������� �������\n0.�����\n");
	while (scanf_s("%d", reset) != 1 || *reset != 1 && *reset != 0 || getchar() != '\n')
	{
		printf("��������� �����(������)\n");
		rewind(stdin);
	}
	system("CLS");
}

void add_struct_array(Team* tm, int* n)
{
	(*n)++;
	tm =(Team*)realloc(tm, (*n), sizeof(Team));
	
}

void task_1(Team* tm, int* n)
{
	setlocale(LC_ALL, "rus");
	output_info(tm, n);
}

void task_2(Team* tm, int* n)
{
	setlocale(LC_ALL, "rus");
	printf("\n\t�������� ����� ������� ������� 1-%d\n\t", (*n));
	for (int i = 0; i < (*n); i++)
	{
		printf("\n%d-%s\n", i + 1, tm[i].name);
	}
	int i = 0;
	while (scanf_s("%d", &i) < 0 || i > (*n) || getchar() != '\n')
	{
		printf("������\n");
		rewind(stdin);
	}
	i--;
	printf("%s\n", tm[i].name);
	printf("����������:%d\n", tm[i].sportsmens);
	printf("���������� ��������� �� 56:%d\n\n", tm[i].catagories);
	
}

void task_3(Team* tm, int* n)
{
	setlocale(LC_ALL, "rus");
	printf("\t\t\t\t������ ����������\n1.�� ��������\n2.�� ���������� �����������\n3.�� ���������� ����������\n4.�� ���� �����\n");
	int ch1 = 0;
	int ch2 = 0;
		while (scanf_s("%d", &ch1) != 1 && ch1 != 2 && ch1!=3 &&  ch1!=4 || getchar() != '\n')
		{
			printf("������\n");
			rewind(stdin);
		}
		if (ch1 == 1)
		{
			printf("\n1.� ���������� �������\n2.� �������� �������\n");
			while (scanf_s("%d", &ch2) != 1 && ch2 != 2  || getchar() != '\n')
			{
				printf("������\n");
				rewind(stdin);
			}
			if (ch2 == 1)
			{
				sort_struct_name_1(tm, n);
			}
			else
			{
				sort_struct_name_2(tm, n);
			}
		}
		if (ch1 == 2)
		{
			printf("\n1.�� �����������\n2.�� ��������\n");
			while (scanf_s("%d", &ch2) != 1 && ch2 != 2 || getchar() != '\n')
			{
				printf("������\n");
				rewind(stdin);
			}
			if (ch2 == 1)
			{
				sort_struct_sportsmens_1(tm, n);
			}
			else
			{
				sort_struct_sportsmens_2(tm, n);
			}
		}
		if (ch1 == 3)
		{
			printf("\n1.�� �����������\n2.�� ��������\n");
			while (scanf_s("%d", &ch2) != 1 && ch2 != 2 || getchar() != '\n')
			{
				printf("������\n");
				rewind(stdin);
			}
			if (ch2 == 1)
			{
				sort_struct_categories_1(tm, n);
			}
			else
			{
				sort_struct_categories_2(tm, n);
			}
		}
		if (ch1 == 4)
		{
			printf("\n�������� ����:\n\t1.�� ��������\n\t2.�� ���������� �����������\n\t3.�� ���������� ���������\n");
			int ch4_1= 0;
			int ch4_2 = 0;
			while (scanf_s("%d", &ch4_1) != 1 && ch4_1 != 2 && ch4_1!=3 || getchar() != '\n')
			{
				printf("������\n");
				rewind(stdin);
			}
			while (scanf_s("%d", &ch4_2) != 1 && ch4_2 != 2 && ch4_2 != 3 && ch4_2!=ch4_1 || getchar() != '\n')
			{
				printf("������\n");
				rewind(stdin);
			}

		}
		printf("\n������� ��������� ����������?\n1.��\n2.���\n");
		int ch3 = 0;
		while (scanf_s("%d", &ch3) != 1 && ch3 != 2 || getchar() != '\n')
		{
			printf("������\n");
			rewind(stdin);
		}
		if (ch3 == 1)
		{
			output_info(tm, n);
		}
}

void task_4(Team* tm, int* n)
{
	setlocale(LC_ALL, "rus");
	printf("\n%d\n", (*n));
	//add_struct_array(tm, n);
	printf("%d", (*n));
	input_info_array(tm, n);
	printf("\n������� ����������� � �������\n\t1.��\n\t2.���\n");
	int ch = 0;
	while (scanf_s("%d", &ch) !=1 && ch!=2|| getchar() != '\n')
	{
		printf("������\n");
		rewind(stdin);
	}
	if (ch == 1)
	{
		printf("%s\n", tm[(*n) - 1].name);
		printf("����������:%d\n", tm[(*n) - 1].sportsmens);
		printf("���������� ��������� �� 56:%d\n\n", tm[(*n) - 1].catagories);
	}
}

void sort_struct_name_1(Team* tm, int* n)//� ���������� �������
{
	for (int i = 1; i < (*n); i++)
	{
		int k = i;
		while (k > 0 && tm[k - 1].name[0] > tm[k].name[0])
		{
			Team tmp = tm[k - 1];
			tm[k - 1] = tm[k];
			tm[k] = tmp;
			k -= 1;
		}
	}
}

void sort_struct_name_2(Team* tm, int* n)
{
	for (int i = 1; i <(*n); i++)
	{
		int k = i;
		while (k > 0 && tm[k - 1].name[0] < tm[k].name[0])
		{
			Team tmp = tm[k - 1];
			tm[k - 1] = tm[k];
			tm[k] = tmp;
			k -= 1;
		}
	}
}

void sort_struct_sportsmens_1(Team* tm, int* n)//�� �����������
{
	for (int i = 1; i < (*n); i++)
	{
		int k = i;
		while (k > 0 && tm[k - 1].sportsmens > tm[k].sportsmens)
		{
			Team tmp = tm[k - 1];
			tm[k - 1] = tm[k];
			tm[k] = tmp;
			k -= 1;
		}
	}
}

void sort_struct_sportsmens_2(Team* tm, int* n)//�� ��������
{
	for (int i = 1; i < (*n); i++)
	{
		int k = i;
		while (k > 0 && tm[k - 1].sportsmens < tm[k].sportsmens)
		{
			Team tmp = tm[k - 1];
			tm[k - 1] = tm[k];
			tm[k] = tmp;
			k -= 1;
		}
	}
}

void sort_struct_categories_1(Team* tm, int* n)
{
	for (int i = 1; i < (*n); i++)
	{
		int k = i;
		while (k > 0 && tm[k - 1].catagories > tm[k].catagories)
		{
			Team tmp = tm[k - 1];
			tm[k - 1] = tm[k];
			tm[k] = tmp;
			k -= 1;
		}
	}
}

void sort_struct_categories_2(Team* tm, int* n)
{
	for (int i = 1; i < (*n); i++)
	{
		int k = i;
		while (k > 0 && tm[k - 1].catagories < tm[k].catagories)
		{
			Team tmp = tm[k - 1];
			tm[k - 1] = tm[k];
			tm[k] = tmp;
			k -= 1;
		}
	}
}

void delete_array_struct(Team* tm, int* n, int* k)
{
	//printf("\n%d", (*k));
	int v = (*k) - 1;
	//
	printf("\n%d", v);
	for (int i = v ; i < (*n)-1 ; i++)
	{
		tm[i]= tm[i + 1];
	}
}

void task_5(Team* tm, int* n)
{
	setlocale(LC_ALL, "rus");
	printf("\t\t����� ������� ������ �� �������\n");
	for (int i = 0; i < (*n); i++)
	{
		printf("\n%d-%s\n",i+1, tm[i].name);
	}
	int k = 0;
	peremen_k(&k, n);
	//printf("%d", k);
	delete_array_struct(tm, n, &k);
	(*n)--;
	printf("\n\n\t������� ���������?\n");
	printf("1.��\n2.���\n");
	int ch = 0;
	while (scanf_s("%d", &ch) != 1 && ch != 2 || getchar() != '\n')
	{
		printf("������\n");
		rewind(stdin);
	}
	if (ch == 1)
	{
		output_info(tm, n);
	}
}

void peremen(int* n)
{
	while (scanf_s("%d", n) < 0 || (*n) > 50 || getchar() != '\n')
	{
		printf("������\n");
		rewind(stdin);
	}
}

void task_0( int* n)
{
	printf("\t\t\t\t��������������� ������������, ���������� ����������� �� ����������.\n\t� ����� ���������� ������������ ����� ����� 56 ���������.\n\t\t\t\t");
	printf("������� ���������� ������:\n\t\t\t\t");
	peremen(n);
	system("CLS");
}

