schedule: pool.o job.o machine.o schedule.o
	clang++ -o schedule pool.o job.o machine.o schedule.o

pool.o:
	clang++ -c pool.cpp

job.o:
	clang++ -c job.cpp

machine.o:
	clang++ -c machine.cpp

schedule.o:
	clang++ -c schedule.cpp


clean:
	rm pool.o job.o machine.o schedule.o schedule
