#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "head6.h"

struct ZACH* write1(void)
{
	static struct ZACH Z1 =
	{
		"Калининский",
		"Даниил",
		"Сергеевич",
		"БИН1703",
		{
			{ 2017,
			  1,
				{
					{ "Введение в профессию", "Комоева", "25.12.17", { notDiff, {.acc = 1} }  },
					{ "СЭПИТ", "Кораблёва", "25.12.17", { notDiff, {.acc = 1} }  },
					{ "Русский язык и культура речи", "Безносова", "25.12.17", { notDiff, {.acc = 1} }  },
					{ "Информатика", "Волков", "27.12.17", { notDiff, {.acc = 1} }  },
					{ "Английский язык", "Громова", "28.12.17", { notDiff, {.acc = 1} }  }
				},
				{
					{ "Высшая математика", "Райцин", "16.01.18", { Diff, {.mark = Good } }  },
					{ "Философия", "Короблёва", "23.01.18", { Diff, {.mark = Excel} }  },
					{ "АГиЛА", "Солиев", "31.01.18", { Diff, {.mark = Good} }  }
				}
			},
			{ 2018,
			  2,
				{
					{ "НПБДвИ", "Антипов", "30.05.18", { notDiff, {.acc = 1} }  },
					{ "Физическая Культура", "Горячева", "30.05.18", { notDiff, {.acc = 1} }  },
					{ "ТОЭ", "Хатунцева", "30.05.18", { notDiff, {.acc = 1} }  },
					{ "Физика", "Жилинский", "05.06.18", { notDiff, {.acc = 1} }  },
					{ "Компьютерная Графика", "Евстратов", "06.06.18", { notDiff, {.acc = 1} }  }
				},
				{
					{ "История", "Кузнецова", "15.06.18", { Diff, {.mark = Excel} }  },
					{ "Английский язык", "Машенская", "19.06.18", { Diff, {.mark = Excel} }  },
					{ "Информатика", "Загвоздкина", "25.06.18", { Diff, {.mark = Excel} }  },
					{ "Высшая Математика", "Райцин", "29.06.18", { Diff, {.mark = Excel} }  }
				}
			},
			{ 2018,
			  3,
				{
					{ "ТФКП", "Гудкова", "25.12.18", { notDiff, {.acc = 1} }  },
					{ "ФОЭ", "Власов", "25.12.18", { notDiff, {.acc = 1} }  },
					{ "ВМППП", "Семёнова", "25.12.18", { notDiff, {.acc = 1} }  },
					{ "ИРСС", "Колонена", "26.12.18", { notDiff, {.acc = 1} }  },
					{ "ТЭЦ", "Фриск", "27.12.18", { notDiff, {.acc = 1} }  },
					{ "ТЭЦ КР", "Фриск", "27.12.18", { Diff,{.mark = Ok} }  }
				},
				{
					{ "Дискретная Математика", "Дубнов", "16.01.19", { Diff, {.mark = Excel} }  },
					{ "Физика", "Жилинский", "19.01.19", { Diff, {.mark = Good} }  },
					{ "ТВиМС", "Дёмин", "25.01.19", { Diff, {.mark = Good} }  },
					{ "ВМ", "Салиев", "31.01.19", { Diff, {.mark = Excel} }  }
				}
			},
			{ 2019,
			  4,
				{
					{ "АСП", "Дёмин", "04.06.19", { notDiff, {.acc = 1} }  },
					{ "Экология", "Шалипов", "04.06.19", { notDiff, {.acc = 1} }  },
					{ "СФиФТТ", "Жилинский", "04.06.19", { notDiff, {.acc = 1} }  },
					{ "Математическое Описание Теории Электромагнитных Полей", "Ястребцова", "05.06.19", { notDiff, {.acc = 1} }  },
					{ "Электромагнитные Поля и Волны", "Ястребцова", "05.06.19", { notDiff, {.acc = 1} }  },
					{ "Физическая Культура", "Горячева", "07.06.19", { notDiff, {.acc = 1} }  },
					{ "Вычислительные Модели КР", "Кравченко", "07.06.19", { Diff, {.mark = Excel} }  },
					{ "ТЭЦ КР", "Смирнов", "10.06.19", { Diff, {.mark = Excel} }  },
					{ "Информационная безопасность", "Барков", "05.04.19", { notDiff, {.acc = 1} }  }
				},
				{
					{ "Электроника", "Власов", "...", { Diff, {.mark = Excel} }  },
					{ "Теория Электрических Цепей", "Фриск", "...", { Diff, {.mark = Excel} }  },
					{ "Общая Теория Связи", "...", "...", { Diff, {.mark = Excel} }  },
					{ "Схемотехника Телекоммуникационных Устройств", "...", "...", { Diff, {.mark = Excel} }  }
				}
			},
		}
	};
	return &Z1;
}
struct ZACH* write2(void)
{
	static struct ZACH Z2;
	strcpy(Z2.firstName, "Даниил");
	strcpy(Z2.lastName, "Калининский");
	strcpy(Z2.dadName, "Сергеевич");
	strcpy(Z2.number, "БИН1703");

