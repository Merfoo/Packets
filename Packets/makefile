CC=g++
IDIR=.
CFLAGS:=-I$(IDIR)

ODIR=obj

_DEPS = Socket.h Address.h
DEPS := $(patsubst %, $(IDIR)/%, $(_DEPS))

_OBJ = main.o Socket.o Address.o
OBJ := $(patsubst %, $(ODIR)/%, $(_OBJ))

EXE=packets

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EXE): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ $(EXE)	

.PHONY: $(ODIR)

$(ODIR):
	mkdir $(ODIR)

print-%:
	@echo $($*)
