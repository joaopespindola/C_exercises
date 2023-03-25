{-Nome: João Pedro Cruz Espíndola
Matéria: Programação Funcional
Professor: Carlos Lopes
Data: 12/03/2022
Matrícula: 12111BSI245
-}
{-Produção de Um Recibo Fiscal em um Supermercado-}
type Nome = String
type Preco = Int
type Codigo = Int
type BaseDeDados = [(CodBar,Nome,Preco)]
ListaDeProdutos :: BaseDeDados
ListaDeProdutos = [(1234, "Oleo DoBom, 1l" , 195), 
(4756, "Chocolate Cazzeiro, 250g", 180), 
(3216, "Arroz DoBom, 5Kg", 213), 
(5823, "Balas Pedregulho, 1Kg" , 379), 
(4719, "Queijo Mineirim, 1Kg" , 449), 
(6832, "Iogurte Maravilha, 1Kg" , 499), 
(1112, "Rapadura QuebraDente, 1Kg", 80), 
(1111, "Sal Donorte, 1Kg", 221), 
(1113, "Cafe DoBom, 1Kg", 285), 
(1115, "Biscoito Bibi, 1Kg", 80), 
(3814, "Sorvete QGelo, 1l", 695)]