	Z2.semI[0].sem = 1;
	Z2.semI[0].year = 2017;

	strcpy(Z2.semI[0].theor[0].name, "Введение в профессию");
	strcpy(Z2.semI[0].theor[0].teach, "Комоева");
	strcpy(Z2.semI[0].theor[0].time, "25.12.17");
	Z2.semI[0].theor[0].str.type = notDiff;
	Z2.semI[0].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[1].name, "СЭПИТ");
	strcpy(Z2.semI[0].theor[1].teach, "Корабёва");
	strcpy(Z2.semI[0].theor[1].time, "25.12.17");
	Z2.semI[0].theor[1].str.type = notDiff;
	Z2.semI[0].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[2].name, "Русский язык и культура речи");
	strcpy(Z2.semI[0].theor[2].teach, "Безносова");
	strcpy(Z2.semI[0].theor[2].time, "25.12.17");
	Z2.semI[0].theor[2].str.type = notDiff;
	Z2.semI[0].theor[2].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[4].name, "Информатика");
	strcpy(Z2.semI[0].theor[4].teach, "Волков");
	strcpy(Z2.semI[0].theor[4].time, "27.12.17");
	Z2.semI[0].theor[4].str.type = notDiff;
	Z2.semI[0].theor[4].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[3].name, "Английский язык");
	strcpy(Z2.semI[0].theor[3].teach, "Громова");
	strcpy(Z2.semI[0].theor[3].time, "28.12.17");
	Z2.semI[0].theor[3].str.type = notDiff;
	Z2.semI[0].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[0].prack[0].name, "Высшая математика");
	strcpy(Z2.semI[0].prack[0].teach, "Райцин");
	strcpy(Z2.semI[0].prack[0].time, "16.01.18");
	Z2.semI[0].prack[0].str.type = Diff;
	Z2.semI[0].prack[0].str.value.mark = Good;

	strcpy(Z2.semI[0].prack[2].name, "Философия");
	strcpy(Z2.semI[0].prack[2].teach, "Кораблёва");
	strcpy(Z2.semI[0].prack[2].time, "23.01.18");
	Z2.semI[0].prack[2].str.type = Diff;
	Z2.semI[0].prack[2].str.value.mark = Excel;

	strcpy(Z2.semI[0].prack[1].name, "АГиЛА");
	strcpy(Z2.semI[0].prack[1].teach, "Солиев");
	strcpy(Z2.semI[0].prack[1].time, "31.01.18");
	Z2.semI[0].prack[1].str.type = Diff;
	Z2.semI[0].prack[1].str.value.mark = Good;

	Z2.semI[1].sem = 2;
	Z2.semI[1].year = 2018;

	strcpy(Z2.semI[1].theor[0].name, "НПБДвИ");
	strcpy(Z2.semI[1].theor[0].teach, "Антипов");
	strcpy(Z2.semI[1].theor[0].time, "30.05.18");
	Z2.semI[1].theor[0].str.type = notDiff;
	Z2.semI[1].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[1].name, "Физическая культура");
	strcpy(Z2.semI[1].theor[1].teach, "Горячева");
	strcpy(Z2.semI[1].theor[1].time, "30.05.18");
	Z2.semI[1].theor[1].str.type = notDiff;
	Z2.semI[1].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[2].name, "ТОЭ");
	strcpy(Z2.semI[1].theor[2].teach, "Хатунцева");
	strcpy(Z2.semI[1].theor[2].time, "30.05.18");
	Z2.semI[1].theor[2].str.type = notDiff;
	Z2.semI[1].theor[2].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[3].name, "Физика");
	strcpy(Z2.semI[1].theor[3].teach, "Жилинский");
	strcpy(Z2.semI[1].theor[3].time, "05.06.18");
	Z2.semI[1].theor[3].str.type = notDiff;
	Z2.semI[1].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[4].name, "Компьютерная Графика");
	strcpy(Z2.semI[1].theor[4].teach, "Евстратов");
	strcpy(Z2.semI[1].theor[4].time, "06.06.18");
	Z2.semI[1].theor[4].str.type = notDiff;
	Z2.semI[1].theor[4].str.value.acc = 1;


	strcpy(Z2.semI[1].prack[0].name, "История");
	strcpy(Z2.semI[1].prack[0].teach, "Кузнецова");
	strcpy(Z2.semI[1].prack[0].time, "15.06.18");
	Z2.semI[1].prack[0].str.type = Diff;
	Z2.semI[1].prack[0].str.value.mark = Excel;

	strcpy(Z2.semI[1].prack[1].name, "Английский язык");
	strcpy(Z2.semI[1].prack[1].teach, "Машенская");
	strcpy(Z2.semI[1].prack[1].time, "19.06.18");
	Z2.semI[1].prack[1].str.type = Diff;
	Z2.semI[1].prack[1].str.value.mark = Excel;

	strcpy(Z2.semI[1].prack[2].name, "Информатика");
	strcpy(Z2.semI[1].prack[2].teach, "Загвоздкина");
	strcpy(Z2.semI[1].prack[2].time, "25.06.18");
	Z2.semI[1].prack[2].str.type = Diff;
	Z2.semI[1].prack[2].str.value.mark = Excel;

	strcpy(Z2.semI[1].prack[3].name, "Высшая Математика");
	strcpy(Z2.semI[1].prack[3].teach, "Райцин");
	strcpy(Z2.semI[1].prack[3].time, "29.06.18");
	Z2.semI[1].prack[3].str.type = Diff;
	Z2.semI[1].prack[3].str.value.mark = Good;

	Z2.semI[2].sem = 3;
	Z2.semI[2].year = 2018;

	strcpy(Z2.semI[2].theor[0].name, "ТФКП");
	strcpy(Z2.semI[2].theor[0].teach, "Гудкова");
	strcpy(Z2.semI[2].theor[0].time, "25.12.18");
	Z2.semI[2].theor[0].str.type = notDiff;
	Z2.semI[2].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[1].name, "ФОЭ");
	strcpy(Z2.semI[2].theor[1].teach, "Власов");
	strcpy(Z2.semI[2].theor[1].time, "25.12.18");
	Z2.semI[2].theor[1].str.type = notDiff;
	Z2.semI[2].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[2].name, "ВМППП");
	strcpy(Z2.semI[2].theor[2].teach, "Семёнова");
	strcpy(Z2.semI[2].theor[2].time, "25.12.18");
	Z2.semI[2].theor[2].str.type = notDiff;
	Z2.semI[2].theor[2].str.value.mark = 1;

	strcpy(Z2.semI[2].theor[3].name, "ИРСС");
	strcpy(Z2.semI[2].theor[3].teach, "Колонена");
	strcpy(Z2.semI[2].theor[3].time, "26.12.18");
	Z2.semI[2].theor[3].str.type = notDiff;
	Z2.semI[2].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[4].name, "ТЭЦ");
	strcpy(Z2.semI[2].theor[4].teach, "Фриск");
	strcpy(Z2.semI[2].theor[4].time, "27.12.18");
	Z2.semI[2].theor[4].str.type = notDiff;
	Z2.semI[2].theor[4].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[5].name, "ТЭЦ КР");
	strcpy(Z2.semI[2].theor[5].teach, "Фриск");
	strcpy(Z2.semI[2].theor[5].time, "27.12.18");
	Z2.semI[2].theor[5].str.type = Diff;
	Z2.semI[2].theor[5].str.value.acc = Ok;


	strcpy(Z2.semI[2].prack[0].name, "Дискретная Математика");
	strcpy(Z2.semI[2].prack[0].teach, "Дубнов");
	strcpy(Z2.semI[2].prack[0].time, "16.01.19");
	Z2.semI[2].prack[0].str.type = Diff;
	Z2.semI[2].prack[0].str.value.mark = Excel;

	strcpy(Z2.semI[2].prack[1].name, "Физика");
	strcpy(Z2.semI[2].prack[1].teach, "Жилинский");
	strcpy(Z2.semI[2].prack[1].time, "19.01.19");
	Z2.semI[2].prack[1].str.type = Diff;
	Z2.semI[2].prack[1].str.value.mark = Good;

	strcpy(Z2.semI[2].prack[2].name, "ТВиМС");
	strcpy(Z2.semI[2].prack[2].teach, "Дёмин");
	strcpy(Z2.semI[2].prack[2].time, "25.01.19");
	Z2.semI[2].prack[2].str.type = Diff;
	Z2.semI[2].prack[2].str.value.mark = Good;

	strcpy(Z2.semI[2].prack[3].name, "ВМ");
	strcpy(Z2.semI[2].prack[3].teach, "Салиев");
	strcpy(Z2.semI[2].prack[3].time, "31.01.19");
	Z2.semI[2].prack[3].str.type = Diff;
	Z2.semI[2].prack[3].str.value.mark = Excel;

	Z2.semI[3].sem = 4;
	Z2.semI[3].year = 2019;

	strcpy(Z2.semI[3].theor[0].name, "АСП");
	strcpy(Z2.semI[3].theor[0].teach, "Дёмин");
	strcpy(Z2.semI[3].theor[0].time, "04.06.19");
	Z2.semI[3].theor[0].str.type = notDiff;
	Z2.semI[3].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[1].name, "Экология");
	strcpy(Z2.semI[3].theor[1].teach, "Шалипов");
	strcpy(Z2.semI[3].theor[1].time, "04.06.19");
	Z2.semI[3].theor[1].str.type = notDiff;
	Z2.semI[3].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[2].name, "СФиФТ");
	strcpy(Z2.semI[3].theor[2].teach, "Жилинский");
	strcpy(Z2.semI[3].theor[2].time, "04.06.19");
	Z2.semI[3].theor[2].str.type = notDiff;
	Z2.semI[3].theor[2].str.value.mark = 1;

	strcpy(Z2.semI[3].theor[3].name, "Математическое Описание Теории Электромагнитных Полей");
	strcpy(Z2.semI[3].theor[3].teach, "Ястребцова");
	strcpy(Z2.semI[3].theor[3].time, "05.06.19");
	Z2.semI[3].theor[3].str.type = notDiff;
	Z2.semI[3].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[4].name, "Электромагнитные Поля и Волны");
	strcpy(Z2.semI[3].theor[4].teach, "Ястребцова");
	strcpy(Z2.semI[3].theor[4].time, "05.06.19");
	Z2.semI[3].theor[4].str.type = notDiff;
	Z2.semI[3].theor[4].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[5].name, "Физическая Культура");
	strcpy(Z2.semI[3].theor[5].teach, "Горячева");
	strcpy(Z2.semI[3].theor[5].time, "07.06.19");
	Z2.semI[3].theor[5].str.type = notDiff;
	Z2.semI[3].theor[5].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[5].name, "Вычислительные Модели КР");
	strcpy(Z2.semI[3].theor[5].teach, "Кравченко");
	strcpy(Z2.semI[3].theor[5].time, "07.06.19");
	Z2.semI[3].theor[5].str.type = Diff;
	Z2.semI[3].theor[5].str.value.acc = Excel;

	strcpy(Z2.semI[3].theor[5].name, "ТЭЦ КР");
	strcpy(Z2.semI[3].theor[5].teach, "Фриск");
	strcpy(Z2.semI[3].theor[5].time, "10.06.19");
	Z2.semI[3].theor[5].str.type = Diff;
	Z2.semI[3].theor[5].str.value.acc = Excel;

	strcpy(Z2.semI[3].theor[5].name, "Информационная безопасность");
	strcpy(Z2.semI[3].theor[5].teach, "Фриск");
	strcpy(Z2.semI[3].theor[5].time, "05.06.19");
	Z2.semI[3].theor[5].str.type = notDiff;
	Z2.semI[3].theor[5].str.value.acc = 1;

	strcpy(Z2.semI[3].prack[0].name, "Электроника");
	strcpy(Z2.semI[3].prack[0].teach, "Власов");
	strcpy(Z2.semI[3].prack[0].time, "...");
	Z2.semI[3].prack[0].str.type = Diff;
	Z2.semI[3].prack[0].str.value.mark = Excel;

	strcpy(Z2.semI[3].prack[1].name, "Теория Электрических Цепей");
	strcpy(Z2.semI[3].prack[1].teach, "Фриск");
	strcpy(Z2.semI[3].prack[1].time, "...");
	Z2.semI[3].prack[1].str.type = Diff;
	Z2.semI[3].prack[1].str.value.mark = Excel;

	strcpy(Z2.semI[3].prack[2].name, "Общая Теория Связи");
	strcpy(Z2.semI[3].prack[2].teach, "...");
	strcpy(Z2.semI[3].prack[2].time, "...");
	Z2.semI[3].prack[2].str.type = Diff;
	Z2.semI[3].prack[2].str.value.mark = Excel;

	strcpy(Z2.semI[3].prack[3].name, "Схемотехника Телекоммуникационных Устройств");
	strcpy(Z2.semI[3].prack[3].teach, "...");
	strcpy(Z2.semI[3].prack[3].time, "...");
	Z2.semI[3].prack[3].str.type = Diff;
	Z2.semI[3].prack[3].str.value.mark = Excel;

	return &Z2;
}

