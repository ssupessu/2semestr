#pragma once
#include<stdio.h>
#include<locale.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Team {
	char* name;
	int sportsmens;
	int catagories;
} Team;
void create_array_stucts(Team* tm, int* n);
void input_structs(Team* tm, int* n);
void peremen_k(int* k, int* n);
//void str_copy(char* s1, char* s2);
void input_info_array(Team* tm, int* n);
void output_info(Team* tm, int* n);
void choose_task(int* task);
void reset(int* reset);
void add_struct_array(Team* tm, int* n);
void task_1(Team* tm, int* n);
void task_2(Team* tm, int* n);
void task_3(Team* tm, int* n);
void task_4(Team* tm, int* n);
void sort_struct_name_1(Team* tm, int* n);
void sort_struct_name_2(Team* tm, int* n);
void sort_struct_sportsmens_1(Team* tm, int* n);
void sort_struct_sportsmens_2(Team* tm, int* n);
void sort_struct_categories_1(Team* tm, int* n);
void sort_struct_categories_2(Team* tm, int* n);
void delete_array_struct(Team* tm, int* n, int* k);
void task_5(Team* tm, int* n);
void peremen(int* n);
void task_0(int* n);

