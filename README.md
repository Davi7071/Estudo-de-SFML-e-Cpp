
Projeto simples de jogo em C++ utilizando a biblioteca [SFML](https://www.sfml-dev.org/). Ele apresenta uma janela gráfica com um personagem que pode ser movimentado com as teclas `W`, `A`, `S` e `D`.

O personagem é carregado a partir de um spritesheet e pode ser movido em quatro direções. 

## Tecnologias

- **C++**
- **[SFML 3.0](https://www.sfml-dev.org/)**
- Sistema de entrada via teclado
- Renderização de sprite com textura

## Como executar

1. Certifique-se de ter a **SFML** instalada corretamente em sua IDE (ex: Visual Studio).
2. Baixe ou clone o repositório:
   ```bash
   git clone https://github.com/seu-usuario/andarilho.git
   ```
3. Verifique se o caminho da textura (`spritesheet.png`) está correto:
   (Altere o caminho se necessário.)

4. Compile e execute o projeto.

## Controles

- `W` → Move o personagem para cima
- `A` → Move o personagem para a esquerda
- `S` → Move o personagem para baixo
- `D` → Move o personagem para a direita

## Estrutura esperada

```
andarilho/
├── Assets/
│   └── Player/
│       └── Textures/
│           └── spritesheet.png
├── main.cpp
```

## ⚠️ Observações

- O projeto não inclui lógica de colisão ou animação de quadros do spritesheet.
- O arquivo de textura deve ter uma grade de 64x64 pixels para cada sprite.
