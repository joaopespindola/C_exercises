int main ()
{
    int a, b, t;
    scanf("%i %i", &a, &b);
    t = b-a;
    if (!t)
        t = 24;
    if (t < 0)
        t += 24;
    printf("O JOGO DUROU %i HORA(S)\n", t);
    return 0;
}