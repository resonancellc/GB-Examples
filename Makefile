include env.mk

.PHONY: lib
lib: $(GBDK)/lib/gb.lib

$(GBDK)/lib/gb.lib:
	$(MAKE) -C $(GBDK)


.PHONY: clean
clean:
	$(MAKE) -C $(GBDK) clean
