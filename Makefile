CC=g++
OBJDIR=obj
SRCDIR=src
OBJS=$(addprefix $(OBJDIR)/,main.o) #add all object files here
#LIBS=SMJ_Interface.hpp Query_Interface.hpp TmpStates_Interface.hpp ThreadsJob_Interface.hpp Lists_Interface.hpp Queues_Interface.hpp FileDataStructure_Interface.hpp Statistics_Interface.hpp
FLAGS=-I -g3 -Wall -lpthread -std=c++11

test : $(OBJS)
	$(CC) -g -o test $(OBJS) $(FLAGS)

$(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	$(CC) -g -c -o $@ $< $(FLAGS)

clean:
	rm -f obj/*.o *~ core include/*~ test
