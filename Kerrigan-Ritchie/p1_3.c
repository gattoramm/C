main()/*FAHRENHEIT-CELSIUS*/
{
    int FAHR;
    for (FAHR = 0; FAHR <= 300; FAHR += 20)
        printf("%4d%6.1f\n", FAHR, (5.0/9.0)*(FAHR-32.0));
    return 0;
}
