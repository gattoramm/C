#define EOF 0
main()/* COUNT CHARACTERS IN INPUT */
{
    long NC;
    NC = 0;
    while (getchar() != EOF)
        ++NC;
    printf("%1d\n", NC);
    return 0;
}
