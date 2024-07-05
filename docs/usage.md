# Uso
## Funcionamento Básico
O software lê o estado do pino digital 13 para determinar se a soma deve ser executada.
Os pinos digitais 0 a 7 são lidos para obter os bits a serem somados.
O software realiza a soma bit a bit, atualizando os pinos de saída 8 a 12 com os resultados individuais da soma e o bit de carry.
Detalhes da Função loop()
## Leitura de Entradas:
Os estados dos pinos digitais 0 a 7 são lidos e armazenados nas variáveis nib1a a nib2d.
## Execução da Soma:
Se o pino digital 13 estiver em estado alto (soma == 1), a função somaBit() é chamada para cada par de bits e a função somaCarryBit() é utilizada para determinar o bit de carry.
Atualização das Saídas:
Os resultados da soma são atualizados nos pinos digitais 8 a 11.
O bit de carry é atualizado no pino digital 12.
## Exemplo de Operação
Pressione o botão conectado ao pino digital 13 para iniciar a operação de soma.
Observe os LEDs conectados aos pinos digitais 8 a 12 para ver os resultados da soma e o bit de carry.
