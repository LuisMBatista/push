# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 15:12:43 by lumiguel          #+#    #+#              #
#    Updated: 2024/01/24 15:12:44 by lumiguel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC := gcc

CFLAGS := -Wall -Wextra -Werror

SRCS := main.c utils.c

OBJS := $(SRCS:.c=.o)

# Target executable
TARGET := push_swap

# Default rule
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS)

# Clean rule with target executable
clean-all: clean
	rm -f $(TARGET)

# Phony targets
.PHONY: all clean clean-all
