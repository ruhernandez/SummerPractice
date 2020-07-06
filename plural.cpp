/*------------------------------------------------------------------------------*/
/* Filename         :   201810776_plurak.cpp                                    */
/* Description      :   Elementary Pluralizer                                   */
/* Author           :   Russel Reyes Hernandez                                  */
/* Course and Year  :   BS CS - 2                                               */
/* Last Modified    :   July 6, 2020                                            */
/* Honor Code       :   This is my own code. I have worked hard in completing   */
/*                      this work and I have not copied from any unauthorized   */
/*                      resource. I am also well aware of the policies          */
/*                      stipulated in the college student handbook regarding    */
/*                      academic dishonesty.                                    */
/*------------------------------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;

	cin >> n;

	while (n--){

		string s;

		cin >> s;

		int temp = s.length() - 1;

		char add_s = 's';

		if (s[temp] == 'x' || s[temp] == 's' || s[temp] == 'o' || (s[temp] == 'h' && s[temp-1] == 'c')){
			s += "es";
		}else if (s[temp] == 'y'){
			s.erase(temp);
			s += "ies";
		}else if (s[temp] == 'f'){
			s.erase(temp);
			s += "ves";
		}else if (s[temp] == 'e' && s[temp-1] == 'f'){
			s.erase(temp-1, temp);
			s += "ves";
		}else{
			s += add_s;
		}

		cout << s << endl;

	}

	return 0;
}