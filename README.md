# Teste Siemens
Resolução das questões do teste para oportunidade de estagio na Siemens

Este repositorio tem finalidade de apresentar as soluções das questões pedidas para serem entregues por repositorio git fornecidas no teste de Conhecimento de Programação e Suporte da Siemens foram 10 questões que envolvem programação e teoria as soluções em código apresentadas foram resolvidas em __C++__.

---
### Questão 1 (Q3 - no teste):
Pede-se para escrever um programa que imprime cada número de 1 até 100 em uma nova linha onde cada multiplo de 3 deve apresentar "Foo" no lugar do numero e multiplos de 5 apresentar "Baa", alternativamente multiplos de 3 e 5 devem apresentar "FooBaa", por fim pedia que fosse feito no menor número de linhas possiveis e com código eficiente.
- [SOLUÇÃO: Questão 1](./Questao_01/questao1.cpp)

---
### Questão 2 (Q4 - no teste):
Foi pedido para criar um programa que implementa a função ConcatERemove(s,t,k). Ela deve retornar os resultados 'sim' ou 'não'.
A função tem os seguintes parâmetros:
- s: string inicial;
- t: string desejada;
- k: um número inteiro que representa o número de operações;

O programa deve possuir as seguintes limitações:
- 1 <= |s| <= 100;
- 1 <= |t| <= 100;
- 1 <= k <= 100;
- s e t consiste de letras minúsculas do alfabeto português, ascii[a-z];

Por fim o programa deve retornar "SIM" ou "NAO" sobre a possibilidade de  converter uma string s em t com k número de movimentos.
- [SOLUÇÃO: Questão 2](./Questao_02/questao2.cpp)

##### Para teste digitar:
    fornecido na questão:
    s: "blablablabla"
    t: "blablabcde" 
    O resultado esperado será "SIM"

__OBS:__ remover comentario __// testCases()__ $\implies$ linha (14) <br>
Caso desejar ver os test cases fornecidos sem precisar ficar digitando o input.

---
### Questão 3 (Q10 - no teste)
Dada uma serie de comandos pede-se que implemente a serie de comandos necessarios para os seguintes problemas:

##### Problema #1
Tenho uma  relation ABC.
Qual a sequência de comandos para determinar sua estrutura?

##### Problema #2
Tenho uma relation XYZ.                           
Sua estrutura está denotada abaixo:    

    XYZ =  { file (B1) of } record
    B1   : integer;     { block number   B1
    Name : Char8;       { B1 name
    end;  
Qual a sequência de comandos para ler o primeiro e o último registro desta relation?

##### Problema #3
Continuando ainda com a relation XYZ
Qual a sequência de comandos para ler o valor da chave 10 e os 2 registros seguintes?

---
### Solução da Questão:
Para o __Problema #1__ propõe-se realizar os seguintes comandos: 
1. __bq__ iniciar
2. __rel__ para especificar a estrutura ou relação a ser usada __ABC__
3. __di__ para apresentar a estutura ou relação nesse caso __ABC__
4. __x__ para sair

Para o __Problema #2__ propõe-se realizar os seguintes comandos: 
1. __bq__ iniciar
2. __rel__ para especificar a estrutura ou relação a ser usada __XYZ__
3. __re f__ para ler a primeira parte __record B1: integer__
4. __re l__ para ler a ultima parte __block number B1 Name: Char8__
5. __x__ para sair

Para o __Problema #3__ propõe-se realizar os seguintes comandos: 
1. __bq__ iniciar
2. __rel__ para especificar a estrutura ou relação a ser usada __XYZ__
3. __key <10>__ para especificar a chave (key) que sera lida 
4. __re k__ para ler os valores associados a chave (key)
5. __re n__ para ler o primeiro registro a frente 
6. __re n__ para ler o segundo registro a frente do anterior
7. __x__ para sair
