#include <iostream>
/* Engineering student be like */
#define startSemester 1
#define endSemester 0
using namespace std;
int main ()
{
	for (int i = 1; i <= 8; i++)
	{
		if(startSemester)
		{
			cout << "Iss sem me a66e se padhunga,";
			cout << " notes v banaunga,";
			cout << " exam me faad dunga." << endl;
		}
		else if (endSemester)
		{
			cout << "Classes attend kar leni thi,";
			cout << "notes bna lene the yrr, ";
			cout << "kisi ke pass notes hai kya ??.";
		}
	}
	return 0;
}