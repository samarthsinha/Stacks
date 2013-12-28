Array:
		gcc -c ./src/simpleArrayStack.c -o ./bin/libS -g
		gcc -o stack ./src/drvr.c ./bin/libS -g

DynArr: 
		gcc -c ./src/DynamicArrayStack.c -o ./bin/libDS -g
		gcc -o stack ./src/drvr.c ./bin/libDS -g

LL: 
		gcc -c ./src/LinkedListStack.c -o ./bin/libLS -g
		gcc -o stack ./src/drvr.c ./bin/libLS -g