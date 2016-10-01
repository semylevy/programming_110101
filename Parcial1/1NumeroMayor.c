init;
var num1;
var num2;
var num3;
get num1;
get num2;
get num3;
if (num1>num2)
{
    if (num1>num3)
    {
        
        print num1;
    }
    else if (num2>num1)
    {
        if (num2>num3)
        {
            print num2;
        }
        else if (num3>num1)
        {
            if (num3>num2)
            {
                print num3;
            }
        }
    }
}
end;