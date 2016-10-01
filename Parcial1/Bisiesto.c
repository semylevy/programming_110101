init;

unsigned short int anio;
get anio;

if(anio%4 == 0)

{
    if(anio%100 == 0)
    {
        if(anio%400 == 0)
        {
            printf ("si es bisiesto");
        }
        else
        {
            printf ("no es bisiesto");
        }
    }
    else
    {
        printf ("si es bisiesto");
    }
}

else

{
    printf ("no es bisiesto");
}

end;