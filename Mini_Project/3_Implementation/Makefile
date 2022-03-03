PROJ_NAME= food_order
SRC = main.c order.c serve.c 

ifdef os
	RM= del /q
	FixPath= $(subst /,\,$1)
	EXEC= exe
else
	ifeq ($(shell uname),Linux)
		RM= rm -rf
		FixPath= $1
		EXEC= out
	endif
endif

Build:
	gcc $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))
run:Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))