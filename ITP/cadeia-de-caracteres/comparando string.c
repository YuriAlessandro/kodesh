int my_strcmp(char *str1, char *str2) {
    int i = 0, l;
    while (str1[i] != 0 || str2[i] != 0)
        if (str1[i] > str2[i])
            return 1;
        else if (str1[i] < str2[i])
            return -1;
        else
            l = 0, i++;
    return l;
}
