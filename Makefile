CC      = ccache gcc
PROF    = -O -g -fno-builtin
C_FLAGS =  $(PROF) -I$(INCLUDE)  -DROT
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
	make rot
	
$(CORE): $(O_FILES)
	$(CC) -o $(CORE) $(O_FILES) $(L_FLAGS)
	@cp -f ./$(CORE) ../area/$(CORE)

$(OBJECTS)/%.o: %.c
	$(CC) $(C_FLAGS) -c -o $@ $<
	
clean: 
	@rm -fr objects/*.o
	@rm -fr $(CORE)
	@rm -fr ../area/$(CORE)
	@echo "$(CORE) has been cleaned"
