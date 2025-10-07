#include "copycat.h"

int main(int argc, char const **argv, char const **environ)
{
    CopyCat firstCat;

    CopyCat secondCat{ environ };

    CopyCat thirdCat(argc, argv);
}