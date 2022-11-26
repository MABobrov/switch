#include<stdio.h>

int main() {
    int day = 0, month = 0;
    for (;;){
        printf("введите день и месяц в формате ДД М ");
    scanf("%i %i", &day, &month);
    if ((day != 0) && (month != 0))break;
    else printf("Ошибка, попробуйте еще раз\n");}
    //printf("month=");scanf("%i", &month);
    //printf("year" );scanf("%i",&year);
    if ((day > 31) && (month != 2)){
        printf("Ошибка, попробуйте еще раз\n");}
        else
            switch (month) {
                case 1: {
                    if (day >= 20)printf("водолей"); else { printf("козерог"); }
                }
                    break;
                case 2: {
                    if (day > 28)printf("в феврале 28 дней");
                    else {
                        if (day < 19)printf("водолей");
                        else
                            printf("рыбы");
                        }
                    }
                    break;
                    case 3: {
                        if (day < 21) printf("рыбы"); else printf("овен");
                    }
                    break;
                    case 4: {
                        if (day < 20)printf("овен"); else printf("телец");
                    }
                    break;
                    case 5: {
                        if (day < 21)printf("телец"); else  printf("близнецы");
                    }
                    break;
                    case 6: {
                        if (day < 22)printf("близнецы"); else printf("рак");
                    }
                    break;
                    case 7: {
                        if (day < 23)printf("рак"); else  printf("лев");
                    }
                    break;
                    case 8: {
                        if (day < 22)printf("лев"); else  printf("дева");
                    }
                    break;
                    case 9: {
                        if (day < 23)printf("дева"); else  printf("весы");
                    }
                    break;
                    case 10: {
                        if (day < 24)printf("весы"); else  printf("скорпион");
                    }
                    break;
                    case 11: {
                        if (day < 23)printf("скорпион"); else  printf("стрелец");
                    }
                    break;
                    case 12: {
                        if (day < 22)printf("стрелец"); else  printf("козерог");
                    }
                    break;

                    default: {
                        printf("такого месяца нет!");
                    }
                }
    return 0;
            }
