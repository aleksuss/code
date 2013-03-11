#include <iostream>
#include <fstream>
#include <map>
#include <set>

using namespace std;

int main() {
    // //Chars out !!!!!
    // set<char> chars;
    // fstream in;
    
    // in.open("task.in");
    // for ( char c; in >> c; ) {
    //     chars.insert(c);
    // }
    // in.close();
    // for ( set<char>::iterator iter = chars.begin(); iter != chars.end(); iter++ ) {
    //     cout << *iter << ' ';
    // }
    // cout << endl;

    // Letter out !!!!!
    set<char> chars;
    fstream in;
    
    in.open("task.in");
    for ( char c; in >> c; ) {
        if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        chars.insert(c);
    }
    in.close();
    for ( set<char>::iterator iter = chars.begin(); iter != chars.end(); iter++ ) {
        cout << *iter << ' ';
    }
    cout << endl;

    // Letters count !!!
    map<char, int> chars;
    fstream in;
    
    in.open("task.in");
    for ( char c; in >> c; ) {
        if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        chars[c] += 1;
    }
    in.close();
    for ( map<char, int>::iterator iter = chars.begin(); iter != chars.end(); iter++ ) {
        cout << iter->first << ' ' << iter->second << endl;
    }

    // //Words out !!!!
    #include <string>
    set<string> words;
    fstream in;
    
    in.open("task.in");
    for ( string word; in >> word; ) {
        //if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        words.insert(word);
    }
    in.close();
    for ( set<string>::iterator iter = words.begin(); iter != words.end(); iter++ ) {
        cout << *iter << ' ';
    }
    cout << endl;

    // //Words count !!!!
    // #include <string>
    map<string, int> words;
    fstream in;
    
    in.open("task.in");
    for ( string word; in >> word; ) {
        //if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        words[word] += 1;
    }
    in.close();
    for ( map<string, int>::iterator iter = words.begin(); iter != words.end(); iter++ ) {
        cout << iter->first << ' ' << iter->second << endl;
    }   

    return 0;
}