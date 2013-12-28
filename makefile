Array:
		gcc -c ./src/simpleArrayStack.c -o ./bin/libS -g
		gcc -o stack ./src/drvr.c ./bin/libS -g
test:
		gcc ./test.c