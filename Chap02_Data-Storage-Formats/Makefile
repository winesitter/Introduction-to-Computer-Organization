EXECS=intAndFloat echoDecHex oneChar echoChar1 echoLine
CC=gcc

all: ${EXECS}

intAndFloat:
	${CC} -g -Wall -o intAndFloat intAndFloat.c

echoDecHex:
	${CC} -g -Wall -o echoDecHex echoDecHex.c

oneChar:
	${CC} -g -Wall -o oneChar oneChar.c

echoChar1:
	${CC} -g -Wall -o echoChar1 echoChar1.c

echoLine:
	${CC} -g -Wall -o echoLine echoLine.c

clean_echoLine:
	rm echoLine

clean:
	rm ${EXECS}
