/**
 * _trlen - String lenght
* @str: Input
* Description: Lenght of the strin
* Return: The lenght
*/
int s_trlen(char *str)
{
int x = 0;
while (str[x] != '\0')
x++;
return (x);
}
