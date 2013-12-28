Array:
		gcc -c ./src/simpleArrayStack.c -o ./bin/libS -g
		gcc -o stack ./src/drvr.c ./bin/libS -g

DynArr: 
		gcc -c ./src/DynamicArrayStack.c -o ./bin/libDS -g
		gcc -o stack ./src/drvr.c ./bin/libDS -g