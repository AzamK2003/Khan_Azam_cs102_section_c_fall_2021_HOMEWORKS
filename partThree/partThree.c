#include <stdio.h>

void draw_A()
{
printf("  ##  \n");
printf(" #  # \n");
printf("######\n");
printf("#    #\n");
printf("#    #\n");
printf("\n");
}

void draw_B()
{
printf("##### \n");
printf("#    #\n");
printf("##### \n");
printf("#    #\n");
printf("##### \n");
printf("\n");
}

void draw_C()
{
printf("######\n");
printf("#     \n");
printf("#     \n");
printf("#     \n");
printf("######\n");
printf("\n");
}

void draw_D()
{
printf("##### \n");
printf("#    #\n");
printf("#    #\n");
printf("#    #\n");
printf("##### \n");
printf("\n");
}

void draw_E()
{
printf("######\n");
printf("#     \n");
printf("######\n");
printf("#     \n");
printf("######\n");
printf("\n");
}

void draw_F()
{
printf("######\n");
printf("#     \n");
printf("######\n");
printf("#     \n");
printf("#     \n");
printf("\n");
}

void draw_G()
{
printf("######\n");
printf("#     \n");
printf("#  ###\n");
printf("#    #\n");
printf("######\n");
printf("\n");
}

void draw_H()
{
printf("#    #\n");
printf("#    #\n");
printf("######\n");
printf("#    #\n");
printf("#    #\n");
printf("\n");
}

void draw_I()
{
printf("######\n");
printf("  ##  \n");
printf("  ##  \n");
printf("  ##  \n");
printf("######\n");
printf("\n");
}

void draw_J()
{
printf("######\n");
printf("     #\n");
printf("     #\n");
printf("#    #\n");
printf("######\n");
printf("\n");
}

void draw_K()
{
printf("#  #  \n");
printf("# #   \n");
printf("##    \n");
printf("# #   \n");
printf("#  #  \n");
printf("\n");
}

void draw_L()
{
printf("#     \n");
printf("#     \n");
printf("#     \n");
printf("#     \n");
printf("######\n");
printf("\n");
}

void draw_M()
{
printf("#    #\n");
printf("##  ##\n");
printf("# ## #\n");
printf("#    #\n");
printf("#    #\n");
printf("\n");
}

void draw_N()
{
printf("#    #\n");
printf("##   #\n");
printf("# #  #\n");
printf("#  # #\n");
printf("#   ##\n");
printf("\n");
}

void draw_O()
{
printf("######\n");
printf("#    #\n");
printf("#    #\n");
printf("#    #\n");
printf("######\n");
printf("\n");
}

void draw_P()
{
printf("######\n");
printf("#    #\n");
printf("######\n");
printf("#     \n");
printf("#     \n");
printf("\n");
}

void draw_Q()
{
printf("######\n");
printf("#    #\n");
printf("#  # #\n");
printf("######\n");
printf("     #\n");
printf("\n");
}

void draw_R()
{
printf("#####R\n");
printf("#    #\n");
printf("######\n");
printf("#  #  \n");
printf("#   ##\n");
printf("\n");
}

void draw_S()
{
printf("######\n");
printf("#     \n");
printf("######\n");
printf("     #\n");
printf("######\n");
printf("\n");
}

void draw_T()
{
printf("######\n");
printf("  ##  \n");
printf("  ##  \n");
printf("  ##  \n");
printf("  ##  \n");
printf("\n");
}

void draw_U()
{
printf("#    #\n");
printf("#    #\n");
printf("#    #\n");
printf("#    #\n");
printf("######\n");
printf("\n");
}

void draw_V()
{
printf("#    #\n");
printf("#    #\n");
printf(" #  # \n");
printf(" #  # \n");
printf("  ##  \n");
printf("\n");
}

void draw_W()
{
printf("#    #\n");
printf("#    #\n");
printf("# ## #\n");
printf("##  ##\n");
printf("#    #\n");
printf("\n");
}

void draw_X()
{
printf("#    #\n");
printf(" #  # \n");
printf("  ##  \n");
printf(" #  #  \n");
printf("#    #\n");
printf("\n");
}

void draw_Y()
{
printf("#    #\n");
printf("#    #\n");
printf("######\n");
printf("  ##  \n");
printf("  ##  \n");
printf("\n");
}

void draw_Z()
{
printf("######\n");
printf("    # \n");
printf("  #   \n");
printf("#     \n");
printf("######\n");
printf("\n");
}


main() {
    char str[10];
    int i;
    printf("Enter a short string(all capital): ");
    scanf("%s", &str);
    for(i=0;i<10;i++){
        if(str[i] == 'A'){
        draw_A();
	    }
	    if(str[i] == 'B'){
        draw_B();
        }
	if(str[i] == 'C'){
        draw_C();
        }
	if(str[i] == 'D'){
        draw_D();
        }
	if(str[i] == 'E'){
        draw_E();
        }
	if(str[i] == 'F'){
        draw_F();
        }
	if(str[i] == 'G'){
        draw_G();
        }
	if(str[i] == 'H'){
        draw_H();
        }
	if(str[i] == 'I'){
        draw_I();
        }
	if(str[i] == 'J'){
        draw_J();
        }
	if(str[i] == 'K'){
        draw_K();
        }
	if(str[i] == 'L'){
        draw_L();
        }
	if(str[i] == 'M'){
        draw_M();
        }
	if(str[i] == 'N'){
        draw_N();
        }
	if(str[i] == 'O'){
        draw_O();
        }
	if(str[i] == 'P'){
        draw_P();
        }
	if(str[i] == 'Q'){
        draw_Q();
        }
	if(str[i] == 'R'){
        draw_R();
        }
	if(str[i] == 'S'){
        draw_S();
        }
	if(str[i] == 'T'){
        draw_T();
        }
	if(str[i] == 'U'){
        draw_U();
        }
	if(str[i] == 'V'){
        draw_V();
        }
	if(str[i] == 'W'){
        draw_W();
        }
	if(str[i] == 'X'){
        draw_X();
        }
	if(str[i] == 'Y'){
        draw_Y();
        }
	if(str[i] == 'Z'){
        draw_Z();
        }
	}
}
