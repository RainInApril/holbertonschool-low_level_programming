CC=gcc
CFLAGS=-Wall -pedantic -Werror -Wextra -std=gnu89 -g
RM=rm -rf
BETTY=betty

TARGET0=a
SRC0=	0-main.c \
	0-hash_table_create.c

TARGET1=b
SRC1=	1-main.c \
	1-djb2.c

TARGET2=c
SRC2=	2-main.c \
	1-djb2.c \
	2-key_index.c

TARGET3=d
SRC3=	3-main.c \
	0-hash_table_create.c \
	1-djb2.c \
	2-key_index.c \
	3-hash_table_set.c

TARGET4=e
SRC4=	4-main.c \
	0-hash_table_create.c \
	1-djb2.c \
	2-key_index.c \
	3-hash_table_set.c \
	4-hash_table_get.c

TARGET5=f
SRC5=	5-main.c \
	0-hash_table_create.c \
	1-djb2.c \
	2-key_index.c \
	3-hash_table_set.c \
	4-hash_table_get.c \
	5-hash_table_print.c

TARGET6=g
SRC6=	6-main.c \
	0-hash_table_create.c \
	1-djb2.c \
	2-key_index.c \
	3-hash_table_set.c \
	4-hash_table_get.c \
	5-hash_table_print.c \
	6-hash_table_delete.c

all: 0 1 2 3 4 5 6

clean:
	$(RM) *~ \
	$(TARGET0) $(TARGET1) $(TARGET2) $(TARGET3) \
	$(TARGET4) $(TARGET5) $(TARGET6)

0:
	$(BETTY) $(SRC0)
	$(CC) $(CFLAGS) $(SRC0) -o $(TARGET0)

1:
	$(BETTY) $(SRC1)
	$(CC) $(CFLAGS) $(SRC1) -o $(TARGET1)

2:
	$(BETTY) $(SRC2)
	$(CC) $(CFLAGS) $(SRC2) -o $(TARGET2)

3:
	$(BETTY) $(SRC3)
	$(CC) $(CFLAGS) $(SRC3) -o $(TARGET3)

4:
	$(BETTY) $(SRC4)
	$(CC) $(CFLAGS) $(SRC4) -o $(TARGET4)

5:
	$(BETTY) $(SRC5)
	$(CC) $(CFLAGS) $(SRC5) -o $(TARGET5)

6:
	$(BETTY) $(SRC6)
	$(CC) $(CFLAGS) $(SRC6) -o $(TARGET6)
