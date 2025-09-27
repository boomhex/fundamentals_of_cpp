
char checkInput(int const argc, char const *argv[])
{
        if (argc != 2 ||
            argv[1][0] != '-' ||
            argv[1][1] == '\0' ||
            argv[1][2] != '\0')
            return '\0';
        return argv[1][1];
}