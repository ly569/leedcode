char* replaceSpace(char* s){
    char *str = calloc(sizeof(char), strlen(s) * 6);
    int k = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            str[k++] = '%';
            str[k++] = '2';
            str[k++] = '0';
            continue;
        } 
        str[k++] = s[i];
    }
    return str;
}