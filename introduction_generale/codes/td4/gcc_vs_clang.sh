LEVEL=$1

# assembleur
clang array.c -DBIG_N -O$LEVEL -S -o array_clang_O$LEVEL.s
gcc array.c -DBIG_N -O$LEVEL -S -o array_gcc_O$LEVEL.s

# binaire
clang array.c -DBIG_N -O$LEVEL -o array_clang_O$LEVEL
gcc array.c -DBIG_N -O$LEVEL -o array_gcc_O$LEVEL
