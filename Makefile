CFLAGS += -W -Wall -Wextra -Werror

all: formatstring_add formatstring_assign_puzzle

clean:
	$(RM) formatstring_add formatstring_assign_puzzle *~
