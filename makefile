# makefile for Hungarian class
# implementing Hungarian algorithm
#
# Copyright (c) 2014 Marshall Farrier
# license http://opensource.org/licenses/gpl-license.php GNU Public License
#
# Author Marshall Farrier
# Since 2014-05-23

CC = g++
CFLAGS = -Wall
CPPFLAGS = -std=c++11 -Iinclude
ODIR = obj
BDIR = bin
CPPFLAGSTEST = $(CPPFLAGS)

vpath %.cpp src tst

.PHONY: all
all: directories index_test

.PHONY: directories
directories:
	mkdir -p ./$(BDIR)
	mkdir -p ./$(ODIR)

index_test: $(ODIR)/index_test.o $(ODIR)/index.o
	$(CC) $(CFLAGS) $^ -o $(BDIR)/$@

$(ODIR)/index.o: index.cpp directories
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

$(ODIR)/index_test.o: index_test.cpp directories
	$(CC) $(CFLAGS) $(CPPFLAGSTEST) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(ODIR)/*.o
