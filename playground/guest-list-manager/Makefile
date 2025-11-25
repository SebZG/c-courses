# CFLAGS = -Wno -Wall -Wextra

.PHONY: all clean

all: glm clean

glm: glm.o lib_util.o
	@echo "Buildimg..."
	@gcc ${CFLAGS} glm.o lib_util.o -o glm

glm.o: glm.c lib_util.h
	@gcc ${CFLAGS} -c glm.c

lib_util.o: lib_util.c lib_util.h
	@gcc ${CFLAGS} -c lib_util.c

clean:
	@echo "Cleaning..."
	@rm -f *.o