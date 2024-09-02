CFLAGS += -W -Wall -Wextra -Werror

bin = formatstring_add formatstring_assign_puzzle formatstring_parameter_pick

all: $(bin)

clean:
	 $(RM) $(bin)  *~
