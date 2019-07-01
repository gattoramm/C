/*
************************************************************************
*                                                                      *
*   Напишите программу для подсчета пробелов, табуляций и новых строк  *
*                                                                      *
************************************************************************
*/
#define EOF 65
main()/* COUNT LINES, TABS, SPACES IN INPUT */
{
    int C, NL, NT, NS; //NewLine, NewTab, NewSpace
    NL = NT = NS = 0;
    while ((C = getchar()) != EOF)
        if (C == '\n')
            ++NL;
        else if (C == '\t')
            ++NT;
        else if (C == ' ')
            ++NS;
    printf("Lines = ");
    printf("%1d\n", NL);
    printf("Tabs = ");
    printf("%1d\n", NT);
    printf("Spaces = ");
    printf("%1d\n", NS);
    return 0;
}
