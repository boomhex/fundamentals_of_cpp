#include "copycat.h"

int main(int argc, char const **argv, char const **environ)
{
    CopyCat firstCat;
    firstCat.display();

    CopyCat secondCat{ environ };
    secondCat.display();

    CopyCat thirdCat(argc, argv);
    thirdCat.display();
}