#define LOWER 0
#define UPPER 300
#define STEP 20

main()/*FAHRENHEIT-CELSIUS*/
{
    int FAHR;
    for (FAHR = LOWER; FAHR <= UPPER; FAHR += STEP)
        printf("%4d%6.1f\n", FAHR, (5.0/9.0)*(FAHR-32.0));
    return 0;
}
