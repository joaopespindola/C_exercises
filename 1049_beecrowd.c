#include <stdio.h>
    int main(){
        char vi[15], tipo[15], ali[15];
        scanf("%s", vi);
        scanf("%s", tipo);
        scanf("%s", ali);
        if (vi[0]=='v' && tipo[0]=='a' && ali[0]=='c')printf("aguia\n");
        if (vi[0]=='v' && tipo[0]=='a' && ali[0]=='o')printf("pomba\n");
        if (vi[0]=='v' && tipo[0]=='m' && ali[0]=='o')printf("homem\n");
        if (vi[0]=='v' && tipo[0]=='m' && ali[0]=='h')printf("vaca\n");
        if (vi[0]=='i' && tipo[0]=='i' && ali[3]=='a')printf("pulga\n");
        if (vi[0]=='i' && tipo[0]=='i' && ali[2]=='r')printf("lagarta\n");
        if (vi[0]=='i' && tipo[0]=='a' && ali[0]=='h')printf("sanguessuga\n");
        if (vi[0]=='i' && tipo[0]=='a' && ali[0]=='o')printf("minhoca\n");
    return 0;
}