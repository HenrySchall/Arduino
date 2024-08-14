## Introdução
> Arduino é uma plataforma de prototipagem eletrônica open-source, ou seja, uma plataforma de criação de circuitos eletrônicos ou sistemas antes da produção em larga escala ou final. Sua estrtutura consiste em uma placa de hardware e um ambiente de desenvolvimento programável (IDE). A placa Arduino possui um microcontrolador (pequeno computador), que através de entradas e saídas digitais e analógicas é capaz de controlar diversos dispositivos eletrônicos, como sensores, motores e LEDs. Já a IDE do Arduino permite programar a placa utlizando-se da linguagem C/C++, que executa diversos comandos, estabelecendo instruções para o dispositivo entender e executar de acordo com os parâmetros desejados.

### Componentes Básicos

1) LEDs (Light Emitting Diodes) -> Pequenas lâmpadas que acendem quando corrente elétrica passa por elas, indicando o estado de um sistema.
   - Cátodo = -
   - Ânodo = +
   - Geralmente abastecido com uma alimentação de 1,8 ou 3 volts

2) Resistores -> É o componente que limita a quantidade de corrente elétrica, utilizado para proteger outros componentes de receberem muita corrente e se queimarem.
   - Não tem polaridade
   - Utiliza-se apenas no terminal positivo
   - Cada resistor possui um padrão, os mais fáceis de achar são de 480ohm ou 330ohm, utilizar um frequência menor que a ideal diminui a vida útil do componente e maior que a ideal diminui a luminosidade (caso de LED)

4) Botões (Push Buttons) -> Dispositivos de entrada que permitem ao usuário interagir com o Arduino, enviando sinais de alta ou baixa (on/off).
   - Terminais verticais são identicos
   - Terminais Paralelos são paralelos 

5) Sensores ->  Dispositivos que detectam mudanças no ambiente e enviam essa informação ao Arduino. Tipos:
  - Sensor de temperatura: Detecta mudanças de temperatura, 
  - Sensor de luz (LDR): Detecta a quantidade de luz ambiente,
  - Sensor de ultrassom: Mede distâncias.

5) Motores -> Dispositivos que convertem energia elétrica em movimento. Tipos:
  - Servo motor (Controla posição e ângulo),
  - Motor DC (Gira em alta velocidade e pode ser controlado com um transistor),
  - Motor de passo (Gira em passos discretos, ideal para controle preciso de posição).

6) Displays -> Dispositivos de saída que mostram informações ao usuário. Tipos:
  - Display de 7 segmentos, mostra números e alguns caracteres)
  - LCD (Liquid Crystal Display), mostrar texto e gráficos.

7) Potenciômetros -> Resistor ajustável, que permitem variar a resistência manualmente. Tipos:
  - Logaritmico
  - Linear

8) Buzzer -> Um pequeno alto-falante que emite sons quando alimentado com uma corrente elétrica.

9) Fios Jumper (Jumper Wires) -> Fios usados para conectar componentes.

10) Protoboard -> Uma placa usada para montar circuitos temporários sem a necessidade de solda.
    - Os slots das extremidades (+ e -) são interligados verticalmente
    - Os slots centrais (a,b,c,d,...) são interligados horizontalmente

12) Transistores -> Componentes que podem atuar como interruptores ou amplificadores de correntes.

13) Capacitores -> Armazenadores e liberadores de energia elétrica, usados para estabilizar a alimentação e filtrar ruídos.

![Imagemf](https://github.com/user-attachments/assets/ba4cafe4-18e3-4ba7-be9a-47c13b7ac4e3)

### Programação
#### Estrutura básica
```C++
// Função que define as variáveis 
#define -> tipo primitivo + nome + 

// Função que define as configurações dos dispositivos (executada uma única vez)
void setup() {
   pinMode (Nome_do_dispositivo, Status_de_energia);

/* Status de energia:
OUTPUT = Saída
INPUT = Entrada */

}

// Função que define os comandos a serem executados (se mantém em execução)
void loop() {
}
```

##### Exemplo
```C++
int ledRed = 8;
int ledBlue = 7;

// Função que define as configurações dos dispositivos (executada uma única vez)
void setup() {
   pinMode (ledRed, OUTPUT);
   pinMode (ledBlue, OUTPUT);
}

// Função que define os comandos a serem executados (se mantém em execução)
void loop() {
   digitalWrite(ledRed, HIGH);
   digitalWrite(ledBlue, LOW);
   delay(1000);
}
```

![Captura de tela 2024-08-14 163210 (1)](https://github.com/user-attachments/assets/0deb37d1-1ccf-48a8-ab8e-680847ed7cf5)



### Estatística
 **Descritiva, Inferencial e Probabilística.**
- Descritiva é aquela relacionada a descrição dos dados, representada pelas medidas de: centralidade (Média, moda e mediana), posição (Amplitude e Quartis), dispersão (Variância e Desvio Padrão).

