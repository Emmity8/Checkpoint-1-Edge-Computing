# 📍 Projeto Checkpoint - Leitura de Luz com Arduino

Este projeto foi desenvolvido como um checkpoint da disciplina de **Edge Computing em parceria à Vinheria Agnello**, utilizando o **Arduino**. O objetivo principal é monitorar a intensidade da luz ambiente com um **sensor LDR** e sinalizar, por meio de LEDs, o nível de luminosidade detectado.

## 🔧 Componentes Utilizados

- 1 Arduino Uno
- 1 Sensor LDR
- 3 LEDs (Verde, Amarelo, Vermelho)
- 3 Resistores (220Ω ou 330Ω para os LEDs)
- 1 Resistor (10kΩ para o LDR)
- Jumpers
- Protoboard

## ⚙️ Funcionamento

O código faz leituras contínuas do sensor de luz (LDR) e, com base no valor lido, aciona um dos três LEDs:

- **Verde**: Luz ambiente baixa (segura)
- **Amarelo**: Luz em nível de alerta
- **Vermelho**: Luz muito forte (crítica)

As faixas de luminosidade são definidas por dois limites:

```cpp
const unsigned int LIMITE_ALERTA = 700;
const unsigned int LIMITE_OK = 400;
```

### 🔄 Lógica de Decisão

- **valorLuz < 400**: Liga o LED **Verde**
- **400 ≤ valorLuz < 700**: Liga o LED **Amarelo**
- **valorLuz ≥ 700**: Liga o LED **Vermelho**

Esses limites podem ser ajustados conforme o ambiente ou o tipo de aplicação.

## 🖥️ Código Fonte

O código foi escrito em **C/C++ para Arduino** e está disponível no arquivo `main.ino`. Ele utiliza as funções básicas de entrada analógica (`analogRead`) e saída digital (`digitalWrite`), além da comunicação serial para depuração.

## 🧪 Como Testar

1. Monte o circuito conforme o [diagrama no Tinkercad]
- (https://www.tinkercad.com/things/lzXK4H5Dn5Z/editel?sharecode=Mqug-0mmLDSlU_eYF61Dd4i285_we88Ub1hY1G79DfU)

## 📚 Aprendizados

Este projeto introduz conceitos como:
- Leitura de sensores analógicos
- Uso de condicionais (`if`, `else if`, `else`)
- Controle de atuadores (LEDs)
- Comunicação serial com o computador

## 📌 Observações

- Os valores de leitura podem variar de acordo com o ambiente, tipo do LDR ou iluminação presente.
- Ideal para quem está aprendendo Arduino e deseja entender melhor o uso de sensores e lógica de controle.

---

Checkpoint de Edge Computing desenvolvido por: 
- **Guilherme Ruiz Costa (RM: 563236)**
- **Guilherme Moura Gama (RM: 562162)** 
- **João Batista Lima Neto (RM: 563426)** 
- **Júlio César Augusto Vieira (RM: 563366)**
