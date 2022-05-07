# makefile
.PHONY : clean

main.out : main.c calc.c
	gcc -o main.out main.c calc.c
do : 
	./main.out
clean : 
	rm main.out