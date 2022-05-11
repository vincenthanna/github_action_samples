################################################################################
# Copyright (c) 2017-2020, NVIDIA CORPORATION.  All rights reserved.
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.
#################################################################################
#enable this flag to use optimized dsexample plugin
#it can also be exported from command line
CXX:= g++

SRCS:= $(wildcard *.cpp) $(wildcard **/*.cpp)
SRCS:= $(filter-out unittest.cpp, $(SRCS))
INCS:= $(wildcard *.h)

CFLAGS+= -Wall -std=c++14 \
	 -I /opt/local/include

LIBS := -L/opt/local/lib -lgtest

OBJS:= $(SRCS:.cpp=.o)


all: $(LIB) $(OBJS)
	$(CXX) unittest.cpp $(OBJS) $(CFLAGS) $(LIBS)

%.o: %.cpp $(INCS) Makefile
	@echo $(CFLAGS)
	$(CXX) -c -o $@ $(CFLAGS) $<

$(LIB): $(OBJS) Makefile
	@echo $(CFLAGS)
	$(CXX) -o $@ $(OBJS) $(LIBS)

clean:
	rm -rf a.out $(OBJS) $(LIB)



