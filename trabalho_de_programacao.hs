{-Nome: João Pedro Cruz Espíndola
Matéria: Programação Funcional
Professor: Carlos Lopes
Data: 12/03/2022
Matrícula: 12111BSI245
-}
{-VALIDANDO NÚMEROS DE CARTÃO DE CRÉDITO-}
toDigits :: Integer -> [Integer]
toDigits 0 = []
toDigits x = (toDigits (div x 10)) ++ [mod x 10]