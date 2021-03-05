#include <stdio.h>

int main(){
	char zodiac[12][10] = {{"rat"}, {"ox"}, {"tiger"}, {"rabbit"}, {"dragon"}, {"snake"},
		               {"horse"}, {"sheep"}, {"monkey"}, {"rooster"}, {"dog"}, {"pig"}};       
	int year;
	scanf("%d", &year);
	int flag;
	flag = (year - 1900) % 12;
        (flag >= 0) ? printf("%s\n", zodiac[flag]) : printf("%s\n", zodiac[12 + flag]);
	return 0;
}  
