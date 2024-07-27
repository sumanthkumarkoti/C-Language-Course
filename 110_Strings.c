// Program to read password and check strength
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MIN_LENGTH 8
main()
{
    const char* check_password_strength(const char *password);
    char password[100];

    printf("\n Enter the password : ");
    scanf("%99s",password);

    const char* strength=check_password_strength(password);
    printf("\n Password strength : %s",strength);

    printf("\n");
}
const char* check_password_strength(const char *password)
{
    if (strlen(password) < MIN_LENGTH)
        return "Password is too short. It must be at least 8 characters long.";

    int has_lower=contains_lower(password);
    int has_upper=contains_upper(password);
    int has_digit=contains_digit(password);
    int has_symbol=contains_symbol(password);

    if (has_lower && has_upper && has_digit && has_symbol)
        return "Very Strong";
    else if (has_lower && has_upper && (has_digit || has_symbol))
        return "Strong";
    else if (has_lower && (has_upper || has_digit || has_symbol))
        return "Medium";
    else if (has_lower && !has_upper && !has_digit && !has_symbol)
        return "Weak";
    else
        return "Password does not meet the required criteria.";
}

int contains_lower(const char *password)
{
    while (*password)
    {
        if (islower(*password))
            return 1;
        password++;
    }
    return 0;
}

int contains_upper(const char *password)
{
    while (*password)
    {
        if (isupper(*password))
            return 1;
        password++;
    }
    return 0;
}

int contains_digit(const char *password)
{
    while (*password)
    {
        if (isdigit(*password))
            return 1;
        password++;
    }
    return 0;
}

int contains_symbol(const char *password)
{
    while (*password)
    {
        if (!isalnum(*password))
            return 1;
        password++;
    }
    return 0;
}
