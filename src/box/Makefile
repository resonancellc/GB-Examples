include ../../env.mk

BIN=$(GBDK)/bin
OBJ=./obj

GAME=box
SRC=box.c sprites.c

.Phony: build clean lib

build: $(GAME).gb

lib: $(GBDK)/lib/gb.lib

clean:
	rm -rf $(OBJ)
	rm -f $(GAME).gb

$(GAME).gb: lib
	mkdir -p $(OBJ)
	$(BIN)/gbdk-n-compile.sh $(SRC) -o $(OBJ)/$(GAME).rel
	$(BIN)/gbdk-n-link.sh $(OBJ)/$(GAME).rel -o $(OBJ)/$(GAME).ihx
	$(BIN)/gbdk-n-make-rom.sh $(OBJ)/$(GAME).ihx $(GAME).gb

$(GBDK)/lib/gb.lib:
	$(MAKE) -C $(GBDK)

