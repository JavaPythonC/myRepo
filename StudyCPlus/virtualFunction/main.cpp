#include "main.h"
#include "Father.h"
#include "Child.h"
#include "Grandson.h"


using namespace std;

int main()
{
   Father onefather;
   Child onechild;

   Father* father = &onefather;
   Father* child = &onechild;

   father->claim();
   child->claim();

   Father& f= onefather;
   Father& c= onechild;

   f.claim();
   c.claim();

   cout << " =========== " <<endl;

   Grandson onegrand;

   char* p = "ABB";
   *p = 'X';

}
