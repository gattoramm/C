#define EOF 65
main()/* COUNT LINES IN INPUT */
{
    int C, NL;
    NL = 0;
    while ((C = getchar()) != EOF)
        if (C == '\n')
            ++NL;
    printf("%1d\n", NL);
    return 0;
}
