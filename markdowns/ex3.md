# Exercice 4

Ecrire la fonction qui génère et conserve en mémoire les `n` premier nombre de Fibonacci, la fonction reverra un pointeur sur la zone mémoire contenant l'information `int * gen_fibo(int n)`.

## Rappel
La suite de Fibonacci est une suite d'entiers dans laquelle chaque terme est la somme des deux termes qui le précèdent. Elle commence par les termes 0 et 1 et ses premiers termes sont : 
```math
0, 1, 1, 2, 3, 5, 8, 13, 21,...
```

On peut écrire $`fib_{n} = fib_{n-1} + fib_{n-2}`$.