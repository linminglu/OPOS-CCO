//*************************************************************************
//** OPOS CheckScanner Constants
//*************************************************************************

typedef [helpstring("OPOS CheckScanner Constants")]
enum
{
    CHK_CCL_MONO                              = 0x00000001,
    CHK_CCL_GRAYSCALE                         = 0x00000002,
    CHK_CCL_16                                = 0x00000004,
    CHK_CCL_256                               = 0x00000008,
    CHK_CCL_FULL                              = 0x00000010,
    CHK_CIF_NATIVE                            = 0x00000001,
    CHK_CIF_TIFF                              = 0x00000002,
    CHK_CIF_BMP                               = 0x00000004,
    CHK_CIF_JPEG                              = 0x00000008,
    CHK_CIF_GIF                               = 0x00000010,
    CHK_CL_MONO                               = 1,
    CHK_CL_GRAYSCALE                          = 2,
    CHK_CL_16                                 = 3,
    CHK_CL_256                                = 4,
    CHK_CL_FULL                               = 5,
    CHK_AUTOMATIC_CONTRAST                    = -1,
    CHK_IF_NATIVE                             = 1,
    CHK_IF_TIFF                               = 2,
    CHK_IF_BMP                                = 3,
    CHK_IF_JPEG                               = 4,
    CHK_IF_GIF                                = 5,
    CHK_IMS_EMPTY                             = 1,
    CHK_IMS_OK                                = 2,
    CHK_IMS_FULL                              = 3,
    CHK_MM_DOTS                               = 1,
    CHK_MM_TWIPS                              = 2,
    CHK_MM_ENGLISH                            = 3,
    CHK_MM_METRIC                             = 4,
    CHK_CLR_ALL                               = 1,
    CHK_CLR_BY_FILEID                         = 2,
    CHK_CLR_BY_FILEINDEX                      = 3,
    CHK_CLR_BY_IMAGETAGDATA                   = 4,
    CHK_CROP_AREA_ENTIRE_IMAGE                = -1,
    CHK_CROP_AREA_RESET_ALL                   = -2,
    CHK_CROP_AREA_RIGHT                       = -1,
    CHK_CROP_AREA_BOTTOM                      = -1,
    CHK_LOCATE_BY_FILEID                      = 1,
    CHK_LOCATE_BY_FILEINDEX                   = 2,
    CHK_LOCATE_BY_IMAGETAGDATA                = 3,
    CHK_SUE_SCANCOMPLETE                      = 11,
    OPOS_ECHK_NOCHECK                         = 201,
    OPOS_ECHK_CHECK                           = 202,
    OPOS_ECHK_NOROOM                          = 203
} OPOSCheckScannerConstants;
