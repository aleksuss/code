void strLowerCase(char str[]) {
    for ( char *s = str; *s != 0; s++ ) {
        if ( *s >= 'A' && *s <= 'Z' ) {
            *s += 32;
        }
    }
}
