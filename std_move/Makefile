#Wu Qiang Makefile

objects = std_move.o

edit : $(objects)
	@g++ $< -o $@

$(objects) : %.o : %.cpp %.hpp


.PHONY : clean
clean:
	@-rm edit $(objects)
