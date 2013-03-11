void strLowerCase(char str[]) {
    for ( char *s = str; *s != 0; s++ ) {
        if ( *s >= 'a' && *s <= 'z' ) {
            *s -= 32;
        }
    }
}
