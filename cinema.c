//Nome completo:Giovanni Favorin de Melo Matrícula:UC21106179 Curso:Ciência da computação

#include <stdlib.h>//integrar as bibliotecas 
#include <stdio.h>
#include <string.h>



int main () {

    int QSessoes, QPessoas, idade, contador, sexoM = 0, sexoF = 0,idadeC = 0, idadeAdo = 0, idadeAdul = 0, idadeIdo = 0, mulheresAdul = 0, homensAdul = 0;//declarar as variaveis do tipo int
    char  sexo, sessao1[100], sessao2[100], final;//declarar as variaveis do tipo car

    
    
    printf("\n ******************************************");//questão estética
    printf("\n *Quantas pessoas assistiram ao filme?            ");//pergunta direta ao usuário, afim de obter o valor da variável
    scanf("%d", &QPessoas);//armazenar o valor da variável no endereço explícito
    if(QPessoas >= 10) { //condicional para delimitar o mínimo de pessoas
        for(contador = 1; contador <= QPessoas; contador++) { //loop, para repetir o processo abaixo até que a condicional seja satisfeita
            printf("\n Qual o sexo da %d * pessoa? M ou F?          ", contador);//pergunta direta ao usuário, afim de obter o valor da variável
            scanf("%s", &sexo);//armazenar o valor da variável no endereço explícito

            switch (toupper(sexo)) {//condicional para evitar o uso de muitos ifs, e agilizar minha vida
                case 'M'://casos em que a condicional é satisfeita
                    sexoM = sexoM + 1;//contagem 
                    break;//fechar o caso
                case 'F'://casos em que a condicional é satisfeita
                    sexoF = sexoF + 1;//contagem 
                    break;//fechar o caso
                default://casos em que a condicional não é satisfeita
                    printf("Coloque F ou M\n");//informar ao usuario o caso de erro
                    return;//cessar todas as funções 
            }
            
            printf("Qual a idade da %d * pessoas?           ", contador);//pergunta direta ao usuário, afim de obter o valor da variável
            scanf("%d", &idade);//armazenar o valor da variável no endereço explícito
            
            if(idade < 3 || idade > 100){//condicional para delimitar a idade
                printf("\n Idade invalida, por ser ``maior que 100`` ou, ``menor que 3`` ");//informar ao usuario o caso de erro
                return;//cessar todas as funções
             } if(idade >= 3 && idade <= 13) {//condicional para fazer a contagem
                idadeC = idadeC + 1;//contagem
             } else if(idade >= 14 && idade <= 17) {//condicional para fazer a contagem
                idadeAdo = idadeAdo + 1;//contagem
            } else if(idade >= 18 && idade <= 64) {//condicional para fazer a contagem
                idadeAdul = idadeAdul +1;//contagem
            } else if (idade >= 65) {//condicional para fazer a contagem
                idadeIdo = idadeIdo + 1;//contagem
            }
            
            if ((toupper(sexo) == 'F') && ((idade >= 18 && idade <= 100)) )//condicional para fazer a contagem
            {
                mulheresAdul = mulheresAdul + 1;//contagem
            }
            if ((toupper(sexo) == 'M') && ((idade >= 18 && idade <= 100)) )//condicional para fazer a contagem
            {
                homensAdul = homensAdul + 1;//contagem
            }
        }
            
    } else {//condicional onde nenhum dos casos foi satisfeito
        printf("Quantidade de pessoas menor que 10\n");//informar ao usuario o caso de erro
        return;//cessar todas as funções
    }
    
    
    printf("\n Quantas sessoes foram assistidas?            ");//pergunta direta ao usuário, afim de obter o valor da variável
    scanf("%d", &QSessoes);//armazenar o valor da variável no endereço explícito
    if (QSessoes != 2) {//condicional para delimitar a quantidade de sessões
        printf("\n Quantidade invalida de sessoes, devem ser 2");//informar ao usuario o caso de erro
        return;//cessar todas as funções
    }
    getchar();//sinceramente, n sei bem a função especifica disso, mas ele serviu pra impedir bugs nos próximos dois printf, então, pra mim ele serviu pra impedir bugs
    printf("\n Qual o nome do filme da primeira sessao?         ");//pergunta direta ao usuário, afim de obter o valor da variável
    fgets(sessao1, 100,  stdin);//armazenar as variaveis strings no endereço citado
        if(strlen(sessao1) == 1) {//condicional para impedir respostas vazias
            printf("Nome invalido");//informar ao usuario o caso de erro
            return;//cessar todas as funções
    }
    printf("\n Qual o nome do filme da segunda sessao?          ");//pergunta direta ao usuário, afim de obter o valor da variável
    fgets(sessao2, 100, stdin);//armazenar as variaveis strings no endereço citado
        if(strlen(sessao2) == 1) {//condicional para impedir respostas vazias
            printf("Nome invalido");//informar ao usuario o caso de erro
            return;//cessar todas as funções
    }

    printf("\n ******************************************\n");//questão estetica

    system("cls");//era pra dar clear no terminal todo, não consegui descobrir pq ele não apagava as primeiras perguntas
    
    printf("\nO filme 1 e:%s", sessao1);//demonstrar o valor desejado
    printf("O filme 2 e:%s", sessao2);//demonstrar o valor desejado
    printf("%d, Quantidade de pessoas", QPessoas);//demonstrar o valor desejado
    printf("\n%d, Quantidade de mulheres\n", sexoF);//demonstrar o valor desejado
    printf("%d, Quantidade de homens", sexoM);//demonstrar o valor desejado
    printf("\n%d, Quantidade de criancas\n", idadeC);//demonstrar o valor desejado
    printf("%d, Quantidade de adolescentes", idadeAdo);//demonstrar o valor desejado
    printf("\n%d, Quantidade de adultos\n", idadeAdul);//demonstrar o valor desejado
    printf("%d, Quantidade de idosos", idadeIdo);//demonstrar o valor desejado
    printf("\n%d, Quantidade de mulheres adultas\n", mulheresAdul);//demonstrar o valor desejado
    printf("%d, Quantidade de homens adultos", homensAdul);//demonstrar o valor desejado



    return 0;//retornar 0, usei pra terminar o programa
}

 
//system("cls"); 
//printf("\33[H\33[2J");

