typedef struct
{
    unsigned int    dwMagic;
    unsigned int    dwSize;
    unsigned int    dwFlags;
    unsigned int    dwHeight;
    unsigned int    dwWidth;
    unsigned int    dwPitchOrLinearSize;
    unsigned int    dwDepth;
    unsigned int    dwMipMapCount;
    unsigned int    dwReserved1[ 11 ];

    /*  DDPIXELFORMAT   */
    struct
    {
        unsigned int    dwSize;
        unsigned int    dwFlags;
        unsigned int    dwFourCC;
        unsigned int    dwRGBBitCount;
        unsigned int    dwRBitMask;
        unsigned int    dwGBitMask;
        unsigned int    dwBBitMask;
        unsigned int    dwAlphaBitMask;
    }
    sPixelFormat;

    /*  DDCAPS2 */
    struct
    {
        unsigned int    dwCaps1;
        unsigned int    dwCaps2;
        unsigned int    dwDDSX;
        unsigned int    dwReserved;
    }
    sCaps;
    unsigned int    dwReserved2;
}
DDS_header ;

#include "soil-src/image_helper.c"
#include "soil-src/SOIL.c"
#include "soil-src/image_DXT.c"
#include "soil-src/stb_image_aug.c"
