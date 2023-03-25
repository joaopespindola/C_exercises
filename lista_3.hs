{-Nome: João Pedro Cruz Espíndola
-Matrícula: 12111BSI245
Data: 13/02/2021-}
{- 1- Especifique uma função que some os números pares entre zero e 1000 [0..1000] -} 
soma_par :: [Int] -> Int
soma_par [] = 0
soma_par (x:y)
  | par x = x + (soma_par y)
  | otherwise = soma_par y
par :: Int -> Bool
par x = (mod x 2) == 0
{- 2- Especifique uma função que obtenha a soma dos n primeiros termos da série: -}
soma_dos_n_termos :: Float -> Float
soma_dos_n_termos 1 = 1/2
soma_dos_n_termos x = 1 / (2*x) + soma_dos_n_termos (x - 1)
{- 3- Implemente o calculo recursivo da soma da série para n = 100 termos e teste para vários
valores de x. Compare os resultados obtidos com o valor dado pela função exp x do preludiopadrão. -}
fat :: Int -> Int 
fat 0 = 1
fat n = n * fat (n - 1) 

soma_taylor :: Float -> Int -> Float 
soma_taylor x 0 = 1
soma_taylor x n = (x^n/ fromIntegral (fat n)) + soma_taylor x (n-1)

{- 4- Escreva uma função recursiva soma_digitos que recebe um número inteiro n e retorna a
soma de seus dígitos. Exemplo: se n = 132, soma_digitos n retorna 6. -}
soma_digitos :: Int -> Int
soma_digitos n
 | n==0 = n
 | otherwise = soma_digitos(n`div`10) + n`mod`10