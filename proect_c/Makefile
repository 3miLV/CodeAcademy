CCOMP=gcc
CFLAGS=-g -Wall -I/usr/include/libxml2
LIBS=-lxml2
SOURCES= main.c func.c
OBJECTS=$(SOURCES:.c=.o)
TARGET=xmlparse

all: $(TARGET)

.PHONY: clean

$(TARGET): $(OBJECTS)
	$(CCOMP) $(OBJECTS) $(LIBS) -o $(TARGET)

.c:.o
	$(CCOMP) $(CFLAGS) $(INCLUDES) -c $< -o $@
clean:
	rm -fr $(TARGET) $(OBJECTS)
