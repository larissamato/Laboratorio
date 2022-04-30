#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int inteiro AnoAtual(int mes)
{
    int dias=0
    // Cálculo de dias vividos nos meses do ano atual
    if (mes == 2) dias=  31;
    else if (mes ==3)dias = 31 + 28 ;
    else if (mes == 4)dias = 31 + 28 + 31;
    else if (mes == 5)dias = 31 + 28 + 31 + 30;
    else if (mes == 6)dias = 31 + 28 + 31 + 30 + 31;
    else if (mes == 7)dias = 31 + 28 + 31 + 30 + 31 + 30;
    else if (mes == 8)dias = 31 + 28 + 31 + 30 + 31 + 30 + 31;
    else if (mes == 9)dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
    else if (mes == 10)dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
    else if (mes == 11)dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
    else if (mes == 12)dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    return dias;
}
int PrimeiroAno(int mes)
{
    int dias =0
    // Cálculo de dias vividos nos meses do primeiro ano
    if (mes == 1)dias= 365  - 31;
    else if (mes == 2)dias= 365  - 31 - 28;
    else if (mes == 3)dias= 365  - 31 - 28 - 31;
    else if (mes == 4)dias= 365  - 31 - 28 - 31  - 30;
    else if (mes == 5)dias= 365  - 31 - 28 - 31  - 30 - 31;
    else if (mes == 6)dias= 365 - 31 - 28 - 31  - 30 - 31 - 30;
    else if (mes == 7)dias= 365  - 31 - 28 - 31  - 30 - 31 - 30 - 31;
    else if (mes == 8)dias= 365  - 31 - 28 - 31  - 30 - 31 - 30 - 31 - 31;
    else if (mes == 9)dias= 365 - 31 - 28  - 31  - 30 - 31 - 30 - 31 - 31 - 30;
    else if (mes == 10)dias= 365  - 31 - 28 - 31  - 30 - 31 - 30 - 31 - 31 - 30 - 31;
    else if (mes == 11)dias= 365  - 31 - 28  - 31  - 30 - 31 - 30 - 31 - 31 - 30 - 31 - 30;
    else if (mes == 12)dias= 0;
    return dias
}
int Bissexto(int ano)
{
    if( ano%4 ==0)
    return 1
    
    retorne 0
}
        funcao inteiro diasPrimeiroMes(inteiro mes, inteiro dias)
        {
                
                inteiro d=0
                se (mes == 2)
                {
                        d= 28-dias
                }senao{
                        se( mes == 4 ou  mes == 6 ou mes == 9 ou mes == 11)
                        {       
                                d = 30 - dias
                        }senao{
                                
                                d = 31-dias
                        }       
                }
                retorne d
        }
        funcao inteiro anosBissextoIntervalo ( inteiro anoNas, inteiro anoAtual)
        {       
                inteiro temp, anosBissexto=0
                temp =  anoAtual - anoNas - 1
                
                se (temp/4 >1)
                {
                        se(temp % 4 == 1)
                        {
                                anosBissexto=ehBissexto(anoNas+1)
                        }senao{
                                se(temp % 4 == 2)
                                {
                                        anosBissexto=ehBissexto(anoNas+1)       + ehBissexto(anoNas+2)
                                }senao{
        
                                        se(temp % 4 == 3)
                                        {
                                                anosBissexto=ehBissexto(anoNas+1)       + ehBissexto(anoNas+2) + ehBissexto(anoNas+3)
                                        }
                                }
                        }
                }
                anosBissexto=anosBissexto+temp/4
                retorne anosBissexto
        }
        
        funcao inicio()
        {
                inteiro dian, mesn, anon, diaa, mesa, anoa, bisa, bisn
                inteiro dias=0, meses, anos, temp, tempb
                
                escreva("Digite dia, mes e ano de nascimento:")
                leia(dian, mesn, anon)

                escreva("Digite dia, mes e ano atuais:")
                leia(diaa, mesa, anoa)

                se(anon < anoa)
                {
                        dias = diasPrimeiroMes(mesn, dian)
                        dias = dias + mesesPrimeiroAno(mesn)
                        dias = dias + diaa
                        dias = dias + mesesAtualAno(mesa)
                        se(mesn<3)
                        {
                                dias = dias + ehBissexto(anon)
                        }
                        se(mesa>2)
                        {
                                dias = dias + ehBissexto(anoa)
                                
                        }
                        
                        // Cálculo de dias vividos entre os dois anos
                        temp =  anoa -anon -1
                        dias= dias + temp *365 
                        dias = dias + anosBissextoIntervalo(anon, anoa)
                        
                }senao{
                        se (mesn<mesa)
                        {
                                dias = diasPrimeiroMes(mesn, dian)
                                dias = dias + diaa
                                se(mesn<mesa-1)
                                {
                                        dias = dias + mesesPrimeiroAno(mesn) - mesesPrimeiroAno(mesa-1) 
                                        //Precisa ser menos um para retirar um mês já contado em diaa
                                }
                        }senao{
                                dias = diaa-dian
                        }
                }
                escreva("Dias vividos: ", dias)
        }
}