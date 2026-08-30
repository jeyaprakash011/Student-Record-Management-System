

student: stud_main.o stud_add.o stud_del.o stud_save.o stud_mod.o stud_show.o 
	gcc stud_main.o stud_add.o stud_del.o stud_save.o stud_mod.o stud_show.o -o student

stud_main.o: stud_main.c student.h
	gcc -c stud_main.c
stud_add.o: stud_add.c student.h
	gcc -c stud_add.c
stud_del.o: stud_del.c student.h
	gcc -c stud_del.c
stud_save.o: stud_save.c student.h
	gcc -c stud_save.c
stud_mod.o: stud_mod.c student.h
	gcc -c stud_mod.c
stud_show.o: stud_show.c student.h
	gcc -c stud_show.c
