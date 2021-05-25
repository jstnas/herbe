#include "palette.c"
static const char *font_pattern = "Gohu GohuFont:pixelsize=11";
static const unsigned line_spacing = 5;
static const unsigned int padding = 8;

static const unsigned int width = 300;
static const unsigned int border_size = 2;
static const unsigned int pos_x = 30;
static const unsigned int pos_y = 60;

enum corners { TOP_LEFT, TOP_RIGHT, BOTTOM_LEFT, BOTTOM_RIGHT };
enum corners corner = TOP_RIGHT;

static const unsigned int duration = 5; /* in seconds */

#define DISMISS_BUTTON Button1
#define ACTION_BUTTON Button3
