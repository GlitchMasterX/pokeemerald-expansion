static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/test/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");
static const u32 sFieldMugshotGfx_XylarNormal[] = INCBIN_U32("graphics/field_mugshots/xylar/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_Xylarquest[] = INCBIN_U32("graphics/field_mugshots/xylar/question.4bpp.lz");
static const u16 sFieldMugshotPal_XylarNormal[] = INCBIN_U16("graphics/field_mugshots/xylar/normal.gbapal");
static const u16 sFieldMugshotPal_Xylarquest[] = INCBIN_U16("graphics/field_mugshots/xylar/question.gbapal");
static const u32 sFieldMugshotGfx_XylarAngry[] = INCBIN_U32("graphics/field_mugshots/xylar/angry.4bpp.lz");
static const u32 sFieldMugshotGfx_XylarMad[] = INCBIN_U32("graphics/field_mugshots/xylar/mad.4bpp.lz");
static const u16 sFieldMugshotPal_XylarAngry[] = INCBIN_U16("graphics/field_mugshots/xylar/angry.gbapal");
static const u16 sFieldMugshotPal_XylarMad[] = INCBIN_U16("graphics/field_mugshots/xylar/mad.gbapal");
static const u32 sFieldMugshotGfx_XylarTear[] = INCBIN_U32("graphics/field_mugshots/xylar/tears.4bpp.lz");
static const u32 sFieldMugshotGfx_XylarSmile[] = INCBIN_U32("graphics/field_mugshots/xylar/norm_smile.4bpp.lz");
static const u16 sFieldMugshotPal_XylarTear[] = INCBIN_U16("graphics/field_mugshots/xylar/tears.gbapal");
static const u16 sFieldMugshotPal_XylarSmile[] = INCBIN_U16("graphics/field_mugshots/xylar/norm_smile.gbapal");
static const u32 sFieldMugshotGfx_XylarNorm[] = INCBIN_U32("graphics/field_mugshots/xylar/norm.4bpp.lz");
static const u32 sFieldMugshotGfx_XylarShock[] = INCBIN_U32("graphics/field_mugshots/xylar/shock.4bpp.lz");
static const u16 sFieldMugshotPal_XylarNorm[] = INCBIN_U16("graphics/field_mugshots/xylar/norm.gbapal");
static const u16 sFieldMugshotPal_XylarShock[] = INCBIN_U16("graphics/field_mugshots/xylar/shock.gbapal");
static const u16 sFieldMugshotPal_XylarSleep[] = INCBIN_U16("graphics/field_mugshots/xylar/sleep.gbapal");
static const u32 sFieldMugshotGfx_XylarSleep[] = INCBIN_U32("graphics/field_mugshots/xylar/sleep.4bpp.lz");
struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_TEST] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_TestNormal,
            .pal = sFieldMugshotPal_TestNormal,
        },

        [EMOTE_QUESTION] =
        {
            .gfx = sFieldMugshotGfx_TestAlt,
            .pal = sFieldMugshotPal_TestAlt,
        },
    },

    [MUGSHOT_XYLAR] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_XylarNormal,
            .pal = sFieldMugshotPal_XylarNormal,
        },

        [EMOTE_QUESTION] =
        {
            .gfx = sFieldMugshotGfx_Xylarquest,
            .pal = sFieldMugshotPal_Xylarquest,
        },

        [EMOTE_ANGRY] =
        {
            .gfx = sFieldMugshotGfx_XylarAngry,
            .pal = sFieldMugshotPal_XylarAngry,
        },

        [EMOTE_MAD] =
        {
            .gfx = sFieldMugshotGfx_XylarMad,
            .pal = sFieldMugshotPal_XylarMad,
        },

        [EMOTE_SLEEP] =
        {
            .gfx = sFieldMugshotGfx_XylarSleep,
            .pal = sFieldMugshotPal_XylarSleep,
        },

        [EMOTE_SHOCK] =
        {
            .gfx = sFieldMugshotGfx_XylarShock,
            .pal = sFieldMugshotPal_XylarShock,
        },

        [EMOTE_SMILE] =
        {
            .gfx = sFieldMugshotGfx_XylarSmile,
            .pal = sFieldMugshotPal_XylarSmile,
        },

        [EMOTE_NORM] =
        {
            .gfx = sFieldMugshotGfx_XylarNorm,
            .pal = sFieldMugshotPal_XylarNorm,
        },

        [EMOTE_TEAR] =
        {
            .gfx = sFieldMugshotGfx_XylarTear,
            .pal = sFieldMugshotPal_XylarTear,
        },
    },
};
