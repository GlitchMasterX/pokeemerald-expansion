static const u16 sTilesetPalOverride_General01[] = INCBIN_U16("data/tilesets/primary/general/override_palettes/01.gbapal");
static const u16 sTilesetPalOverride_General05[] = INCBIN_U16("data/tilesets/primary/general/override_palettes/05.gbapal");
static const u16 sTilesetPalOverride_Petalburg06_08[] = INCBIN_U16("data/tilesets/secondary/petalburg/override_palettes/06_08.gbapal");
static const u16 gTilesetPalOverride_Academy14[] = INCBIN_U16("data/tilesets/secondary/battle_arena/override_palettes/14.gbapal");
static const u16 gTilesetPalOverride_Luxura[] = INCBIN_U16("data/tilesets/secondary/luxuraisland/override_palettes/08.gbapal");
#define OVERRIDES_END { .slot = 0xFF, }

const struct PaletteOverride gTilesetPalOverrides_General[] =
{
    {
        .slot = 1,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_General01,
    },
    {
        .slot = 5,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_General05,
    },
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_Petalburg[] =
{
    {
        .slot = 6,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Petalburg06_08,
    },
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Petalburg06_08,
    },
    OVERRIDES_END
};
const struct PaletteOverride gTilesetPalOverrides_Academy[] =
{
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Academy14,
    },
    {
        .slot = 6,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Academy14,
    },
    OVERRIDES_END
};
const struct PaletteOverride gTilesetPalOverrides_Luxura[] =
{
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Luxura,
    },
    OVERRIDES_END
};