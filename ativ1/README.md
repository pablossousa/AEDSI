<h1>Atividade 1 de AEDS I</h1>

<h3>Contando Instruções</h3>

<p>Vamos programar um pouco. Após a assistir a aula acima, elabore um pequeno programa que utilize uma matriz N x N, com o valor de N fornecido como entrada do programa, para executar a seguinte operação:

1) Preenche a matriz N x N com números inteiros aleatórios de 0 a 99;

2) Considere a posição Linha 0 e Coluna 0 (0,0) como início;

3) Considere a posição (N, N) como posição final;

4) Percorra a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;

5) O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente. Há apenas uma exceção de percurso. Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima. 

6) Andando na matriz conforme as regras acima, qual o maior caminho do início até o final, sabendo-se que a soma das posições representa o tamanho do caminho.</p>

<img src="tela.png">

<h3>Resolução</h3>

<h3>Perguntas</h3>

1 - Há mais de uma maneira de resolver esse problema?
<p>Sim, há outras maneiras como por exemplo fazer uma lógica para checar os cantos da matriz e o centro</p>

2 - Há algoritmos em literatura que resolvam esse problema?
<p>Sim, quicksort é um exemplo.</p>

3 - Pode existir mais de um caminho cujo valor total é o maximo?
<p>Sim, pois pode haver uma ramificação quando houver dois números iguais nas casas em volta do número atual que um "for" está percorrendo e o algoritmo pode escolher qualquer lado. Logo o resultado será diferente.</p>
