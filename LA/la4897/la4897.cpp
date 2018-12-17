#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void text_to_num(string str, ll len);
void num_to_text(string str, ll len);

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    string str;
    ll len, i;

    while(getline(cin, str)){
        if(str == "*")  break;

        len = str.size();

        if(str[0] >= 'A' && str[0] <= 'Z'){
            text_to_num(str, len);
        } else {
            num_to_text(str, len);
        }
    }

    return 0;
}

void num_to_text(string str, ll len){
    ll i;
    map <string, char> text;
    map <string, char> :: iterator it;

    text.insert(pair <string, char> ("2", 'A'));
    text.insert(pair <string, char> ("22", 'B'));
    text.insert(pair <string, char> ("222", 'C'));
    text.insert(pair <string, char> ("3", 'D'));
    text.insert(pair <string, char> ("33", 'E'));
    text.insert(pair <string, char> ("333", 'F'));
    text.insert(pair <string, char> ("4", 'G'));
    text.insert(pair <string, char> ("44", 'H'));
    text.insert(pair <string, char> ("444", 'I'));
    text.insert(pair <string, char> ("5", 'J'));
    text.insert(pair <string, char> ("55", 'K'));
    text.insert(pair <string, char> ("555", 'L'));
    text.insert(pair <string, char> ("6", 'M'));
    text.insert(pair <string, char> ("66", 'N'));
    text.insert(pair <string, char> ("666", 'O'));
    text.insert(pair <string, char> ("7", 'P'));
    text.insert(pair <string, char> ("77", 'Q'));
    text.insert(pair <string, char> ("777", 'R'));
    text.insert(pair <string, char> ("7777", 'S'));
    text.insert(pair <string, char> ("8", 'T'));
    text.insert(pair <string, char> ("88", 'U'));
    text.insert(pair <string, char> ("888", 'V'));
    text.insert(pair <string, char> ("9", 'W'));
    text.insert(pair <string, char> ("99", 'X'));
    text.insert(pair <string, char> ("999", 'Y'));
    text.insert(pair <string, char> ("9999", 'Z'));
    string current;
    for(i = 0; i < len; i++){
        if(str[i] == '-'){
            if(current.size() > 0){
                cout << text[current];
            }
            current.clear();
            continue;
        } else if (str[i] == '#'){
            cout << " ";
            ++i;
        } else if (str[i] == 'P'){
            if(current.size() > 0){
                cout << text[current];
            }
            current.clear();
            i++;
            continue;
        } else {
            current += str[i];
        }
        if(i == len - 1){
            cout << text[current];
        }
    }
    cout << endl;
}

void text_to_num(string str, ll len){
    ll i;
    map <char, string> text;
    map <char, string> :: iterator it;

    text.insert(pair <char, string> ('A', "2"));
    text.insert(pair <char, string> ('B', "22"));
    text.insert(pair <char, string> ('C', "222"));
    text.insert(pair <char, string> ('D', "3"));
    text.insert(pair <char, string> ('E', "33"));
    text.insert(pair <char, string> ('F', "333"));
    text.insert(pair <char, string> ('G', "4"));
    text.insert(pair <char, string> ('H', "44"));
    text.insert(pair <char, string> ('I', "444"));
    text.insert(pair <char, string> ('J', "5"));
    text.insert(pair <char, string> ('K', "55"));
    text.insert(pair <char, string> ('L', "555"));
    text.insert(pair <char, string> ('M', "6"));
    text.insert(pair <char, string> ('N', "66"));
    text.insert(pair <char, string> ('O', "666"));
    text.insert(pair <char, string> ('P', "7"));
    text.insert(pair <char, string> ('Q', "77"));
    text.insert(pair <char, string> ('R', "777"));
    text.insert(pair <char, string> ('S', "7777"));
    text.insert(pair <char, string> ('T', "8"));
    text.insert(pair <char, string> ('U', "88"));
    text.insert(pair <char, string> ('V', "888"));
    text.insert(pair <char, string> ('W', "9"));
    text.insert(pair <char, string> ('X', "99"));
    text.insert(pair <char, string> ('Y', "999"));
    text.insert(pair <char, string> ('Z', "9999"));

    string before, current;

    for(i = 0; i < len; i++){
        if (str[i] == ' ') cout << "-#";
        else {
            if(i > 0){
                current = text[str[i]];
                if(current[0] == before[0]) cout << "P";
            }
            if(i > 0 && i < len){
                cout << "-";
            }
            cout << text[str[i]];

            before = text[str[i]];
        }
    }
    cout << endl;
}