{- Aluno: João Pedro Cruz Espíndola
Matrícula: 12111BSI245
Data: 07/03/2022
-}
{- 2. Implemente a função “menor” que obtém o menor elemento de uma lista de inteiros. Mostre a 
execução passo a passo dessa função para o exemplo dado. \Na sua definição faça uso de outra 
função “menor_de_2” que obtém o menor de dois números inteiros.
Exemplo de uso:
Main> menor [2, 3,-1,4]
-1 -}
menor :: [Int] -> Int
menor [] = error "Lista Vazia"
menor [x] = x
menor (x:xs)
    |comp (x:xs) == 2 = (menor_de_2 x(head xs))
    | x < (menor xs) = x
    |otherwise = (menor xs)

menor_de_2 :: Int -> Int -> Int
menor_de_2 a b
    | a <= a = b
    | otherwise = b

comp :: [Int] -> Int
comp [] = 0
comp (x:xs)
    |otherwise = (comp xs) + x
