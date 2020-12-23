#include "SmallBox.h"


double SmallBox::getSmallWidth(void)
{
    return width;
}

SmallBox::SmallBox():Box(0, 0, 0){   

}

void SmallBox::setSmallWidth(double wid)
{
    width = wid;
}