void strocher(struct ZACH* Z, int n)
{
	if (*Z->semI[n].prack[0].name)
	{
		printf("Результаты промежуточной аттестации (экзамены):\n\n%-65s %-10s %-10s %-60s\n\n", "Наименование дисциплины", "Оценка", "Дата", "Фамилия преподавателя");
		for (int i = 0; *Z->semI[n].prack[i].name; i++)
		{
			printf("%-65s %-10d %-10s %-60s\n", Z->semI[n].prack[i].name, Z->semI[n].prack[i].str.value.mark, Z->semI[n].prack[i].time, Z->semI[n].prack[i].teach);
		}
	}
	else
	{
		printf("Данные об экзаменах отсутствуют\n");
	}
	printf("\n");
	if (*Z->semI[n].theor[0].name)
	{
		printf("Результаты промежуточной аттестации (зачеты):\n\n%-65s %-10s %-10s %-60s\n\n", "Наименование дисциплины", "Оценка", "Дата", "Фамилия преподавателя");
		for (int i = 0; *Z->semI[n].theor[i].name; i++)
		{
			if (Z->semI[n].theor[i].str.type == notDiff)
			{
				printf("%-65s %-10s %-10s %-60s\n", Z->semI[n].theor[i].name, Z->semI[n].theor[i].str.value.acc ? "Зачтено" : "Не зачтено", Z->semI[n].theor[i].time, Z->semI[n].theor[i].teach);
			}
			else
			{
				printf("%-65s %-10d %-10s %-60s\n", Z->semI[n].theor[i].name, Z->semI[n].theor[i].str.value.mark, Z->semI[n].theor[i].time, Z->semI[n].theor[i].teach);
			}
		}
	}
	else
	{
		printf("Данные о зачетах отсутствуют\n");
	}
}
void menu(struct ZACH* Z)
{
	do
	{
		printf("Номер зачетной книжки: %s\nФИО студента: %s %s %s\n", Z->number, Z->lastName, Z->firstName, Z->dadName);
		printf("2. Выберите вариант:\n1 - семестр №1\n2 - семестр №2\n3 - семестр №3\n4 - семестр №4\n5 - все семестры\n6 - в меню\n");
		switch (_getch())
		{
		case'1':
			system("cls");
			printf("Семестр 1:\n\n");
			strocher(Z, 0);
			break;
		case'2':
			system("cls");
			printf("Семестр 2:\n\n");
			strocher(Z, 1);
			break;
		case'3':
			system("cls");
			printf("Семестр 3:\n\n");
			strocher(Z, 2);
			break;
		case'4':
			system("cls");
			printf("Семестр 4:\n\n");
			strocher(Z, 3);
			break;
		case'5':
			system("cls");
			printf("Семестр 1:\n\n");
			strocher(Z, 0);
			printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			printf("Семестр 2:\n\n");
			strocher(Z, 1);
			printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			printf("Семестр 3:\n\n");
			strocher(Z, 2);
			printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			printf("Семестр 4:\n\n");
			strocher(Z, 3);
			printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			break;
		case'6':
			return;
		}
		system("pause");
		system("cls");
	} while (1);
}
void main(void)
{
	setlocale(LC_ALL, "Rus");
	struct ZACH* Z1 = write1();
	struct ZACH* Z2 = write2();
	do
	{
		printf("1. Выберите вариант:\n1 - вариант 1\n2 - вариант 2\n3 - выход\n");
		switch (_getch())
		{
		case '1':
			system("cls");
			printf("Выбран первый вариант.\n");
			menu(Z1);
			break;
		case '2':
			system("cls");
			printf("Выбран второй вариант.\n");
			menu(Z2);
			break;
		case '3':
			exit(0);
		}
		system("pause");
		system("cls");
	} while (1);
}