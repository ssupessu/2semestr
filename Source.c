#include"fun.h"

int main()
{
	setlocale(LC_ALL, "rus");
	int num = 0;
	task_0(&num);
	Team* teams=calloc(num,sizeof(Team));
	input_structs(teams, &num);
	int restart = 1, task;
	while (restart)
	{
		choose_task(&task);
		if (task == 1)
		{
			 task_1(teams,&num);
		}
		if (task == 2)
		{
			task_2(teams, &num);
		}
		
		if (task == 3)
		{
			task_3(teams,&num);
		}

		if (task == 4)
		{
			num++;
			task_4(teams,&num);
		}

		if (task == 5)
		{
			task_5(teams, &num);
		}

		reset(&restart);
	}
	//free(teams);
	printf("\n\t\t\t\t\t\tСпасибо за внимание, поставте 8\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	return 0;

}