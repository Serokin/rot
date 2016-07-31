CC      = ccache gcc
PROF    = -O -g
C_FLAGS =  -Wall -I$(INCLUDE) $(PROF)
L_FLAGS =  $(PROF) -lcrypt

CORE	= rot
INCLUDE	= include
OBJECTS = objects

C_FILES := $(wildcard *.c)
O_FILES := $(patsubst %.c,$(OBJECTS)/%.o,$(C_FILES))

all:
	@echo "Usage:"
	@echo "make $(CORE) -- Compiles the executable"
	@echo "make clean -- removes all object files for a clean compile"

$(CORE): $(O_FILES)
	$(CC) -o $(CORE) $(O_FILES) $(L_FLAGS)
	@cp -f ./$(CORE) ../bin/$(CORE)

$(OBJECTS)/%.o: %.c
	$(CC) $(C_FLAGS) -c -o $@ $<
	
.c.o: merc.h
	$(CC) -c $(C_FLAGS) $<

clean: 
	@rm -fr objects/*.o
	@rm -fr $(CORE)
	@rm -fr ../bin/$(CORE)
	@echo "$(CORE) has been cleaned"
