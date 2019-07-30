include ../../env.mk
BIN=$(GBDK)/bin
OBJ=./obj

GAME=breakout-demo
SRC=$(shell find -type f -name "*.c" )

TARGETS := $(subst .c,.rel,$(subst src,obj, $(wildcard src/*.c)))


.Phony: build lib clean


build: lib  $(GAME).gb

lib: $(GBDK)/lib/gb.lib

clean:
	rm -rf $(OBJ)
	rm -f $(GAME).gb

$(GAME).gb: $(OBJ)/$(GAME).ihx
	$(BIN)/gbdk-n-make-rom.sh $(OBJ)/$(GAME).ihx $(GAME).gb

$(OBJ)/$(GAME).ihx: $(TARGETS)
	$(BIN)/gbdk-n-link.sh $(TARGETS) -o $(OBJ)/$(GAME).ihx

./obj/%.rel: src/%.c
	mkdir -p $(OBJ)
	$(BIN)/gbdk-n-compile.sh $< -o $@

$(GBDK)/lib/gb.lib:
	$(MAKE) -C $(GBDK)
