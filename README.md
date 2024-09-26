<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
<h1>Repositório de Exercícios em C 💻
</h1>
<img src="https://media.giphy.com/media/HCwnYWnMgLZUW1BtP2/giphy.gif?cid=ecf05e474eice3n8gdd39ngcjkw8tom6j7le3liucz5rmj9b&ep=v1_stickers_search&rid=giphy.gif&ct=s" />
    <h2>Atividades em Linguagem C</h2>
    <p>
        Este repositório contém uma coleção de atividades práticas desenvolvidas na linguagem C. As atividades abordam conceitos fundamentais e avançados, proporcionando uma base sólida para programadores iniciantes e intermediários.
    </p>
<br>
<h2>Índice</h2>
    <ol>
        <li><a href="#programas">Programas utilizados</a></li>
        <li><a href="#utilização">Como utilizar os programas</a></li>
        <li><a href="#atividades">Lista de atividades</a></li>
    </ol>
<br>
<h2 id="programas">Programas utilizados</h2>
    <p>
        Para compilar e executar os programas, você precisará ter um compilador C. Você pode usar o GDB online (GNU Debugger) ou até mesmo o VSCode. Para iniciar no GDB, você pode acessá-lo usando o seguinte link: <a href="https://www.onlinegdb.com/">clique aqui</a>.
    </p>
<br><br>
<h2 id="utilização">Como utilizar os programas</h2>
<h3>VSCode</h3>
    <ol>
        <li><strong>Instale o VSCode</strong>
            <ul>
                <li>Baixe e instale o <a href="https://code.visualstudio.com/">Visual Studio Code</a> do site oficial.</li>
            </ul>
        </li><br>
        <li><strong>Instale o GCC</strong>
            <ul>
                <li><strong>Windows</strong>: Baixe o <a href="https://sourceforge.net/projects/mingw/">MinGW</a> e adicione o caminho ao <code>PATH</code>.</li>
                <li><strong>Linux</strong>: Use o comando:
                    <pre><code>sudo apt install build-essential</code></pre>
                </li>
                <li><strong>MacOS</strong>: Instale as ferramentas de linha de comando com:
                    <pre><code>xcode-select --install</code></pre>
                </li><br>
            </ul>
        </li>
        <li><strong>Adicione a Extensão C/C++</strong>
            <ul>
                <li>Abra o VSCode, vá até a aba de extensões (ícone de quadrado) e instale a extensão "C/C++" da Microsoft.</li>
            </ul>
        </li><br>
        <li><strong>Crie um Novo Projeto</strong>
            <ul>
                <li>Crie uma nova pasta para seu projeto e abra-a no VSCode. Dentro dela, crie um arquivo com a extensão .c, como <code>main.c</code>.</li>
            </ul>
        </li><br>
        <li><strong>Escreva Seu Código</strong>
            <ul>
                <li>No arquivo <code>main.c</code>, escreva seu código em C.</li>
            </ul>
        </li><br>
        <li><strong>Compile e Execute</strong>
            <ul>
                <li>Abra o terminal no VSCode (View > Terminal). Compile seu código com:
                    <pre><code>gcc main.c -o main</code></pre>
                </li>
                <li>E execute com:
                    <pre><code>./main   # Linux/macOS</code></pre>
                    <pre><code>main.exe # Windows</code></pre>
                </li>
            </ul>
        </li>
    </ol>
<br>
<h3>GDB Online</h3>
    <ol>
        <li><strong>Escolha uma Plataforma Online</strong>: Use sites como <a href="https://www.onlinegdb.com/">OnlineGDB</a> ou <a href="https://replit.com/">Replit</a>.</li><br>
        <li><strong>Criar um Novo Projeto</strong>: No site escolhido, selecione a opção para criar um novo projeto em C.</li><br>
        <li><strong>Escrever o Código</strong>: No editor, escreva seu código C. Por exemplo:
            <pre><code>#include &lt;stdio.h&gt;

int main() {
printf("Hello, World!\\n");
return 0;
}
</code></pre>
</li><br>
<li><strong>Compilar o Código</strong>: Clique no botão de compilar (geralmente chamado "Run" ou "Compile").</li><br>
<li><strong>Iniciar o GDB</strong>: Se a plataforma suportar, procure a opção de depuração (debug) e inicie o GDB.</li><br>
<li><strong>Usar o GDB</strong>: Defina breakpoints, execute o código passo a passo e inspecione variáveis conforme necessário.</li><br>
<li><strong>Executar o Programa</strong>: Após a depuração, execute seu programa para ver os resultados.</li>
</ol><br><br>

<h2 id="atividades">Lista de atividades</h2>
    <ol>
        <li>Faça um programa em C que solicita ao usuário para digitar sua idade e exibe a idade daqui a 10 anos.</li><br>
        <li>Faça um programa em C que receba um número inteiro informado pelo usuário e apresente seu sucessor e seu antecessor.</li><br>
        <li>Crie um programa que solicite ao usuário dois números inteiros e exiba a soma deles.</li><br>
        <li>Crie um programa que verifique se um número digitado pelo usuário é par ou ímpar.</li><br>
        <li>Faça um programa em C que apresente na tela o seu nome.</li><br>
        <li>Faça um programa em C que leia um número inteiro informado pelo usuário e ao final mostre:
            <ul>
                <li>a. O número digitado;</li>
                <li>b. A metade do número digitado;</li>
                <li>c. O dobro do número digitado.</li>
            </ul>
        </li><br>
        <li>Faça um programa em C para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras. O número de cavalos deverá ser informado pelo usuário.</li><br>
        <li>Faça um programa em C que leia três notas de um aluno, calcule e imprima a média aritmética dessas notas.  </li><br>
        <li>Faça um programa em C que receba o peso de uma pessoa, calcule e mostre:
            <ul>
                <li>a. o novo peso se a pessoa engordar 15% sobre o peso digitado;</li>
                <li>b. o novo peso se a pessoa emagrecer 20% sobre o peso digitado.</li>
            </ul>
        </li>
    </ol>
</body>
</html>
