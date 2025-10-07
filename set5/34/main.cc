#include "copycat.h"

int main(int argc, char **argv, char **environ)
{
    CopyCat firstCat;

    CopyCat secondCat{ environ };

    CopyCat thirdCat(argc, argv);
}